/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateFormTypeResult
  {
  public:
    AWS_DATAZONE_API CreateFormTypeResult() = default;
    AWS_DATAZONE_API CreateFormTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateFormTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFormTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateFormTypeResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFormTypeResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const { return m_originDomainId; }
    template<typename OriginDomainIdT = Aws::String>
    void SetOriginDomainId(OriginDomainIdT&& value) { m_originDomainIdHasBeenSet = true; m_originDomainId = std::forward<OriginDomainIdT>(value); }
    template<typename OriginDomainIdT = Aws::String>
    CreateFormTypeResult& WithOriginDomainId(OriginDomainIdT&& value) { SetOriginDomainId(std::forward<OriginDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project in which this Amazon DataZone metadata form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const { return m_originProjectId; }
    template<typename OriginProjectIdT = Aws::String>
    void SetOriginProjectId(OriginProjectIdT&& value) { m_originProjectIdHasBeenSet = true; m_originProjectId = std::forward<OriginProjectIdT>(value); }
    template<typename OriginProjectIdT = Aws::String>
    CreateFormTypeResult& WithOriginProjectId(OriginProjectIdT&& value) { SetOriginProjectId(std::forward<OriginProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project that owns this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    CreateFormTypeResult& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    CreateFormTypeResult& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFormTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_originDomainId;
    bool m_originDomainIdHasBeenSet = false;

    Aws::String m_originProjectId;
    bool m_originProjectIdHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
