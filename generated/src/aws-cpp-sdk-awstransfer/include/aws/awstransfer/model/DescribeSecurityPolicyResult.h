/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedSecurityPolicy.h>
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
  class DescribeSecurityPolicyResult
  {
  public:
    AWS_TRANSFER_API DescribeSecurityPolicyResult() = default;
    AWS_TRANSFER_API DescribeSecurityPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeSecurityPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the properties of the security policy.</p>
     */
    inline const DescribedSecurityPolicy& GetSecurityPolicy() const { return m_securityPolicy; }
    template<typename SecurityPolicyT = DescribedSecurityPolicy>
    void SetSecurityPolicy(SecurityPolicyT&& value) { m_securityPolicyHasBeenSet = true; m_securityPolicy = std::forward<SecurityPolicyT>(value); }
    template<typename SecurityPolicyT = DescribedSecurityPolicy>
    DescribeSecurityPolicyResult& WithSecurityPolicy(SecurityPolicyT&& value) { SetSecurityPolicy(std::forward<SecurityPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSecurityPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DescribedSecurityPolicy m_securityPolicy;
    bool m_securityPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
