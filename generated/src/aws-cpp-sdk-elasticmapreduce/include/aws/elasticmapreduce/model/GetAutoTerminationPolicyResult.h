/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/AutoTerminationPolicy.h>
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
namespace EMR
{
namespace Model
{
  class GetAutoTerminationPolicyResult
  {
  public:
    AWS_EMR_API GetAutoTerminationPolicyResult() = default;
    AWS_EMR_API GetAutoTerminationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetAutoTerminationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the auto-termination policy that is attached to an Amazon EMR
     * cluster. </p>
     */
    inline const AutoTerminationPolicy& GetAutoTerminationPolicy() const { return m_autoTerminationPolicy; }
    template<typename AutoTerminationPolicyT = AutoTerminationPolicy>
    void SetAutoTerminationPolicy(AutoTerminationPolicyT&& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = std::forward<AutoTerminationPolicyT>(value); }
    template<typename AutoTerminationPolicyT = AutoTerminationPolicy>
    GetAutoTerminationPolicyResult& WithAutoTerminationPolicy(AutoTerminationPolicyT&& value) { SetAutoTerminationPolicy(std::forward<AutoTerminationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutoTerminationPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutoTerminationPolicy m_autoTerminationPolicy;
    bool m_autoTerminationPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
