/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
  class DescribeCustomRoutingAcceleratorResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingAcceleratorResult();
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingAcceleratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingAcceleratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the custom routing accelerator.</p>
     */
    inline const CustomRoutingAccelerator& GetAccelerator() const{ return m_accelerator; }

    /**
     * <p>The description of the custom routing accelerator.</p>
     */
    inline void SetAccelerator(const CustomRoutingAccelerator& value) { m_accelerator = value; }

    /**
     * <p>The description of the custom routing accelerator.</p>
     */
    inline void SetAccelerator(CustomRoutingAccelerator&& value) { m_accelerator = std::move(value); }

    /**
     * <p>The description of the custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingAcceleratorResult& WithAccelerator(const CustomRoutingAccelerator& value) { SetAccelerator(value); return *this;}

    /**
     * <p>The description of the custom routing accelerator.</p>
     */
    inline DescribeCustomRoutingAcceleratorResult& WithAccelerator(CustomRoutingAccelerator&& value) { SetAccelerator(std::move(value)); return *this;}

  private:

    CustomRoutingAccelerator m_accelerator;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
