/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/AcceleratorAttributes.h>
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
  class DescribeAcceleratorAttributesResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeAcceleratorAttributesResult();
    AWS_GLOBALACCELERATOR_API DescribeAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attributes of the accelerator.</p>
     */
    inline const AcceleratorAttributes& GetAcceleratorAttributes() const{ return m_acceleratorAttributes; }

    /**
     * <p>The attributes of the accelerator.</p>
     */
    inline void SetAcceleratorAttributes(const AcceleratorAttributes& value) { m_acceleratorAttributes = value; }

    /**
     * <p>The attributes of the accelerator.</p>
     */
    inline void SetAcceleratorAttributes(AcceleratorAttributes&& value) { m_acceleratorAttributes = std::move(value); }

    /**
     * <p>The attributes of the accelerator.</p>
     */
    inline DescribeAcceleratorAttributesResult& WithAcceleratorAttributes(const AcceleratorAttributes& value) { SetAcceleratorAttributes(value); return *this;}

    /**
     * <p>The attributes of the accelerator.</p>
     */
    inline DescribeAcceleratorAttributesResult& WithAcceleratorAttributes(AcceleratorAttributes&& value) { SetAcceleratorAttributes(std::move(value)); return *this;}

  private:

    AcceleratorAttributes m_acceleratorAttributes;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
