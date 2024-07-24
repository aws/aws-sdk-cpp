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
  class GetAssetFilterResult
  {
  public:
    AWS_DATAZONE_API GetAssetFilterResult();
    AWS_DATAZONE_API GetAssetFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetAssetFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the data asset.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }
    inline GetAssetFilterResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline GetAssetFilterResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the asset filter.</p>
     */
    inline const AssetFilterConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const AssetFilterConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(AssetFilterConfiguration&& value) { m_configuration = std::move(value); }
    inline GetAssetFilterResult& WithConfiguration(const AssetFilterConfiguration& value) { SetConfiguration(value); return *this;}
    inline GetAssetFilterResult& WithConfiguration(AssetFilterConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the asset filter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetAssetFilterResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetAssetFilterResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the asset filter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetAssetFilterResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetAssetFilterResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where you want to get an asset filter.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetAssetFilterResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetAssetFilterResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column names of the asset filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEffectiveColumnNames() const{ return m_effectiveColumnNames; }
    inline void SetEffectiveColumnNames(const Aws::Vector<Aws::String>& value) { m_effectiveColumnNames = value; }
    inline void SetEffectiveColumnNames(Aws::Vector<Aws::String>&& value) { m_effectiveColumnNames = std::move(value); }
    inline GetAssetFilterResult& WithEffectiveColumnNames(const Aws::Vector<Aws::String>& value) { SetEffectiveColumnNames(value); return *this;}
    inline GetAssetFilterResult& WithEffectiveColumnNames(Aws::Vector<Aws::String>&& value) { SetEffectiveColumnNames(std::move(value)); return *this;}
    inline GetAssetFilterResult& AddEffectiveColumnNames(const Aws::String& value) { m_effectiveColumnNames.push_back(value); return *this; }
    inline GetAssetFilterResult& AddEffectiveColumnNames(Aws::String&& value) { m_effectiveColumnNames.push_back(std::move(value)); return *this; }
    inline GetAssetFilterResult& AddEffectiveColumnNames(const char* value) { m_effectiveColumnNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The row filter of the asset filter.</p>
     */
    inline const Aws::String& GetEffectiveRowFilter() const{ return m_effectiveRowFilter; }
    inline void SetEffectiveRowFilter(const Aws::String& value) { m_effectiveRowFilter = value; }
    inline void SetEffectiveRowFilter(Aws::String&& value) { m_effectiveRowFilter = std::move(value); }
    inline void SetEffectiveRowFilter(const char* value) { m_effectiveRowFilter.assign(value); }
    inline GetAssetFilterResult& WithEffectiveRowFilter(const Aws::String& value) { SetEffectiveRowFilter(value); return *this;}
    inline GetAssetFilterResult& WithEffectiveRowFilter(Aws::String&& value) { SetEffectiveRowFilter(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithEffectiveRowFilter(const char* value) { SetEffectiveRowFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that is displayed if the action does not complete
     * successfully.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetAssetFilterResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetAssetFilterResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset filter.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetAssetFilterResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetAssetFilterResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetAssetFilterResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetAssetFilterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset filter.</p>
     */
    inline const FilterStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const FilterStatus& value) { m_status = value; }
    inline void SetStatus(FilterStatus&& value) { m_status = std::move(value); }
    inline GetAssetFilterResult& WithStatus(const FilterStatus& value) { SetStatus(value); return *this;}
    inline GetAssetFilterResult& WithStatus(FilterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAssetFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAssetFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAssetFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetId;

    AssetFilterConfiguration m_configuration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Vector<Aws::String> m_effectiveColumnNames;

    Aws::String m_effectiveRowFilter;

    Aws::String m_errorMessage;

    Aws::String m_id;

    Aws::String m_name;

    FilterStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
