/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/DomainDescriptionType.h>
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
  class DescribeUserPoolDomainResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the requested user pool domain.</p>
     */
    inline const DomainDescriptionType& GetDomainDescription() const { return m_domainDescription; }
    template<typename DomainDescriptionT = DomainDescriptionType>
    void SetDomainDescription(DomainDescriptionT&& value) { m_domainDescriptionHasBeenSet = true; m_domainDescription = std::forward<DomainDescriptionT>(value); }
    template<typename DomainDescriptionT = DomainDescriptionType>
    DescribeUserPoolDomainResult& WithDomainDescription(DomainDescriptionT&& value) { SetDomainDescription(std::forward<DomainDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserPoolDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainDescriptionType m_domainDescription;
    bool m_domainDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
