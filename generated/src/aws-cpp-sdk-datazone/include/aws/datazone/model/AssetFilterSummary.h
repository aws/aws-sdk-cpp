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
    AWS_DATAZONE_API AssetFilterSummary() = default;
    AWS_DATAZONE_API AssetFilterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetFilterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the data asset.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    AssetFilterSummary& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the asset filter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AssetFilterSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset filter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AssetFilterSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the asset filter lives.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    AssetFilterSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective column names of the asset filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEffectiveColumnNames() const { return m_effectiveColumnNames; }
    inline bool EffectiveColumnNamesHasBeenSet() const { return m_effectiveColumnNamesHasBeenSet; }
    template<typename EffectiveColumnNamesT = Aws::Vector<Aws::String>>
    void SetEffectiveColumnNames(EffectiveColumnNamesT&& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames = std::forward<EffectiveColumnNamesT>(value); }
    template<typename EffectiveColumnNamesT = Aws::Vector<Aws::String>>
    AssetFilterSummary& WithEffectiveColumnNames(EffectiveColumnNamesT&& value) { SetEffectiveColumnNames(std::forward<EffectiveColumnNamesT>(value)); return *this;}
    template<typename EffectiveColumnNamesT = Aws::String>
    AssetFilterSummary& AddEffectiveColumnNames(EffectiveColumnNamesT&& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames.emplace_back(std::forward<EffectiveColumnNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The effective row filter of the asset filter.</p>
     */
    inline const Aws::String& GetEffectiveRowFilter() const { return m_effectiveRowFilter; }
    inline bool EffectiveRowFilterHasBeenSet() const { return m_effectiveRowFilterHasBeenSet; }
    template<typename EffectiveRowFilterT = Aws::String>
    void SetEffectiveRowFilter(EffectiveRowFilterT&& value) { m_effectiveRowFilterHasBeenSet = true; m_effectiveRowFilter = std::forward<EffectiveRowFilterT>(value); }
    template<typename EffectiveRowFilterT = Aws::String>
    AssetFilterSummary& WithEffectiveRowFilter(EffectiveRowFilterT&& value) { SetEffectiveRowFilter(std::forward<EffectiveRowFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that is displayed if the action does not succeed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    AssetFilterSummary& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset filter.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssetFilterSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset filter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetFilterSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset filter.</p>
     */
    inline FilterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FilterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssetFilterSummary& WithStatus(FilterStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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

    FilterStatus m_status{FilterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
