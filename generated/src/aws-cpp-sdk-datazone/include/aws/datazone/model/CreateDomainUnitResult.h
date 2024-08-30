/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DomainUnitOwnerProperties.h>
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
  class CreateDomainUnitResult
  {
  public:
    AWS_DATAZONE_API CreateDomainUnitResult();
    AWS_DATAZONE_API CreateDomainUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateDomainUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of the ancestor domain units.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAncestorDomainUnitIds() const{ return m_ancestorDomainUnitIds; }
    inline void SetAncestorDomainUnitIds(const Aws::Vector<Aws::String>& value) { m_ancestorDomainUnitIds = value; }
    inline void SetAncestorDomainUnitIds(Aws::Vector<Aws::String>&& value) { m_ancestorDomainUnitIds = std::move(value); }
    inline CreateDomainUnitResult& WithAncestorDomainUnitIds(const Aws::Vector<Aws::String>& value) { SetAncestorDomainUnitIds(value); return *this;}
    inline CreateDomainUnitResult& WithAncestorDomainUnitIds(Aws::Vector<Aws::String>&& value) { SetAncestorDomainUnitIds(std::move(value)); return *this;}
    inline CreateDomainUnitResult& AddAncestorDomainUnitIds(const Aws::String& value) { m_ancestorDomainUnitIds.push_back(value); return *this; }
    inline CreateDomainUnitResult& AddAncestorDomainUnitIds(Aws::String&& value) { m_ancestorDomainUnitIds.push_back(std::move(value)); return *this; }
    inline CreateDomainUnitResult& AddAncestorDomainUnitIds(const char* value) { m_ancestorDomainUnitIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the domain unit was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateDomainUnitResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateDomainUnitResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the domain unit.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline CreateDomainUnitResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline CreateDomainUnitResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the domain unit.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateDomainUnitResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDomainUnitResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the domain unit was created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline CreateDomainUnitResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateDomainUnitResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateDomainUnitResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateDomainUnitResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain unit.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateDomainUnitResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDomainUnitResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owners of the domain unit.</p>
     */
    inline const Aws::Vector<DomainUnitOwnerProperties>& GetOwners() const{ return m_owners; }
    inline void SetOwners(const Aws::Vector<DomainUnitOwnerProperties>& value) { m_owners = value; }
    inline void SetOwners(Aws::Vector<DomainUnitOwnerProperties>&& value) { m_owners = std::move(value); }
    inline CreateDomainUnitResult& WithOwners(const Aws::Vector<DomainUnitOwnerProperties>& value) { SetOwners(value); return *this;}
    inline CreateDomainUnitResult& WithOwners(Aws::Vector<DomainUnitOwnerProperties>&& value) { SetOwners(std::move(value)); return *this;}
    inline CreateDomainUnitResult& AddOwners(const DomainUnitOwnerProperties& value) { m_owners.push_back(value); return *this; }
    inline CreateDomainUnitResult& AddOwners(DomainUnitOwnerProperties&& value) { m_owners.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the parent domain unit.</p>
     */
    inline const Aws::String& GetParentDomainUnitId() const{ return m_parentDomainUnitId; }
    inline void SetParentDomainUnitId(const Aws::String& value) { m_parentDomainUnitId = value; }
    inline void SetParentDomainUnitId(Aws::String&& value) { m_parentDomainUnitId = std::move(value); }
    inline void SetParentDomainUnitId(const char* value) { m_parentDomainUnitId.assign(value); }
    inline CreateDomainUnitResult& WithParentDomainUnitId(const Aws::String& value) { SetParentDomainUnitId(value); return *this;}
    inline CreateDomainUnitResult& WithParentDomainUnitId(Aws::String&& value) { SetParentDomainUnitId(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithParentDomainUnitId(const char* value) { SetParentDomainUnitId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDomainUnitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDomainUnitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDomainUnitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ancestorDomainUnitIds;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::Vector<DomainUnitOwnerProperties> m_owners;

    Aws::String m_parentDomainUnitId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
