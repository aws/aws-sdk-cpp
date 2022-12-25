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
  class UpdateCustomRoutingAcceleratorAttributesResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorAttributesResult();
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Updated custom routing accelerator.</p>
     */
    inline const CustomRoutingAcceleratorAttributes& GetAcceleratorAttributes() const{ return m_acceleratorAttributes; }

    /**
     * <p>Updated custom routing accelerator.</p>
     */
    inline void SetAcceleratorAttributes(const CustomRoutingAcceleratorAttributes& value) { m_acceleratorAttributes = value; }

    /**
     * <p>Updated custom routing accelerator.</p>
     */
    inline void SetAcceleratorAttributes(CustomRoutingAcceleratorAttributes&& value) { m_acceleratorAttributes = std::move(value); }

    /**
     * <p>Updated custom routing accelerator.</p>
     */
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithAcceleratorAttributes(const CustomRoutingAcceleratorAttributes& value) { SetAcceleratorAttributes(value); return *this;}

    /**
     * <p>Updated custom routing accelerator.</p>
     */
    inline UpdateCustomRoutingAcceleratorAttributesResult& WithAcceleratorAttributes(CustomRoutingAcceleratorAttributes&& value) { SetAcceleratorAttributes(std::move(value)); return *this;}

  private:

    CustomRoutingAcceleratorAttributes m_acceleratorAttributes;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
