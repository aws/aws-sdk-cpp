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
   * <p>Specifies managed data identifiers to exclude (not use) when performing
   * automated sensitive data discovery for an Amazon Macie account. For information
   * about the managed data identifiers that Amazon Macie currently provides, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
   * managed data identifiers</a> in the <i>Amazon Macie User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SensitivityInspectionTemplateExcludes">AWS
   * API Reference</a></p>
   */
  class SensitivityInspectionTemplateExcludes
  {
  public:
    AWS_MACIE2_API SensitivityInspectionTemplateExcludes();
    AWS_MACIE2_API SensitivityInspectionTemplateExcludes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SensitivityInspectionTemplateExcludes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const{ return m_managedDataIdentifierIds; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline bool ManagedDataIdentifierIdsHasBeenSet() const { return m_managedDataIdentifierIdsHasBeenSet; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline void SetManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = value; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline void SetManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = std::move(value); }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline SensitivityInspectionTemplateExcludes& WithManagedDataIdentifierIds(const Aws::Vector<Aws::String>& value) { SetManagedDataIdentifierIds(value); return *this;}

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline SensitivityInspectionTemplateExcludes& WithManagedDataIdentifierIds(Aws::Vector<Aws::String>&& value) { SetManagedDataIdentifierIds(std::move(value)); return *this;}

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline SensitivityInspectionTemplateExcludes& AddManagedDataIdentifierIds(const Aws::String& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(value); return *this; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline SensitivityInspectionTemplateExcludes& AddManagedDataIdentifierIds(Aws::String&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of unique identifiers, one for each managed data identifier to
     * exclude. To retrieve a list of valid values, use the ListManagedDataIdentifiers
     * operation.</p>
     */
    inline SensitivityInspectionTemplateExcludes& AddManagedDataIdentifierIds(const char* value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_managedDataIdentifierIds;
    bool m_managedDataIdentifierIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
