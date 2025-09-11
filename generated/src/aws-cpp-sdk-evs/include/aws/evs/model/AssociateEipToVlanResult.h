/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/Vlan.h>
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
namespace EVS
{
namespace Model
{
  class AssociateEipToVlanResult
  {
  public:
    AWS_EVS_API AssociateEipToVlanResult() = default;
    AWS_EVS_API AssociateEipToVlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVS_API AssociateEipToVlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Vlan& GetVlan() const { return m_vlan; }
    template<typename VlanT = Vlan>
    void SetVlan(VlanT&& value) { m_vlanHasBeenSet = true; m_vlan = std::forward<VlanT>(value); }
    template<typename VlanT = Vlan>
    AssociateEipToVlanResult& WithVlan(VlanT&& value) { SetVlan(std::forward<VlanT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateEipToVlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Vlan m_vlan;
    bool m_vlanHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
