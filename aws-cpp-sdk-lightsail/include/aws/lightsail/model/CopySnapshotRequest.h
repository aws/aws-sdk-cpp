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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RegionName.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API CopySnapshotRequest : public LightsailRequest
  {
  public:
    CopySnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshot"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline const Aws::String& GetSourceSnapshotName() const{ return m_sourceSnapshotName; }

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline bool SourceSnapshotNameHasBeenSet() const { return m_sourceSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline void SetSourceSnapshotName(const Aws::String& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = value; }

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline void SetSourceSnapshotName(Aws::String&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = std::move(value); }

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline void SetSourceSnapshotName(const char* value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName.assign(value); }

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(const Aws::String& value) { SetSourceSnapshotName(value); return *this;}

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(Aws::String&& value) { SetSourceSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the source instance or disk snapshot to be copied.</p>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(const char* value) { SetSourceSnapshotName(value); return *this;}


    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline const Aws::String& GetTargetSnapshotName() const{ return m_targetSnapshotName; }

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline bool TargetSnapshotNameHasBeenSet() const { return m_targetSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline void SetTargetSnapshotName(const Aws::String& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = value; }

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline void SetTargetSnapshotName(Aws::String&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = std::move(value); }

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline void SetTargetSnapshotName(const char* value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName.assign(value); }

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(const Aws::String& value) { SetTargetSnapshotName(value); return *this;}

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(Aws::String&& value) { SetTargetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the new instance or disk snapshot to be created as a copy.</p>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(const char* value) { SetTargetSnapshotName(value); return *this;}


    /**
     * <p>The AWS Region where the source snapshot is located.</p>
     */
    inline const RegionName& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The AWS Region where the source snapshot is located.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The AWS Region where the source snapshot is located.</p>
     */
    inline void SetSourceRegion(const RegionName& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The AWS Region where the source snapshot is located.</p>
     */
    inline void SetSourceRegion(RegionName&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The AWS Region where the source snapshot is located.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(const RegionName& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The AWS Region where the source snapshot is located.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(RegionName&& value) { SetSourceRegion(std::move(value)); return *this;}

  private:

    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet;

    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet;

    RegionName m_sourceRegion;
    bool m_sourceRegionHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
