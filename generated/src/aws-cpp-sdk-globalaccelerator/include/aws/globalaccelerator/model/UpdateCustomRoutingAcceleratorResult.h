/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingAccelerator.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class UpdateCustomRoutingAcceleratorResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorResult() = default;
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the updated custom routing accelerator.</p>
     */
    inline const CustomRoutingAccelerator& GetAccelerator() const { return m_accelerator; }
    template<typename AcceleratorT = CustomRoutingAccelerator>
    void SetAccelerator(AcceleratorT&& value) { m_acceleratorHasBeenSet = true; m_accelerator = std::forward<AcceleratorT>(value); }
    template<typename AcceleratorT = CustomRoutingAccelerator>
    UpdateCustomRoutingAcceleratorResult& WithAccelerator(AcceleratorT&& value) { SetAccelerator(std::forward<AcceleratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCustomRoutingAcceleratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CustomRoutingAccelerator m_accelerator;
    bool m_acceleratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
