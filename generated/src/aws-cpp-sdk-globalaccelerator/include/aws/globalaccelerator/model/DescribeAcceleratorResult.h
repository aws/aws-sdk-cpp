/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Accelerator.h>
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


    /**
     * <p>The description of the accelerator.</p>
     */
    inline const Accelerator& GetAccelerator() const{ return m_accelerator; }

    /**
     * <p>The description of the accelerator.</p>
     */
    inline void SetAccelerator(const Accelerator& value) { m_accelerator = value; }

    /**
     * <p>The description of the accelerator.</p>
     */
    inline void SetAccelerator(Accelerator&& value) { m_accelerator = std::move(value); }

    /**
     * <p>The description of the accelerator.</p>
     */
    inline DescribeAcceleratorResult& WithAccelerator(const Accelerator& value) { SetAccelerator(value); return *this;}

    /**
     * <p>The description of the accelerator.</p>
     */
    inline DescribeAcceleratorResult& WithAccelerator(Accelerator&& value) { SetAccelerator(std::move(value)); return *this;}

  private:

    Accelerator m_accelerator;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
