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
    AWS_GREENGRASS_API GroupOwnerSetting();
    AWS_GREENGRASS_API GroupOwnerSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API GroupOwnerSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If true, AWS IoT Greengrass automatically adds the specified Linux OS group
     * owner of the resource to the Lambda process privileges. Thus the Lambda process
     * will have the file access permissions of the added Linux group.
     */
    inline bool GetAutoAddGroupOwner() const{ return m_autoAddGroupOwner; }

    /**
     * If true, AWS IoT Greengrass automatically adds the specified Linux OS group
     * owner of the resource to the Lambda process privileges. Thus the Lambda process
     * will have the file access permissions of the added Linux group.
     */
    inline bool AutoAddGroupOwnerHasBeenSet() const { return m_autoAddGroupOwnerHasBeenSet; }

    /**
     * If true, AWS IoT Greengrass automatically adds the specified Linux OS group
     * owner of the resource to the Lambda process privileges. Thus the Lambda process
     * will have the file access permissions of the added Linux group.
     */
    inline void SetAutoAddGroupOwner(bool value) { m_autoAddGroupOwnerHasBeenSet = true; m_autoAddGroupOwner = value; }

    /**
     * If true, AWS IoT Greengrass automatically adds the specified Linux OS group
     * owner of the resource to the Lambda process privileges. Thus the Lambda process
     * will have the file access permissions of the added Linux group.
     */
    inline GroupOwnerSetting& WithAutoAddGroupOwner(bool value) { SetAutoAddGroupOwner(value); return *this;}


    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline const Aws::String& GetGroupOwner() const{ return m_groupOwner; }

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline bool GroupOwnerHasBeenSet() const { return m_groupOwnerHasBeenSet; }

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline void SetGroupOwner(const Aws::String& value) { m_groupOwnerHasBeenSet = true; m_groupOwner = value; }

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline void SetGroupOwner(Aws::String&& value) { m_groupOwnerHasBeenSet = true; m_groupOwner = std::move(value); }

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline void SetGroupOwner(const char* value) { m_groupOwnerHasBeenSet = true; m_groupOwner.assign(value); }

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline GroupOwnerSetting& WithGroupOwner(const Aws::String& value) { SetGroupOwner(value); return *this;}

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline GroupOwnerSetting& WithGroupOwner(Aws::String&& value) { SetGroupOwner(std::move(value)); return *this;}

    /**
     * The name of the Linux OS group whose privileges will be added to the Lambda
     * process. This field is optional.
     */
    inline GroupOwnerSetting& WithGroupOwner(const char* value) { SetGroupOwner(value); return *this;}

  private:

    bool m_autoAddGroupOwner;
    bool m_autoAddGroupOwnerHasBeenSet = false;

    Aws::String m_groupOwner;
    bool m_groupOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
