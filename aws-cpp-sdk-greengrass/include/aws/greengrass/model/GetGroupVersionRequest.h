/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetGroupVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetGroupVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The ID of the Greengrass group.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline GetGroupVersionRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline GetGroupVersionRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline GetGroupVersionRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline const Aws::String& GetGroupVersionId() const{ return m_groupVersionId; }

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline bool GroupVersionIdHasBeenSet() const { return m_groupVersionIdHasBeenSet; }

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline void SetGroupVersionId(const Aws::String& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = value; }

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline void SetGroupVersionId(Aws::String&& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = std::move(value); }

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline void SetGroupVersionId(const char* value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId.assign(value); }

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline GetGroupVersionRequest& WithGroupVersionId(const Aws::String& value) { SetGroupVersionId(value); return *this;}

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline GetGroupVersionRequest& WithGroupVersionId(Aws::String&& value) { SetGroupVersionId(std::move(value)); return *this;}

    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline GetGroupVersionRequest& WithGroupVersionId(const char* value) { SetGroupVersionId(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupVersionId;
    bool m_groupVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
