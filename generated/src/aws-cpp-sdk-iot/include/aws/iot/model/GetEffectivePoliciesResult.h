/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/EffectivePolicy.h>
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
namespace IoT
{
namespace Model
{
  class GetEffectivePoliciesResult
  {
  public:
    AWS_IOT_API GetEffectivePoliciesResult() = default;
    AWS_IOT_API GetEffectivePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetEffectivePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The effective policies.</p>
     */
    inline const Aws::Vector<EffectivePolicy>& GetEffectivePolicies() const { return m_effectivePolicies; }
    template<typename EffectivePoliciesT = Aws::Vector<EffectivePolicy>>
    void SetEffectivePolicies(EffectivePoliciesT&& value) { m_effectivePoliciesHasBeenSet = true; m_effectivePolicies = std::forward<EffectivePoliciesT>(value); }
    template<typename EffectivePoliciesT = Aws::Vector<EffectivePolicy>>
    GetEffectivePoliciesResult& WithEffectivePolicies(EffectivePoliciesT&& value) { SetEffectivePolicies(std::forward<EffectivePoliciesT>(value)); return *this;}
    template<typename EffectivePoliciesT = EffectivePolicy>
    GetEffectivePoliciesResult& AddEffectivePolicies(EffectivePoliciesT&& value) { m_effectivePoliciesHasBeenSet = true; m_effectivePolicies.emplace_back(std::forward<EffectivePoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEffectivePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EffectivePolicy> m_effectivePolicies;
    bool m_effectivePoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
