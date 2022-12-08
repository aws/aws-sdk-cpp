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
   * <p>Information about an space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/SpaceSummary">AWS
   * API Reference</a></p>
   */
  class SpaceSummary
  {
  public:
    AWS_CODECATALYST_API SpaceSummary();
    AWS_CODECATALYST_API SpaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API SpaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline SpaceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline SpaceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> <i>We need to know what this is and the basic usage information so that
     * third-party developers know how to use this data type.</i> </p>
     */
    inline SpaceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline SpaceSummary& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline SpaceSummary& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the space exists.</p>
     */
    inline SpaceSummary& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline SpaceSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline SpaceSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the space displayed to users.</p>
     */
    inline SpaceSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description of the space.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the space.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the space.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the space.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the space.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the space.</p>
     */
    inline SpaceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the space.</p>
     */
    inline SpaceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the space.</p>
     */
    inline SpaceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
