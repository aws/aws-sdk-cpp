/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AssetFilterConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FilterStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class UpdateAssetFilterResult
  {
  public:
    AWS_DATAZONE_API UpdateAssetFilterResult() = default;
    AWS_DATAZONE_API UpdateAssetFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateAssetFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the data asset.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    UpdateAssetFilterResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the asset filter.</p>
     */
    inline const AssetFilterConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = AssetFilterConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AssetFilterConfiguration>
    UpdateAssetFilterResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the asset filter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateAssetFilterResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset filter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAssetFilterResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the asset filter was created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UpdateAssetFilterResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column names of the asset filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEffectiveColumnNames() const { return m_effectiveColumnNames; }
    template<typename EffectiveColumnNamesT = Aws::Vector<Aws::String>>
    void SetEffectiveColumnNames(EffectiveColumnNamesT&& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames = std::forward<EffectiveColumnNamesT>(value); }
    template<typename EffectiveColumnNamesT = Aws::Vector<Aws::String>>
    UpdateAssetFilterResult& WithEffectiveColumnNames(EffectiveColumnNamesT&& value) { SetEffectiveColumnNames(std::forward<EffectiveColumnNamesT>(value)); return *this;}
    template<typename EffectiveColumnNamesT = Aws::String>
    UpdateAssetFilterResult& AddEffectiveColumnNames(EffectiveColumnNamesT&& value) { m_effectiveColumnNamesHasBeenSet = true; m_effectiveColumnNames.emplace_back(std::forward<EffectiveColumnNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The row filter of the asset filter.</p>
     */
    inline const Aws::String& GetEffectiveRowFilter() const { return m_effectiveRowFilter; }
    template<typename EffectiveRowFilterT = Aws::String>
    void SetEffectiveRowFilter(EffectiveRowFilterT&& value) { m_effectiveRowFilterHasBeenSet = true; m_effectiveRowFilter = std::forward<EffectiveRowFilterT>(value); }
    template<typename EffectiveRowFilterT = Aws::String>
    UpdateAssetFilterResult& WithEffectiveRowFilter(EffectiveRowFilterT&& value) { SetEffectiveRowFilter(std::forward<EffectiveRowFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that is displayed if the action is not completed
     * successfully.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UpdateAssetFilterResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset filter.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateAssetFilterResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset filter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAssetFilterResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset filter.</p>
     */
    inline FilterStatus GetStatus() const { return m_status; }
    inline void SetStatus(FilterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAssetFilterResult& WithStatus(FilterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssetFilterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    AssetFilterConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
