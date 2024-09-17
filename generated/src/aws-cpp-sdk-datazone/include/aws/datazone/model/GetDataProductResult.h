/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DataProductStatus.h>
#include <aws/datazone/model/FormOutput.h>
#include <aws/datazone/model/DataProductItem.h>
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
  class GetDataProductResult
  {
  public:
    AWS_DATAZONE_API GetDataProductResult();
    AWS_DATAZONE_API GetDataProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDataProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp at which the data product is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDataProductResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDataProductResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data product.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetDataProductResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetDataProductResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetDataProductResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDataProductResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDataProductResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDataProductResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the data product lives.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetDataProductResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetDataProductResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetDataProductResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the first revision of the data product is created.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstRevisionCreatedAt() const{ return m_firstRevisionCreatedAt; }
    inline void SetFirstRevisionCreatedAt(const Aws::Utils::DateTime& value) { m_firstRevisionCreatedAt = value; }
    inline void SetFirstRevisionCreatedAt(Aws::Utils::DateTime&& value) { m_firstRevisionCreatedAt = std::move(value); }
    inline GetDataProductResult& WithFirstRevisionCreatedAt(const Aws::Utils::DateTime& value) { SetFirstRevisionCreatedAt(value); return *this;}
    inline GetDataProductResult& WithFirstRevisionCreatedAt(Aws::Utils::DateTime&& value) { SetFirstRevisionCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the first revision of the data product.</p>
     */
    inline const Aws::String& GetFirstRevisionCreatedBy() const{ return m_firstRevisionCreatedBy; }
    inline void SetFirstRevisionCreatedBy(const Aws::String& value) { m_firstRevisionCreatedBy = value; }
    inline void SetFirstRevisionCreatedBy(Aws::String&& value) { m_firstRevisionCreatedBy = std::move(value); }
    inline void SetFirstRevisionCreatedBy(const char* value) { m_firstRevisionCreatedBy.assign(value); }
    inline GetDataProductResult& WithFirstRevisionCreatedBy(const Aws::String& value) { SetFirstRevisionCreatedBy(value); return *this;}
    inline GetDataProductResult& WithFirstRevisionCreatedBy(Aws::String&& value) { SetFirstRevisionCreatedBy(std::move(value)); return *this;}
    inline GetDataProductResult& WithFirstRevisionCreatedBy(const char* value) { SetFirstRevisionCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms of the data product.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const{ return m_formsOutput; }
    inline void SetFormsOutput(const Aws::Vector<FormOutput>& value) { m_formsOutput = value; }
    inline void SetFormsOutput(Aws::Vector<FormOutput>&& value) { m_formsOutput = std::move(value); }
    inline GetDataProductResult& WithFormsOutput(const Aws::Vector<FormOutput>& value) { SetFormsOutput(value); return *this;}
    inline GetDataProductResult& WithFormsOutput(Aws::Vector<FormOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}
    inline GetDataProductResult& AddFormsOutput(const FormOutput& value) { m_formsOutput.push_back(value); return *this; }
    inline GetDataProductResult& AddFormsOutput(FormOutput&& value) { m_formsOutput.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTerms = std::move(value); }
    inline GetDataProductResult& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline GetDataProductResult& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline GetDataProductResult& AddGlossaryTerms(const Aws::String& value) { m_glossaryTerms.push_back(value); return *this; }
    inline GetDataProductResult& AddGlossaryTerms(Aws::String&& value) { m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline GetDataProductResult& AddGlossaryTerms(const char* value) { m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the data product.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDataProductResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDataProductResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDataProductResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data assets of the data product.</p>
     */
    inline const Aws::Vector<DataProductItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DataProductItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DataProductItem>&& value) { m_items = std::move(value); }
    inline GetDataProductResult& WithItems(const Aws::Vector<DataProductItem>& value) { SetItems(value); return *this;}
    inline GetDataProductResult& WithItems(Aws::Vector<DataProductItem>&& value) { SetItems(std::move(value)); return *this;}
    inline GetDataProductResult& AddItems(const DataProductItem& value) { m_items.push_back(value); return *this; }
    inline GetDataProductResult& AddItems(DataProductItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the data product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDataProductResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDataProductResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDataProductResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the data product.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }
    inline GetDataProductResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline GetDataProductResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline GetDataProductResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline void SetRevision(const Aws::String& value) { m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revision.assign(value); }
    inline GetDataProductResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline GetDataProductResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline GetDataProductResult& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data product.</p>
     */
    inline const DataProductStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataProductStatus& value) { m_status = value; }
    inline void SetStatus(DataProductStatus&& value) { m_status = std::move(value); }
    inline GetDataProductResult& WithStatus(const DataProductStatus& value) { SetStatus(value); return *this;}
    inline GetDataProductResult& WithStatus(DataProductStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataProductResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataProductResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataProductResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Utils::DateTime m_firstRevisionCreatedAt;

    Aws::String m_firstRevisionCreatedBy;

    Aws::Vector<FormOutput> m_formsOutput;

    Aws::Vector<Aws::String> m_glossaryTerms;

    Aws::String m_id;

    Aws::Vector<DataProductItem> m_items;

    Aws::String m_name;

    Aws::String m_owningProjectId;

    Aws::String m_revision;

    DataProductStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
