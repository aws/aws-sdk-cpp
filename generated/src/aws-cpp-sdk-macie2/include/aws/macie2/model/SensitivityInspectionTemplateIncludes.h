/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the allow lists, custom data identifiers, and managed data
   * identifiers to include (use) when performing automated sensitive data discovery
   * for an Amazon Macie account. The configuration must specify at least one custom
   * data identifier or managed data identifier. For information about the managed
   * data identifiers that Amazon Macie currently provides, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
   * managed data identifiers</a> in the <i>Amazon Macie User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SensitivityInspectionTemplateIncludes">AWS
   * API Reference</a></p>
   */
  class SensitivityInspectionTemplateIncludes
  {
  public:
    AWS_MACIE2_API SensitivityInspectionTemplateIncludes();
    AWS_MACIE2_API SensitivityInspectionTemplateIncludes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SensitivityInspectionTemplateIncludes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListIds() const{ return m_allowListIds; }

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline bool AllowListIdsHasBeenSet() const { return m_allowListIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline void SetAllowListIds(const Aws::Vector<Aws::String>& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = value; }

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline void SetAllowListIds(Aws::Vector<Aws::String>&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& WithAllowListIds(const Aws::Vector<Aws::String>& value) { SetAllowListIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& WithAllowListIds(Aws::Vector<Aws::String>&& value) { SetAllowListIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& AddAllowListIds(const Aws::String& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& AddAllowListIds(Aws::String&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& AddAllowListIds(const char* value) { m_allowListIdsHasBeenSet = true; m_allowListIds.push_back(value); return *this; }


    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifierIds() const{ return m_customDataIdentifierIds; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline bool CustomDataIdentifierIdsHasBeenSet() const { return m_customDataIdentifierIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline void SetCustomDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = value; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline void SetCustomDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& WithCustomDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetCustomDataIdentifierIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& WithCustomDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetCustomDataIdentifierIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& AddCustomDataIdentifierIds(const Aws::String& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& AddCustomDataIdentifierIds(Aws::String&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline SensitivityInspectionTemplateIncludes& AddCustomDataIdentifierIds(const char* value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.push_back(value); return *this; }


    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const{ return m_managedDataIdentifierIds; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline bool ManagedDataIdentifierIdsHasBeenSet() const { return m_managedDataIdentifierIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline void SetManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = value; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline void SetManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline SensitivityInspectionTemplateIncludes& WithManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetManagedDataIdentifierIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline SensitivityInspectionTemplateIncludes& WithManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetManagedDataIdentifierIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline SensitivityInspectionTemplateIncludes& AddManagedDataIdentifierIds(const Aws::String& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline SensitivityInspectionTemplateIncludes& AddManagedDataIdentifierIds(Aws::String&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline SensitivityInspectionTemplateIncludes& AddManagedDataIdentifierIds(const char* value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_allowListIds;
    bool m_allowListIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDataIdentifierIds;
    bool m_customDataIdentifierIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedDataIdentifierIds;
    bool m_managedDataIdentifierIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
