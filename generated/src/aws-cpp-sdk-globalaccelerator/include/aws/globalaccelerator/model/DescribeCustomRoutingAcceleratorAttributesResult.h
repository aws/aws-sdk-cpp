/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingAcceleratorAttributes.h>
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
  class DescribeCustomRoutingAcceleratorAttributesResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingAcceleratorAttributesResult();
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attributes of the custom routing accelerator.</p>
     */
    inline const CustomRoutingAcceleratorAttributes& GetAcceleratorAttributes() const{ return m_acceleratorAttributes; }

    /**
     * <p>The attributes of the custom routing accelerator.</p>
     */
    inline void SetAcceleratorAttributes(const CustomRoutingAcceleratorAttributes& value) { m_acceleratorAttributes = value; }

    /**
     * <p>The attributes of the custom routing accelerator.</p>
     */
    inline void SetAcceleratorAttributes(CustomRoutingAcceleratorAttributes&& value) { m_acceleratorAttributes = std::move(value); }

    /**
     * <p>The attributes of the custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingAcceleratorAttributesResult& WithAcceleratorAttributes(const CustomRoutingAcceleratorAttributes& value) { SetAcceleratorAttributes(value); return *this;}

    /**
     * <p>The attributes of the custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingAcceleratorAttributesResult& WithAcceleratorAttributes(CustomRoutingAcceleratorAttributes&& value) { SetAcceleratorAttributes(std::move(value)); return *this;}

  private:

    CustomRoutingAcceleratorAttributes m_acceleratorAttributes;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
