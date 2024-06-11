﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingAcceleratorAttributes.h>
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
  class UpdateCustomRoutingAcceleratorAttributesResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorAttributesResult();
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Updated custom routing accelerator.</p>
     */
    inline const CustomRoutingAcceleratorAttributes& GetAcceleratorAttributes() const{ return m_acceleratorAttributes; }
    inline void SetAcceleratorAttributes(const CustomRoutingAcceleratorAttributes& value) { m_acceleratorAttributes = value; }
    inline void SetAcceleratorAttributes(CustomRoutingAcceleratorAttributes&& value) { m_acceleratorAttributes = std::move(value); }
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithAcceleratorAttributes(const CustomRoutingAcceleratorAttributes& value) { SetAcceleratorAttributes(value); return *this;}
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithAcceleratorAttributes(CustomRoutingAcceleratorAttributes&& value) { SetAcceleratorAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CustomRoutingAcceleratorAttributes m_acceleratorAttributes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
