/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/AcceleratorAttributes.h>
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
  class UpdateAcceleratorAttributesResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult() = default;
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline const AcceleratorAttributes& GetAcceleratorAttributes() const { return m_acceleratorAttributes; }
    template<typename AcceleratorAttributesT = AcceleratorAttributes>
    void SetAcceleratorAttributes(AcceleratorAttributesT&& value) { m_acceleratorAttributesHasBeenSet = true; m_acceleratorAttributes = std::forward<AcceleratorAttributesT>(value); }
    template<typename AcceleratorAttributesT = AcceleratorAttributes>
    UpdateAcceleratorAttributesResult& WithAcceleratorAttributes(AcceleratorAttributesT&& value) { SetAcceleratorAttributes(std::forward<AcceleratorAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAcceleratorAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AcceleratorAttributes m_acceleratorAttributes;
    bool m_acceleratorAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
