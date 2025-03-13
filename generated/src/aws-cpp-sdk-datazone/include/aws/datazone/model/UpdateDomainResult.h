/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/SingleSignOn.h>
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
  class UpdateDomainResult
  {
  public:
    AWS_DATAZONE_API UpdateDomainResult() = default;
    AWS_DATAZONE_API UpdateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDomainResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const { return m_domainExecutionRole; }
    template<typename DomainExecutionRoleT = Aws::String>
    void SetDomainExecutionRole(DomainExecutionRoleT&& value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole = std::forward<DomainExecutionRoleT>(value); }
    template<typename DomainExecutionRoleT = Aws::String>
    UpdateDomainResult& WithDomainExecutionRole(DomainExecutionRoleT&& value) { SetDomainExecutionRole(std::forward<DomainExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateDomainResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the timestamp of when the domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    UpdateDomainResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDomainResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root domain unit.</p>
     */
    inline const Aws::String& GetRootDomainUnitId() const { return m_rootDomainUnitId; }
    template<typename RootDomainUnitIdT = Aws::String>
    void SetRootDomainUnitId(RootDomainUnitIdT&& value) { m_rootDomainUnitIdHasBeenSet = true; m_rootDomainUnitId = std::forward<RootDomainUnitIdT>(value); }
    template<typename RootDomainUnitIdT = Aws::String>
    UpdateDomainResult& WithRootDomainUnitId(RootDomainUnitIdT&& value) { SetRootDomainUnitId(std::forward<RootDomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role of the domain.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    UpdateDomainResult& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single sign-on option of the Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const { return m_singleSignOn; }
    template<typename SingleSignOnT = SingleSignOn>
    void SetSingleSignOn(SingleSignOnT&& value) { m_singleSignOnHasBeenSet = true; m_singleSignOn = std::forward<SingleSignOnT>(value); }
    template<typename SingleSignOnT = SingleSignOn>
    UpdateDomainResult& WithSingleSignOn(SingleSignOnT&& value) { SetSingleSignOn(std::forward<SingleSignOnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainExecutionRole;
    bool m_domainExecutionRoleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_rootDomainUnitId;
    bool m_rootDomainUnitIdHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    SingleSignOn m_singleSignOn;
    bool m_singleSignOnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
