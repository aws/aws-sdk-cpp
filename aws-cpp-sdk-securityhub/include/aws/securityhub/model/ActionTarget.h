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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An <code>ActionTarget</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ActionTarget">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ActionTarget
  {
  public:
    ActionTarget();
    ActionTarget(Aws::Utils::Json::JsonView jsonValue);
    ActionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN for the target action.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }

    /**
     * <p>The ARN for the target action.</p>
     */
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }

    /**
     * <p>The ARN for the target action.</p>
     */
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = value; }

    /**
     * <p>The ARN for the target action.</p>
     */
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::move(value); }

    /**
     * <p>The ARN for the target action.</p>
     */
    inline void SetActionTargetArn(const char* value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn.assign(value); }

    /**
     * <p>The ARN for the target action.</p>
     */
    inline ActionTarget& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}

    /**
     * <p>The ARN for the target action.</p>
     */
    inline ActionTarget& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the target action.</p>
     */
    inline ActionTarget& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}


    /**
     * <p>The name of the action target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the action target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the action target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the action target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the action target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the action target.</p>
     */
    inline ActionTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the action target.</p>
     */
    inline ActionTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the action target.</p>
     */
    inline ActionTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the target action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the target action.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the target action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the target action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the target action.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the target action.</p>
     */
    inline ActionTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the target action.</p>
     */
    inline ActionTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the target action.</p>
     */
    inline ActionTarget& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_actionTargetArn;
    bool m_actionTargetArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
