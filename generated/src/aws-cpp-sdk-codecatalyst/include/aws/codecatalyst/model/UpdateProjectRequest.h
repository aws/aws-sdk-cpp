/**
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
  class UpdateProjectRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateProjectRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateProjectRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateProjectRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline UpdateProjectRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline UpdateProjectRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline UpdateProjectRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the project.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline UpdateProjectRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
