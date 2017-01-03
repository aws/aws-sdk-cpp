﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/PurchaseReservedNodeOfferingMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API PurchaseReservedNodeOfferingRequest : public RedshiftRequest
  {
  public:
    PurchaseReservedNodeOfferingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline const Aws::String& GetReservedNodeOfferingId() const{ return m_reservedNodeOfferingId; }

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline void SetReservedNodeOfferingId(const Aws::String& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = value; }

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline void SetReservedNodeOfferingId(Aws::String&& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = value; }

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline void SetReservedNodeOfferingId(const char* value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId.assign(value); }

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline PurchaseReservedNodeOfferingRequest& WithReservedNodeOfferingId(const Aws::String& value) { SetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline PurchaseReservedNodeOfferingRequest& WithReservedNodeOfferingId(Aws::String&& value) { SetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The unique identifier of the reserved node offering you want to purchase.</p>
     */
    inline PurchaseReservedNodeOfferingRequest& WithReservedNodeOfferingId(const char* value) { SetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The number of reserved nodes that you want to purchase.</p> <p>Default:
     * <code>1</code> </p>
     */
    inline int GetNodeCount() const{ return m_nodeCount; }

    /**
     * <p>The number of reserved nodes that you want to purchase.</p> <p>Default:
     * <code>1</code> </p>
     */
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }

    /**
     * <p>The number of reserved nodes that you want to purchase.</p> <p>Default:
     * <code>1</code> </p>
     */
    inline PurchaseReservedNodeOfferingRequest& WithNodeCount(int value) { SetNodeCount(value); return *this;}

  private:
    Aws::String m_reservedNodeOfferingId;
    bool m_reservedNodeOfferingIdHasBeenSet;
    int m_nodeCount;
    bool m_nodeCountHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
