/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Group owner related settings for local resources.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GroupOwnerSetting">AWS
   * API Reference</a></p>
   */
  class GroupOwnerSetting
  {
  public:
    AWS_GREENGRASS_API GroupOwnerSetting() = default;
    AWS_GREENGRASS_API GroupOwnerSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API GroupOwnerSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If true, AWS IoT Greengrass automatically adds the specified Linux OS group
     * owner of the resource to the Lambda process privileges. Thus the Lambda process
     * will have the file access permissions of the added Linux group.
     */
    inline bool GetAutoAddGroupOwner() const { return m_autoAddGroupOwner; }
    inline bool AutoAddGroupOwnerHasBeenSet() const { return m_autoAddGroupOwnerHasBeenSet; }
    inline void SetAutoAddGroupOwner(bool value) { m_autoAddGroupOwnerHasBeenSet = true; m_autoAddGroupOwner = value; }
    inline GroupOwnerSetting& WithAutoAddGroupOwner(bool value) { SetAutoAddGroupOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline const Aws::String& GetGroupOwner() const { return m_groupOwner; }
    inline bool GroupOwnerHasBeenSet() const { return m_groupOwnerHasBeenSet; }
    template<typename GroupOwnerT = Aws::String>
    void SetGroupOwner(GroupOwnerT&& value) { m_groupOwnerHasBeenSet = true; m_groupOwner = std::forward<GroupOwnerT>(value); }
    template<typename GroupOwnerT = Aws::String>
    GroupOwnerSetting& WithGroupOwner(GroupOwnerT&& value) { SetGroupOwner(std::forward<GroupOwnerT>(value)); return *this;}
    ///@}
  private:

    bool m_autoAddGroupOwner{false};
    bool m_autoAddGroupOwnerHasBeenSet = false;

    Aws::String m_groupOwner;
    bool m_groupOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
