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
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Mobile
{
namespace Model
{

  /**
   * <p> Request structure used to request a project be created. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProjectRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MOBILE_API CreateProjectRequest : public StreamingMobileRequest
  {
  public:
    CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Name of the project. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the project. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the project. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the project. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the project. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the project. </p>
     */
    inline CreateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the project. </p>
     */
    inline CreateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the project. </p>
     */
    inline CreateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline CreateProjectRequest& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline CreateProjectRequest& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p> Default region where project resources should be created. </p>
     */
    inline CreateProjectRequest& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline CreateProjectRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline CreateProjectRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p> Unique identifier for an exported snapshot of project configuration. This
     * snapshot identifier is included in the share URL when a project is exported.
     * </p>
     */
    inline CreateProjectRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;


    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
