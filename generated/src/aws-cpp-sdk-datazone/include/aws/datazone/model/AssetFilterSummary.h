/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FilterStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The summary of the asset filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetFilterSummary">AWS
   * API Reference</a></p>
   */
  class AssetFilterSummary
  {
  public:
    AWS_DATAZONE_API AssetFilterSummary();
    AWS_DATAZONE_API AssetFilterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetFilterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the data asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline AssetFilterSummary& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline AssetFilterSummary& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline AssetFilterSummary& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the asset filter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AssetFilterSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AssetFilterSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AssetFilterSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AssetFilterSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AssetFilterSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the asset filter lives.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline AssetFilterSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline AssetFilterSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline AssetFilterSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective column names of the asset filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEffectiveColumnNames() const{ return m_effectiveColumnNames; }
    inline bool EffectiveColumnNamesHasBeenSet() const { return m_effectiveColumnNamesHasBeenSet; }
    inline void SetEffectiveColumnNames(const Aws::Vector<Aws::String>& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames = value; }
    inline void SetEffectiveColumnNames(Aws::Vector<Aws::String>&& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames = std::move(value); }
    inline AssetFilterSummary& WithEffectiveColumnNames(const Aws::Vector<Aws::String>& value) { SetEffectiveColumnNames(value); return *this;}
    inline AssetFilterSummary& WithEffectiveColumnNames(Aws::Vector<Aws::String>&& value) { SetEffectiveColumnNames(std::move(value)); return *this;}
    inline AssetFilterSummary& AddEffectiveColumnNames(const Aws::String& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames.push_back(value); return *this; }
    inline AssetFilterSummary& AddEffectiveColumnNames(Aws::String&& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames.push_back(std::move(value)); return *this; }
    inline AssetFilterSummary& AddEffectiveColumnNames(const char* value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The effective row filter of the asset filter.</p>
     */
    inline const Aws::String& GetEffectiveRowFilter() const{ return m_effectiveRowFilter; }
    inline bool EffectiveRowFilterHasBeenSet() const { return m_effectiveRowFilterHasBeenSet; }
    inline void SetEffectiveRowFilter(const Aws::String& value) { m_effectiveRowFilterHasBeenSet = true; m_effectiveRowFilter = value; }
    inline void SetEffectiveRowFilter(Aws::String&& value) { m_effectiveRowFilterHasBeenSet = true; m_effectiveRowFilter = std::move(value); }
    inline void SetEffectiveRowFilter(const char* value) { m_effectiveRowFilterHasBeenSet = true; m_effectiveRowFilter.assign(value); }
    inline AssetFilterSummary& WithEffectiveRowFilter(const Aws::String& value) { SetEffectiveRowFilter(value); return *this;}
    inline AssetFilterSummary& WithEffectiveRowFilter(Aws::String&& value) { SetEffectiveRowFilter(std::move(value)); return *this;}
    inline AssetFilterSummary& WithEffectiveRowFilter(const char* value) { SetEffectiveRowFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that is displayed if the action does not succeed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline AssetFilterSummary& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline AssetFilterSummary& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline AssetFilterSummary& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset filter.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetFilterSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetFilterSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetFilterSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetFilterSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetFilterSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetFilterSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset filter.</p>
     */
    inline const FilterStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FilterStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FilterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssetFilterSummary& WithStatus(const FilterStatus& value) { SetStatus(value); return *this;}
    inline AssetFilterSummary& WithStatus(FilterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_effectiveColumnNames;
    bool m_effectiveColumnNamesHasBeenSet = false;

    Aws::String m_effectiveRowFilter;
    bool m_effectiveRowFilterHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FilterStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
