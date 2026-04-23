/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_TRANSFER_API TestIdentityProviderResult
  {
  public:
    TestIdentityProviderResult();
    TestIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    TestIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline TestIdentityProviderResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline TestIdentityProviderResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The result of the authorization test as a message. </p>
     */
    inline TestIdentityProviderResult& WithMessage(const char* value) { SetMessage(value); return *this;}


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

    Aws::String m_message;

    int m_statusCode;

    Aws::String m_url;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
