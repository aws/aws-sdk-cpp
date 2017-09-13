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
#include <aws/cognito-idp/model/DomainDescriptionType.h>
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
  class AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult
  {
  public:
    DescribeUserPoolDomainResult();
    DescribeUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A domain description object containing information about the domain.</p>
     */
    inline const DomainDescriptionType& GetDomainDescription() const{ return m_domainDescription; }

    /**
     * <p>A domain description object containing information about the domain.</p>
     */
    inline void SetDomainDescription(const DomainDescriptionType& value) { m_domainDescription = value; }

    /**
     * <p>A domain description object containing information about the domain.</p>
     */
    inline void SetDomainDescription(DomainDescriptionType&& value) { m_domainDescription = std::move(value); }

    /**
     * <p>A domain description object containing information about the domain.</p>
     */
    inline DescribeUserPoolDomainResult& WithDomainDescription(const DomainDescriptionType& value) { SetDomainDescription(value); return *this;}

    /**
     * <p>A domain description object containing information about the domain.</p>
     */
    inline DescribeUserPoolDomainResult& WithDomainDescription(DomainDescriptionType&& value) { SetDomainDescription(std::move(value)); return *this;}

  private:

    DomainDescriptionType m_domainDescription;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
