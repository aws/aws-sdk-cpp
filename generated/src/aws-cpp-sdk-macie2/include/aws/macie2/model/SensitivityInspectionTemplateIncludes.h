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
   * identifiers to include (use) when performing automated sensitive data discovery.
   * The configuration must specify at least one custom data identifier or managed
   * data identifier. For information about the managed data identifiers that Amazon
   * Macie currently provides, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
   * managed data identifiers</a> in the <i>Amazon Macie User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SensitivityInspectionTemplateIncludes">AWS
   * API Reference</a></p>
   */
  class SensitivityInspectionTemplateIncludes
  {
  public:
    AWS_MACIE2_API SensitivityInspectionTemplateIncludes() = default;
    AWS_MACIE2_API SensitivityInspectionTemplateIncludes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SensitivityInspectionTemplateIncludes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of unique identifiers, one for each allow list to include.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListIds() const { return m_allowListIds; }
    inline bool AllowListIdsHasBeenSet() const { return m_allowListIdsHasBeenSet; }
    template<typename AllowListIdsT = Aws::Vector<Aws::String>>
    void SetAllowListIds(AllowListIdsT&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = std::forward<AllowListIdsT>(value); }
    template<typename AllowListIdsT = Aws::Vector<Aws::String>>
    SensitivityInspectionTemplateIncludes& WithAllowListIds(AllowListIdsT&& value) { SetAllowListIds(std::forward<AllowListIdsT>(value)); return *this;}
    template<typename AllowListIdsT = Aws::String>
    SensitivityInspectionTemplateIncludes& AddAllowListIds(AllowListIdsT&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.emplace_back(std::forward<AllowListIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each custom data identifier to
     * include.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifierIds() const { return m_customDataIdentifierIds; }
    inline bool CustomDataIdentifierIdsHasBeenSet() const { return m_customDataIdentifierIdsHasBeenSet; }
    template<typename CustomDataIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = std::forward<CustomDataIdentifierIdsT>(value); }
    template<typename CustomDataIdentifierIdsT = Aws::Vector<Aws::String>>
    SensitivityInspectionTemplateIncludes& WithCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { SetCustomDataIdentifierIds(std::forward<CustomDataIdentifierIdsT>(value)); return *this;}
    template<typename CustomDataIdentifierIdsT = Aws::String>
    SensitivityInspectionTemplateIncludes& AddCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.emplace_back(std::forward<CustomDataIdentifierIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * include.</p> <p>Amazon Macie uses these managed data identifiers in addition to
     * managed data identifiers that are subsequently released and recommended for
     * automated sensitive data discovery. To retrieve a list of valid values for the
     * managed data identifiers that are currently available, use the
     * ListManagedDataIdentifiers operation.</p> <para/>
     */
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const { return m_managedDataIdentifierIds; }
    inline bool ManagedDataIdentifierIdsHasBeenSet() const { return m_managedDataIdentifierIdsHasBeenSet; }
    template<typename ManagedDataIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = std::forward<ManagedDataIdentifierIdsT>(value); }
    template<typename ManagedDataIdentifierIdsT = Aws::Vector<Aws::String>>
    SensitivityInspectionTemplateIncludes& WithManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { SetManagedDataIdentifierIds(std::forward<ManagedDataIdentifierIdsT>(value)); return *this;}
    template<typename ManagedDataIdentifierIdsT = Aws::String>
    SensitivityInspectionTemplateIncludes& AddManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.emplace_back(std::forward<ManagedDataIdentifierIdsT>(value)); return *this; }
    ///@}
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
