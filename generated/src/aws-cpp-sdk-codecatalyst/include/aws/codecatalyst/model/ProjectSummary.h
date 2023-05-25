/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class ProjectSummary
  {
  public:
    AWS_CODECATALYST_API ProjectSummary();
    AWS_CODECATALYST_API ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline ProjectSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline ProjectSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline ProjectSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline ProjectSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline ProjectSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The friendly name displayed to users of the project in Amazon
     * CodeCatalyst.</p>
     */
    inline ProjectSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


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
    inline ProjectSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline ProjectSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline ProjectSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
