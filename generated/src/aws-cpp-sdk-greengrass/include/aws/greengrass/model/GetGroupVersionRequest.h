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
    AWS_GREENGRASS_API GetGroupVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    GetGroupVersionRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the group version. This value maps to the ''Version'' property of the
     * corresponding ''VersionInformation'' object, which is returned by
     * ''ListGroupVersions'' requests. If the version is the last one that was
     * associated with a group, the value also maps to the ''LatestVersion'' property
     * of the corresponding ''GroupInformation'' object.
     */
    inline const Aws::String& GetGroupVersionId() const { return m_groupVersionId; }
    inline bool GroupVersionIdHasBeenSet() const { return m_groupVersionIdHasBeenSet; }
    template<typename GroupVersionIdT = Aws::String>
    void SetGroupVersionId(GroupVersionIdT&& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = std::forward<GroupVersionIdT>(value); }
    template<typename GroupVersionIdT = Aws::String>
    GetGroupVersionRequest& WithGroupVersionId(GroupVersionIdT&& value) { SetGroupVersionId(std::forward<GroupVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupVersionId;
    bool m_groupVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
