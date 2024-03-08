/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/Model.h>
#include <aws/datazone/model/FormTypeStatus.h>
#include <aws/datazone/model/Import.h>
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
  class GetFormTypeResult
  {
  public:
    AWS_DATAZONE_API GetFormTypeResult();
    AWS_DATAZONE_API GetFormTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetFormTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when this metadata form type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when this metadata form type was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when this metadata form type was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when this metadata form type was created.</p>
     */
    inline GetFormTypeResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when this metadata form type was created.</p>
     */
    inline GetFormTypeResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline GetFormTypeResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline GetFormTypeResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created this metadata form type.</p>
     */
    inline GetFormTypeResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the metadata form type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the metadata form type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the metadata form type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the metadata form type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline GetFormTypeResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline GetFormTypeResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type
     * exists.</p>
     */
    inline GetFormTypeResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline const Aws::Vector<Import>& GetImports() const{ return m_imports; }

    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline void SetImports(const Aws::Vector<Import>& value) { m_imports = value; }

    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline void SetImports(Aws::Vector<Import>&& value) { m_imports = std::move(value); }

    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithImports(const Aws::Vector<Import>& value) { SetImports(value); return *this;}

    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithImports(Aws::Vector<Import>&& value) { SetImports(std::move(value)); return *this;}

    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline GetFormTypeResult& AddImports(const Import& value) { m_imports.push_back(value); return *this; }

    /**
     * <p>The imports of the metadata form type.</p>
     */
    inline GetFormTypeResult& AddImports(Import&& value) { m_imports.push_back(std::move(value)); return *this; }


    /**
     * <p>The model of the metadata form type.</p>
     */
    inline const Model& GetModel() const{ return m_model; }

    /**
     * <p>The model of the metadata form type.</p>
     */
    inline void SetModel(const Model& value) { m_model = value; }

    /**
     * <p>The model of the metadata form type.</p>
     */
    inline void SetModel(Model&& value) { m_model = std::move(value); }

    /**
     * <p>The model of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithModel(const Model& value) { SetModel(value); return *this;}

    /**
     * <p>The model of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithModel(Model&& value) { SetModel(std::move(value)); return *this;}


    /**
     * <p>The name of the metadata form type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metadata form type.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the metadata form type.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the metadata form type.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const{ return m_originDomainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline void SetOriginDomainId(const Aws::String& value) { m_originDomainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline void SetOriginDomainId(Aws::String&& value) { m_originDomainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline void SetOriginDomainId(const char* value) { m_originDomainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline GetFormTypeResult& WithOriginDomainId(const Aws::String& value) { SetOriginDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline GetFormTypeResult& WithOriginDomainId(Aws::String&& value) { SetOriginDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata form type was
     * originally created.</p>
     */
    inline GetFormTypeResult& WithOriginDomainId(const char* value) { SetOriginDomainId(value); return *this;}


    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const{ return m_originProjectId; }

    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline void SetOriginProjectId(const Aws::String& value) { m_originProjectId = value; }

    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline void SetOriginProjectId(Aws::String&& value) { m_originProjectId = std::move(value); }

    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline void SetOriginProjectId(const char* value) { m_originProjectId.assign(value); }

    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline GetFormTypeResult& WithOriginProjectId(const Aws::String& value) { SetOriginProjectId(value); return *this;}

    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline GetFormTypeResult& WithOriginProjectId(Aws::String&& value) { SetOriginProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project in which this metadata form type was originally
     * created.</p>
     */
    inline GetFormTypeResult& WithOriginProjectId(const char* value) { SetOriginProjectId(value); return *this;}


    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline GetFormTypeResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline GetFormTypeResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that owns this metadata form type.</p>
     */
    inline GetFormTypeResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revision = value; }

    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }

    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline void SetRevision(const char* value) { m_revision.assign(value); }

    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p>The status of the metadata form type.</p>
     */
    inline const FormTypeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the metadata form type.</p>
     */
    inline void SetStatus(const FormTypeStatus& value) { m_status = value; }

    /**
     * <p>The status of the metadata form type.</p>
     */
    inline void SetStatus(FormTypeStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithStatus(const FormTypeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the metadata form type.</p>
     */
    inline GetFormTypeResult& WithStatus(FormTypeStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFormTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFormTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFormTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::Vector<Import> m_imports;

    Model m_model;

    Aws::String m_name;

    Aws::String m_originDomainId;

    Aws::String m_originProjectId;

    Aws::String m_owningProjectId;

    Aws::String m_revision;

    FormTypeStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
