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
  class DisassociateRoleFromGroupRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DisassociateRoleFromGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateRoleFromGroup"; }

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
    DisassociateRoleFromGroupRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
