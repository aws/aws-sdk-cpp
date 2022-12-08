/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The metadata that's associated with the Amazon Web Service. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ServiceMetadata">AWS
   * API Reference</a></p>
   */
  class ServiceMetadata
  {
  public:
    AWS_AUDITMANAGER_API ServiceMetadata();
    AWS_AUDITMANAGER_API ServiceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ServiceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline ServiceMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline ServiceMetadata& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline ServiceMetadata& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline ServiceMetadata& WithCategory(const char* value) { SetCategory(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
