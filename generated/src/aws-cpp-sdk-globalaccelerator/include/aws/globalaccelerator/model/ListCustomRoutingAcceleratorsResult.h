/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/CustomRoutingAccelerator.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class ListCustomRoutingAcceleratorsResult
  {
  public:
    AWS_GLOBALACCELERATOR_API ListCustomRoutingAcceleratorsResult() = default;
    AWS_GLOBALACCELERATOR_API ListCustomRoutingAcceleratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API ListCustomRoutingAcceleratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of custom routing accelerators for a customer account.</p>
     */
    inline const Aws::Vector<CustomRoutingAccelerator>& GetAccelerators() const { return m_accelerators; }
    template<typename AcceleratorsT = Aws::Vector<CustomRoutingAccelerator>>
    void SetAccelerators(AcceleratorsT&& value) { m_acceleratorsHasBeenSet = true; m_accelerators = std::forward<AcceleratorsT>(value); }
    template<typename AcceleratorsT = Aws::Vector<CustomRoutingAccelerator>>
    ListCustomRoutingAcceleratorsResult& WithAccelerators(AcceleratorsT&& value) { SetAccelerators(std::forward<AcceleratorsT>(value)); return *this;}
    template<typename AcceleratorsT = CustomRoutingAccelerator>
    ListCustomRoutingAcceleratorsResult& AddAccelerators(AcceleratorsT&& value) { m_acceleratorsHasBeenSet = true; m_accelerators.emplace_back(std::forward<AcceleratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomRoutingAcceleratorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomRoutingAcceleratorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomRoutingAccelerator> m_accelerators;
    bool m_acceleratorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
