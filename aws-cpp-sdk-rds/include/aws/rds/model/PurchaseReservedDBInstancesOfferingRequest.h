/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API PurchaseReservedDBInstancesOfferingRequest : public RDSRequest
  {
  public:
    PurchaseReservedDBInstancesOfferingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const{ return m_reservedDBInstancesOfferingId; }

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline void SetReservedDBInstancesOfferingId(const Aws::String& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline void SetReservedDBInstancesOfferingId(Aws::String&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline void SetReservedDBInstancesOfferingId(const char* value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId.assign(value); }

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstancesOfferingId(const Aws::String& value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstancesOfferingId(Aws::String&& value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstancesOfferingId(const char* value) { SetReservedDBInstancesOfferingId(value); return *this;}

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const{ return m_reservedDBInstanceId; }

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedDBInstanceId(const Aws::String& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedDBInstanceId(Aws::String&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedDBInstanceId(const char* value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId.assign(value); }

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstanceId(const Aws::String& value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstanceId(Aws::String&& value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstanceId(const char* value) { SetReservedDBInstanceId(value); return *this;}

    /**
     * <p>The number of instances to reserve.</p> <p>Default: <code>1</code> </p>
     */
    inline int GetDBInstanceCount() const{ return m_dBInstanceCount; }

    /**
     * <p>The number of instances to reserve.</p> <p>Default: <code>1</code> </p>
     */
    inline void SetDBInstanceCount(int value) { m_dBInstanceCountHasBeenSet = true; m_dBInstanceCount = value; }

    /**
     * <p>The number of instances to reserve.</p> <p>Default: <code>1</code> </p>
     */
    inline PurchaseReservedDBInstancesOfferingRequest& WithDBInstanceCount(int value) { SetDBInstanceCount(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline PurchaseReservedDBInstancesOfferingRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline PurchaseReservedDBInstancesOfferingRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline PurchaseReservedDBInstancesOfferingRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline PurchaseReservedDBInstancesOfferingRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet;
    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet;
    int m_dBInstanceCount;
    bool m_dBInstanceCountHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
