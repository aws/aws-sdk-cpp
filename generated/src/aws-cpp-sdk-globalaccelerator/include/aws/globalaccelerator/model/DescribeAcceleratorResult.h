﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Accelerator.h>
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
  class DescribeAcceleratorResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeAcceleratorResult();
    AWS_GLOBALACCELERATOR_API DescribeAcceleratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeAcceleratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of the accelerator.</p>
     */
    inline const Accelerator& GetAccelerator() const{ return m_accelerator; }
    inline void SetAccelerator(const Accelerator& value) { m_accelerator = value; }
    inline void SetAccelerator(Accelerator&& value) { m_accelerator = std::move(value); }
    inline DescribeAcceleratorResult& WithAccelerator(const Accelerator& value) { SetAccelerator(value); return *this;}
    inline DescribeAcceleratorResult& WithAccelerator(Accelerator&& value) { SetAccelerator(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAcceleratorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAcceleratorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAcceleratorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Accelerator m_accelerator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
