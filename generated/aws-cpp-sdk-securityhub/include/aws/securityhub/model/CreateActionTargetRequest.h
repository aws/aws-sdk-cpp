﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_SECURITYHUB_API CreateActionTargetRequest : public SecurityHubRequest
  {
  public:
    CreateActionTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateActionTarget"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline CreateActionTargetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline CreateActionTargetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom action target. Can contain up to 20 characters.</p>
     */
    inline CreateActionTargetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description for the custom action target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the custom action target.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the custom action target.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the custom action target.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the custom action target.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the custom action target.</p>
     */
    inline CreateActionTargetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the custom action target.</p>
     */
    inline CreateActionTargetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the custom action target.</p>
     */
    inline CreateActionTargetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline CreateActionTargetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline CreateActionTargetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for the custom action target. Can contain up to 20 alphanumeric
     * characters.</p>
     */
    inline CreateActionTargetRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
