/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSUrlPresigner.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/http/HttpClientFactory.h>

namespace Aws
{
namespace Client
{

using HttpRequest = Http::HttpRequest;
using HttpMethod = Http::HttpMethod;
using URI = Http::URI;


AWSUrlPresigner::AWSUrlPresigner(const AWSClient& client)
    : m_awsClient(client)
{}


Aws::Client::AWSAuthSigner* AWSUrlPresigner::GetSignerByName(const char* name) const
{
    return m_awsClient.GetSignerByName(name);
}

std::shared_ptr<Aws::Http::HttpRequest>
ConvertToRequestForPresigning(const Aws::AmazonWebServiceRequest& request,
                              const Aws::Http::URI& uri,
                              Aws::Http::HttpMethod method,
                              const Aws::Http::QueryStringParameterCollection& extraParams)
{
    Aws::Http::URI uriCopy = uri;
    request.PutToPresignedUrl(uriCopy);
    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(uriCopy, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);

    for (auto& param : extraParams)
    {
        httpRequest->AddQueryStringParameter(param.first.c_str(), param.second);
    }

    return httpRequest;
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const URI& uri, HttpMethod method, long long expirationInSeconds)
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const URI& uri, HttpMethod method, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds)
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    for (const auto& it: customizedHeaders)
    {
        request->SetHeaderValue(it.first.c_str(), it.second);
    }
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const URI& uri, HttpMethod method, const char* region, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, region, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const URI& uri, HttpMethod method, const char* region, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds)
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    for (const auto& it: customizedHeaders)
    {
        request->SetHeaderValue(it.first.c_str(), it.second);
    }
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, region, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, region, serviceName, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds)
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    for (const auto& it: customizedHeaders)
    {
        request->SetHeaderValue(it.first.c_str(), it.second);
    }
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, region, serviceName, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char* signerName, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(signerName);
    if (signer->PresignRequest(*request, region, serviceName, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char* signerName, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds)
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    for (const auto& it: customizedHeaders)
    {
        request->SetHeaderValue(it.first.c_str(), it.second);
    }
    auto signer = GetSignerByName(signerName);
    if (signer->PresignRequest(*request, region, serviceName, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::Endpoint::AWSEndpoint& endpoint,
                                            Aws::Http::HttpMethod method /* = Http::HttpMethod::HTTP_POST */,
                                            const Aws::Http::HeaderValueCollection& customizedHeaders /* = {} */,
                                            uint64_t expirationInSeconds /* = 0 */,
                                            const char* signerName /* = Aws::Auth::SIGV4_SIGNER */,
                                            const char* signerRegionOverride /* = nullptr */,
                                            const char* signerServiceNameOverride /* = nullptr */)
{
    const Aws::Http::URI& uri = endpoint.GetURI();
    if (endpoint.GetAttributes()) {
        signerName = endpoint.GetAttributes()->authScheme.GetName().c_str();
        if (endpoint.GetAttributes()->authScheme.GetSigningRegion()) {
            signerRegionOverride = endpoint.GetAttributes()->authScheme.GetSigningRegion()->c_str();
        }
        if (endpoint.GetAttributes()->authScheme.GetSigningRegionSet()) {
            signerRegionOverride = endpoint.GetAttributes()->authScheme.GetSigningRegionSet()->c_str();
        }
        if (endpoint.GetAttributes()->authScheme.GetSigningName()) {
            signerServiceNameOverride = endpoint.GetAttributes()->authScheme.GetSigningName()->c_str();
        }
    }

    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    for (const auto& it : endpoint.GetHeaders())
    {
        request->SetHeaderValue(it.first, it.second);
    }
    for (const auto& it: customizedHeaders)
    {
        request->SetHeaderValue(it.first, it.second);
    }
    auto signer = GetSignerByName(signerName);
    if (signer->PresignRequest(*request, signerRegionOverride, signerServiceNameOverride, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region,
                                            const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
            ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*httpRequest, region, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char *signerName,
                                            const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
            ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(signerName);
    if (signer->PresignRequest(*httpRequest, region, serviceName, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName,
                                            const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
            ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*httpRequest, region, serviceName, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return {};
}

Aws::String AWSUrlPresigner::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, const Aws::Http::URI& uri, Aws::Http::HttpMethod method,
                                            const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
            ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*httpRequest, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return {};
}

} // namespace Client
} // namespace Aws