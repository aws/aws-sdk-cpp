/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CancelReservedInstancesListing.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelReservedInstancesListingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CancelReservedInstancesListingRequest : public EC2Request
  {
  public:
    CancelReservedInstancesListingRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelReservedInstancesListing"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline void SetReservedInstancesListingId(Aws::String&& value) { m_reservedInstancesListingIdHasBeenSet = true; m_reservedInstancesListingId = std::move(value); }

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
    inline CancelReservedInstancesListingRequest& WithReservedInstancesListingId(Aws::String&& value) { SetReservedInstancesListingId(std::move(value)); return *this;}

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
