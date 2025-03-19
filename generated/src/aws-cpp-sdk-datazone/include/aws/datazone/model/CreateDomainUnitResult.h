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
    AWS_DATAZONE_API CreateDomainUnitResult() = default;
    AWS_DATAZONE_API CreateDomainUnitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateDomainUnitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of the ancestor domain units.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAncestorDomainUnitIds() const { return m_ancestorDomainUnitIds; }
    template<typename AncestorDomainUnitIdsT = Aws::Vector<Aws::String>>
    void SetAncestorDomainUnitIds(AncestorDomainUnitIdsT&& value) { m_ancestorDomainUnitIdsHasBeenSet = true; m_ancestorDomainUnitIds = std::forward<AncestorDomainUnitIdsT>(value); }
    template<typename AncestorDomainUnitIdsT = Aws::Vector<Aws::String>>
    CreateDomainUnitResult& WithAncestorDomainUnitIds(AncestorDomainUnitIdsT&& value) { SetAncestorDomainUnitIds(std::forward<AncestorDomainUnitIdsT>(value)); return *this;}
    template<typename AncestorDomainUnitIdsT = Aws::String>
    CreateDomainUnitResult& AddAncestorDomainUnitIds(AncestorDomainUnitIdsT&& value) { m_ancestorDomainUnitIdsHasBeenSet = true; m_ancestorDomainUnitIds.emplace_back(std::forward<AncestorDomainUnitIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the domain unit was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateDomainUnitResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the domain unit.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    CreateDomainUnitResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the domain unit.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateDomainUnitResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the domain unit was created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateDomainUnitResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateDomainUnitResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain unit.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateDomainUnitResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owners of the domain unit.</p>
     */
    inline const Aws::Vector<DomainUnitOwnerProperties>& GetOwners() const { return m_owners; }
    template<typename OwnersT = Aws::Vector<DomainUnitOwnerProperties>>
    void SetOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners = std::forward<OwnersT>(value); }
    template<typename OwnersT = Aws::Vector<DomainUnitOwnerProperties>>
    CreateDomainUnitResult& WithOwners(OwnersT&& value) { SetOwners(std::forward<OwnersT>(value)); return *this;}
    template<typename OwnersT = DomainUnitOwnerProperties>
    CreateDomainUnitResult& AddOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners.emplace_back(std::forward<OwnersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the parent domain unit.</p>
     */
    inline const Aws::String& GetParentDomainUnitId() const { return m_parentDomainUnitId; }
    template<typename ParentDomainUnitIdT = Aws::String>
    void SetParentDomainUnitId(ParentDomainUnitIdT&& value) { m_parentDomainUnitIdHasBeenSet = true; m_parentDomainUnitId = std::forward<ParentDomainUnitIdT>(value); }
    template<typename ParentDomainUnitIdT = Aws::String>
    CreateDomainUnitResult& WithParentDomainUnitId(ParentDomainUnitIdT&& value) { SetParentDomainUnitId(std::forward<ParentDomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDomainUnitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ancestorDomainUnitIds;
    bool m_ancestorDomainUnitIdsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DomainUnitOwnerProperties> m_owners;
    bool m_ownersHasBeenSet = false;

    Aws::String m_parentDomainUnitId;
    bool m_parentDomainUnitIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
