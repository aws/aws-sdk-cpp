/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace AppConfigData
{
namespace Model
{
  class GetLatestConfigurationResult
  {
  public:
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult(GetLatestConfigurationResult&&);
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult& operator=(GetLatestConfigurationResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetLatestConfigurationResult(const GetLatestConfigurationResult&) = delete;
    GetLatestConfigurationResult& operator=(const GetLatestConfigurationResult&) = delete;


    AWS_APPCONFIGDATA_API GetLatestConfigurationResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_APPCONFIGDATA_API GetLatestConfigurationResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline const Aws::String& GetNextPollConfigurationToken() const{ return m_nextPollConfigurationToken; }

    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline void SetNextPollConfigurationToken(const Aws::String& value) { m_nextPollConfigurationToken = value; }

    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline void SetNextPollConfigurationToken(Aws::String&& value) { m_nextPollConfigurationToken = std::move(value); }

    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline void SetNextPollConfigurationToken(const char* value) { m_nextPollConfigurationToken.assign(value); }

    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline GetLatestConfigurationResult& WithNextPollConfigurationToken(const Aws::String& value) { SetNextPollConfigurationToken(value); return *this;}

    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline GetLatestConfigurationResult& WithNextPollConfigurationToken(Aws::String&& value) { SetNextPollConfigurationToken(std::move(value)); return *this;}

    /**
     * <p>The latest token describing the current state of the configuration session.
     * This <i>must</i> be provided to the next call to
     * <code>GetLatestConfiguration.</code> </p>  <p>This token should only
     * be used once. To support long poll use cases, the token is valid for up to 24
     * hours. If a <code>GetLatestConfiguration</code> call uses an expired token, the
     * system returns <code>BadRequestException</code>.</p> 
     */
    inline GetLatestConfigurationResult& WithNextPollConfigurationToken(const char* value) { SetNextPollConfigurationToken(value); return *this;}


    /**
     * <p>The amount of time the client should wait before polling for configuration
     * updates again. Use <code>RequiredMinimumPollIntervalInSeconds</code> to set the
     * desired poll interval.</p>
     */
    inline int GetNextPollIntervalInSeconds() const{ return m_nextPollIntervalInSeconds; }

    /**
     * <p>The amount of time the client should wait before polling for configuration
     * updates again. Use <code>RequiredMinimumPollIntervalInSeconds</code> to set the
     * desired poll interval.</p>
     */
    inline void SetNextPollIntervalInSeconds(int value) { m_nextPollIntervalInSeconds = value; }

    /**
     * <p>The amount of time the client should wait before polling for configuration
     * updates again. Use <code>RequiredMinimumPollIntervalInSeconds</code> to set the
     * desired poll interval.</p>
     */
    inline GetLatestConfigurationResult& WithNextPollIntervalInSeconds(int value) { SetNextPollIntervalInSeconds(value); return *this;}


    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline GetLatestConfigurationResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline GetLatestConfigurationResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>A standard MIME type describing the format of the configuration content.</p>
     */
    inline GetLatestConfigurationResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The data of the configuration. This may be empty if the client already has
     * the latest version of configuration.</p>
     */
    inline Aws::IOStream& GetConfiguration() const { return m_configuration.GetUnderlyingStream(); }

    /**
     * <p>The data of the configuration. This may be empty if the client already has
     * the latest version of configuration.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_configuration = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabel = value; }

    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabel = std::move(value); }

    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabel.assign(value); }

    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline GetLatestConfigurationResult& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline GetLatestConfigurationResult& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>The user-defined label for the AppConfig hosted configuration version. This
     * attribute doesn't apply if the configuration is not from an AppConfig hosted
     * configuration version. If the client already has the latest version of the
     * configuration data, this value is empty.</p>
     */
    inline GetLatestConfigurationResult& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLatestConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLatestConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLatestConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextPollConfigurationToken;

    int m_nextPollIntervalInSeconds;

    Aws::String m_contentType;

    Aws::Utils::Stream::ResponseStream m_configuration;

    Aws::String m_versionLabel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
