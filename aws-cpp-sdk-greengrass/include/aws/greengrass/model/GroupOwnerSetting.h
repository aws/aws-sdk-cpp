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
  class AWS_GREENGRASS_API GroupOwnerSetting
  {
  public:
    GroupOwnerSetting();
    GroupOwnerSetting(Aws::Utils::Json::JsonView jsonValue);
    GroupOwnerSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_autoAddGroupOwnerHasBeenSet;

    Aws::String m_groupOwner;
    bool m_groupOwnerHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
