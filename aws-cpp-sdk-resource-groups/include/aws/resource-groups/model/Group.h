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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A resource group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/Group">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPS_API Group
  {
  public:
    Group();
    Group(Aws::Utils::Json::JsonView jsonValue);
    Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a resource group.</p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline Group& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline Group& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a resource group.</p>
     */
    inline Group& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}


    /**
     * <p>The name of a resource group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a resource group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a resource group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a resource group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a resource group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a resource group.</p>
     */
    inline Group& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a resource group.</p>
     */
    inline Group& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a resource group.</p>
     */
    inline Group& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the resource group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the resource group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the resource group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the resource group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the resource group.</p>
     */
    inline Group& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource group.</p>
     */
    inline Group& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource group.</p>
     */
    inline Group& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
