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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CreateInstanceSnapshotRequest : public LightsailRequest
  {
  public:
    CreateInstanceSnapshotRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for your new snapshot.</p>
     */
    inline const Aws::String& GetInstanceSnapshotName() const{ return m_instanceSnapshotName; }

    /**
     * <p>The name for your new snapshot.</p>
     */
    inline void SetInstanceSnapshotName(const Aws::String& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }

    /**
     * <p>The name for your new snapshot.</p>
     */
    inline void SetInstanceSnapshotName(Aws::String&& value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName = value; }

    /**
     * <p>The name for your new snapshot.</p>
     */
    inline void SetInstanceSnapshotName(const char* value) { m_instanceSnapshotNameHasBeenSet = true; m_instanceSnapshotName.assign(value); }

    /**
     * <p>The name for your new snapshot.</p>
     */
    inline CreateInstanceSnapshotRequest& WithInstanceSnapshotName(const Aws::String& value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The name for your new snapshot.</p>
     */
    inline CreateInstanceSnapshotRequest& WithInstanceSnapshotName(Aws::String&& value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The name for your new snapshot.</p>
     */
    inline CreateInstanceSnapshotRequest& WithInstanceSnapshotName(const char* value) { SetInstanceSnapshotName(value); return *this;}

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline CreateInstanceSnapshotRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline CreateInstanceSnapshotRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The Lightsail instance on which to base your snapshot.</p>
     */
    inline CreateInstanceSnapshotRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}

  private:
    Aws::String m_instanceSnapshotName;
    bool m_instanceSnapshotNameHasBeenSet;
    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
