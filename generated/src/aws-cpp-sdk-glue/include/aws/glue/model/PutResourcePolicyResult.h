/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class PutResourcePolicyResult
  {
  public:
    AWS_GLUE_API PutResourcePolicyResult() = default;
    AWS_GLUE_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A hash of the policy that has just been set. This must be included in a
     * subsequent call that overwrites or updates this policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const { return m_policyHash; }
    template<typename PolicyHashT = Aws::String>
    void SetPolicyHash(PolicyHashT&& value) { m_policyHashHasBeenSet = true; m_policyHash = std::forward<PolicyHashT>(value); }
    template<typename PolicyHashT = Aws::String>
    PutResourcePolicyResult& WithPolicyHash(PolicyHashT&& value) { SetPolicyHash(std::forward<PolicyHashT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyHash;
    bool m_policyHashHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
