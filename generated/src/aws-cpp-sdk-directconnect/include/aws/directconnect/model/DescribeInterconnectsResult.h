/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/Interconnect.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeInterconnectsResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeInterconnectsResult() = default;
    AWS_DIRECTCONNECT_API DescribeInterconnectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeInterconnectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The interconnects.</p>
     */
    inline const Aws::Vector<Interconnect>& GetInterconnects() const { return m_interconnects; }
    template<typename InterconnectsT = Aws::Vector<Interconnect>>
    void SetInterconnects(InterconnectsT&& value) { m_interconnectsHasBeenSet = true; m_interconnects = std::forward<InterconnectsT>(value); }
    template<typename InterconnectsT = Aws::Vector<Interconnect>>
    DescribeInterconnectsResult& WithInterconnects(InterconnectsT&& value) { SetInterconnects(std::forward<InterconnectsT>(value)); return *this;}
    template<typename InterconnectsT = Interconnect>
    DescribeInterconnectsResult& AddInterconnects(InterconnectsT&& value) { m_interconnectsHasBeenSet = true; m_interconnects.emplace_back(std::forward<InterconnectsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInterconnectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Interconnect> m_interconnects;
    bool m_interconnectsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
