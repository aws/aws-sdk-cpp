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


    ///@{
    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The display name of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline ServiceMetadata& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline ServiceMetadata& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline ServiceMetadata& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The category that the Amazon Web Service belongs to, such as compute,
     * storage, or database. </p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline ServiceMetadata& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline ServiceMetadata& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline ServiceMetadata& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}
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
