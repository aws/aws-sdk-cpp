/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{
  class TestIdentityProviderResult
  {
  public:
    AWS_TRANSFER_API TestIdentityProviderResult();
    AWS_TRANSFER_API TestIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API TestIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline const Aws::String& GetResponse() const{ return m_response; }

    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline void SetResponse(const Aws::String& value) { m_response = value; }

    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline void SetResponse(Aws::String&& value) { m_response = std::move(value); }

    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline void SetResponse(const char* value) { m_response.assign(value); }

    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline TestIdentityProviderResult& WithResponse(const Aws::String& value) { SetResponse(value); return *this;}

    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline TestIdentityProviderResult& WithResponse(Aws::String&& value) { SetResponse(std::move(value)); return *this;}

    /**
     * <p>The response that is returned from your API Gateway.</p>
     */
    inline TestIdentityProviderResult& WithResponse(const char* value) { SetResponse(value); return *this;}


    /**
     * <p>The HTTP status code that is the response from your API Gateway.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code that is the response from your API Gateway.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>The HTTP status code that is the response from your API Gateway.</p>
     */
    inline TestIdentityProviderResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline TestIdentityProviderResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline TestIdentityProviderResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that indicates whether the test was successful or not.</p> 
     * <p>If an empty string is returned, the most likely cause is that the
     * authentication failed due to an incorrect username or password.</p> 
     */
    inline TestIdentityProviderResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline TestIdentityProviderResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline TestIdentityProviderResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The endpoint of the service used to authenticate a user.</p>
     */
    inline TestIdentityProviderResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_response;

    int m_statusCode;

    Aws::String m_message;

    Aws::String m_url;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
