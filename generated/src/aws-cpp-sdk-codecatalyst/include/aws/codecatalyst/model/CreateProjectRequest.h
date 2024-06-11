﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class CreateProjectRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API CreateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProject"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline CreateProjectRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline CreateProjectRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline CreateProjectRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the project that will be displayed to users.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateProjectRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateProjectRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateProjectRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project. This description will be displayed to all
     * users of the project. We recommend providing a brief description of the project
     * and its intended purpose.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
