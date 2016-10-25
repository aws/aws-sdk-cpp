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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DevicePoolType.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the result of a list device pools request.</p>
   */
  class AWS_DEVICEFARM_API ListDevicePoolsRequest : public DeviceFarmRequest
  {
  public:
    ListDevicePoolsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The project ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The project ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The project ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The project ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The project ARN.</p>
     */
    inline ListDevicePoolsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The project ARN.</p>
     */
    inline ListDevicePoolsRequest& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The project ARN.</p>
     */
    inline ListDevicePoolsRequest& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The device pools' type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline const DevicePoolType& GetType() const{ return m_type; }

    /**
     * <p>The device pools' type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline void SetType(const DevicePoolType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device pools' type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline void SetType(DevicePoolType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device pools' type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline ListDevicePoolsRequest& WithType(const DevicePoolType& value) { SetType(value); return *this;}

    /**
     * <p>The device pools' type.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>CURATED: A device pool that is created and managed by AWS Device Farm.</p>
     * </li> <li> <p>PRIVATE: A device pool that is created and managed by the device
     * pool developer.</p> </li> </ul>
     */
    inline ListDevicePoolsRequest& WithType(DevicePoolType&& value) { SetType(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListDevicePoolsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListDevicePoolsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListDevicePoolsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    DevicePoolType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
