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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A request representing an offering renewal.</p>
   */
  class AWS_DEVICEFARM_API RenewOfferingRequest : public DeviceFarmRequest
  {
  public:
    RenewOfferingRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline RenewOfferingRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline RenewOfferingRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of a request to renew an offering.</p>
     */
    inline RenewOfferingRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}

    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity requested in an offering renewal.</p>
     */
    inline RenewOfferingRequest& WithQuantity(int value) { SetQuantity(value); return *this;}

  private:
    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet;
    int m_quantity;
    bool m_quantityHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
