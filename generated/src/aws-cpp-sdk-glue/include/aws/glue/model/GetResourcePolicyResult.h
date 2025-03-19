/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{
  class GetResourcePolicyResult
  {
  public:
    AWS_GLUE_API GetResourcePolicyResult() = default;
    AWS_GLUE_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the requested policy document, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyInJson() const { return m_policyInJson; }
    template<typename PolicyInJsonT = Aws::String>
    void SetPolicyInJson(PolicyInJsonT&& value) { m_policyInJsonHasBeenSet = true; m_policyInJson = std::forward<PolicyInJsonT>(value); }
    template<typename PolicyInJsonT = Aws::String>
    GetResourcePolicyResult& WithPolicyInJson(PolicyInJsonT&& value) { SetPolicyInJson(std::forward<PolicyInJsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the hash value associated with this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const { return m_policyHash; }
    template<typename PolicyHashT = Aws::String>
    void SetPolicyHash(PolicyHashT&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::forward<PolicyHashT>(value); }
    template<typename PolicyHashT = Aws::String>
    GetResourcePolicyResult& WithPolicyHash(PolicyHashT&& value) { SetPolicyHash(std::forward<PolicyHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetResourcePolicyResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetResourcePolicyResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyInJson;
    bool m_policyInJsonHasBeenSet = false;

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
