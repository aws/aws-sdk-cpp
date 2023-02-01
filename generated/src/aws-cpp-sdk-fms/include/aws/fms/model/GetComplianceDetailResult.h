/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/PolicyComplianceDetail.h>
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
namespace FMS
{
namespace Model
{
  class GetComplianceDetailResult
  {
  public:
    AWS_FMS_API GetComplianceDetailResult();
    AWS_FMS_API GetComplianceDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetComplianceDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the resources and the policy that you specified in the
     * <code>GetComplianceDetail</code> request.</p>
     */
    inline const PolicyComplianceDetail& GetPolicyComplianceDetail() const{ return m_policyComplianceDetail; }

    /**
     * <p>Information about the resources and the policy that you specified in the
     * <code>GetComplianceDetail</code> request.</p>
     */
    inline void SetPolicyComplianceDetail(const PolicyComplianceDetail& value) { m_policyComplianceDetail = value; }

    /**
     * <p>Information about the resources and the policy that you specified in the
     * <code>GetComplianceDetail</code> request.</p>
     */
    inline void SetPolicyComplianceDetail(PolicyComplianceDetail&& value) { m_policyComplianceDetail = std::move(value); }

    /**
     * <p>Information about the resources and the policy that you specified in the
     * <code>GetComplianceDetail</code> request.</p>
     */
    inline GetComplianceDetailResult& WithPolicyComplianceDetail(const PolicyComplianceDetail& value) { SetPolicyComplianceDetail(value); return *this;}

    /**
     * <p>Information about the resources and the policy that you specified in the
     * <code>GetComplianceDetail</code> request.</p>
     */
    inline GetComplianceDetailResult& WithPolicyComplianceDetail(PolicyComplianceDetail&& value) { SetPolicyComplianceDetail(std::move(value)); return *this;}

  private:

    PolicyComplianceDetail m_policyComplianceDetail;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
