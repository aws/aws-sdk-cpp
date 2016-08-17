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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CancelReservedInstancesListing.</p>
   */
  class AWS_EC2_API CancelReservedInstancesListingRequest : public EC2Request
  {
  public:
    CancelReservedInstancesListingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline const Aws::String& GetReservedInstancesListingId() const{ return m_reservedInstancesListingId; }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListingId(const Aws::String& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = value; }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListingId(Aws::String&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = value; }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline void SetReservedInstancesListingId(const char* value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingRequest& WithReservedInstancesListingId(const Aws::String& value) { SetReservedInstancesListingId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingRequest& WithReservedInstancesListingId(Aws::String&& value) { SetReservedInstancesListingId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance listing.</p>
     */
    inline CancelReservedInstancesListingRequest& WithReservedInstancesListingId(const char* value) { SetReservedInstancesListingId(value); return *this;}

  private:
    Aws::String m_reservedInstancesListingId;
    bool m_reservedInstancesListingIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
