﻿/**
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
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult();
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Updated attributes for the accelerator.</p>
     */
    inline const AcceleratorAttributes& GetAcceleratorAttributes() const{ return m_acceleratorAttributes; }
    inline void SetAcceleratorAttributes(const AcceleratorAttributes& value) { m_acceleratorAttributes = value; }
    inline void SetAcceleratorAttributes(AcceleratorAttributes&& value) { m_acceleratorAttributes = std::move(value); }
    inline UpdateAcceleratorAttributesResult& WithAcceleratorAttributes(const AcceleratorAttributes& value) { SetAcceleratorAttributes(value); return *this;}
    inline UpdateAcceleratorAttributesResult& WithAcceleratorAttributes(AcceleratorAttributes&& value) { SetAcceleratorAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAcceleratorAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAcceleratorAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAcceleratorAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AcceleratorAttributes m_acceleratorAttributes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
