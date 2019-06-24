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
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API UpdateActionTargetRequest : public SecurityHubRequest
  {
  public:
    UpdateActionTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateActionTarget"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline bool ActionTargetArnHasBeenSet() const { return m_actionTargetArnHasBeenSet; }

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = value; }

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn = std::move(value); }

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline void SetActionTargetArn(const char* value) { m_actionTargetArnHasBeenSet = true; m_actionTargetArn.assign(value); }

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline UpdateActionTargetRequest& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline UpdateActionTargetRequest& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom action target to update.</p>
     */
    inline UpdateActionTargetRequest& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}


    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline UpdateActionTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline UpdateActionTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name of the custom action target.</p>
     */
    inline UpdateActionTargetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline UpdateActionTargetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline UpdateActionTargetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description for the custom action target.</p>
     */
    inline UpdateActionTargetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

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
