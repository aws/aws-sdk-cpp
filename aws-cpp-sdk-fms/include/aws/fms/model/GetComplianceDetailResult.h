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
  class AWS_FMS_API GetComplianceDetailResult
  {
  public:
    GetComplianceDetailResult();
    GetComplianceDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetComplianceDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
