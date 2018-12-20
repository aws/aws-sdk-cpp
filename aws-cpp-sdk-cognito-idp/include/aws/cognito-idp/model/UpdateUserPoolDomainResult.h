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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>The UpdateUserPoolDomain response output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomainResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolDomainResult
  {
  public:
    UpdateUserPoolDomainResult();
    UpdateUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline const Aws::String& GetCloudFrontDomain() const{ return m_cloudFrontDomain; }

    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline void SetCloudFrontDomain(const Aws::String& value) { m_cloudFrontDomain = value; }

    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline void SetCloudFrontDomain(Aws::String&& value) { m_cloudFrontDomain = std::move(value); }

    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline void SetCloudFrontDomain(const char* value) { m_cloudFrontDomain.assign(value); }

    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline UpdateUserPoolDomainResult& WithCloudFrontDomain(const Aws::String& value) { SetCloudFrontDomain(value); return *this;}

    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline UpdateUserPoolDomainResult& WithCloudFrontDomain(Aws::String&& value) { SetCloudFrontDomain(std::move(value)); return *this;}

    /**
     * <p>The Amazon CloudFront endpoint that Amazon Cognito set up when you added the
     * custom domain to your user pool.</p>
     */
    inline UpdateUserPoolDomainResult& WithCloudFrontDomain(const char* value) { SetCloudFrontDomain(value); return *this;}

  private:

    Aws::String m_cloudFrontDomain;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
