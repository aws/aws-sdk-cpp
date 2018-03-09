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
    GroupOwnerSetting(const Aws::Utils::Json::JsonValue& jsonValue);
    GroupOwnerSetting& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Eanble the auto added group owner.
     */
    inline bool GetAutoAddGroupOwner() const{ return m_autoAddGroupOwner; }

    /**
     * Eanble the auto added group owner.
     */
    inline void SetAutoAddGroupOwner(bool value) { m_autoAddGroupOwnerHasBeenSet = true; m_autoAddGroupOwner = value; }

    /**
     * Eanble the auto added group owner.
     */
    inline GroupOwnerSetting& WithAutoAddGroupOwner(bool value) { SetAutoAddGroupOwner(value); return *this;}


    /**
     * Name of the group owner.
     */
    inline const Aws::String& GetGroupOwner() const{ return m_groupOwner; }

    /**
     * Name of the group owner.
     */
    inline void SetGroupOwner(const Aws::String& value) { m_groupOwnerHasBeenSet = true; m_groupOwner = value; }

    /**
     * Name of the group owner.
     */
    inline void SetGroupOwner(Aws::String&& value) { m_groupOwnerHasBeenSet = true; m_groupOwner = std::move(value); }

    /**
     * Name of the group owner.
     */
    inline void SetGroupOwner(const char* value) { m_groupOwnerHasBeenSet = true; m_groupOwner.assign(value); }

    /**
     * Name of the group owner.
     */
    inline GroupOwnerSetting& WithGroupOwner(const Aws::String& value) { SetGroupOwner(value); return *this;}

    /**
     * Name of the group owner.
     */
    inline GroupOwnerSetting& WithGroupOwner(Aws::String&& value) { SetGroupOwner(std::move(value)); return *this;}

    /**
     * Name of the group owner.
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
