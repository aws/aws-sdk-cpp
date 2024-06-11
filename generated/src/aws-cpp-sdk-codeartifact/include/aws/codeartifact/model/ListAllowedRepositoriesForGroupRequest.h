﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class ListAllowedRepositoriesForGroupRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API ListAllowedRepositoriesForGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAllowedRepositoriesForGroup"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the package group from which to list
     * allowed repositories. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ListAllowedRepositoriesForGroupRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }
    inline ListAllowedRepositoriesForGroupRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern of the package group from which to list allowed repositories.</p>
     */
    inline const Aws::String& GetPackageGroup() const{ return m_packageGroup; }
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }
    inline void SetPackageGroup(const Aws::String& value) { m_packageGroupHasBeenSet = true; m_packageGroup = value; }
    inline void SetPackageGroup(Aws::String&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::move(value); }
    inline void SetPackageGroup(const char* value) { m_packageGroupHasBeenSet = true; m_packageGroup.assign(value); }
    inline ListAllowedRepositoriesForGroupRequest& WithPackageGroup(const Aws::String& value) { SetPackageGroup(value); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithPackageGroup(Aws::String&& value) { SetPackageGroup(std::move(value)); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithPackageGroup(const char* value) { SetPackageGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin configuration restriction type of which to list allowed
     * repositories.</p>
     */
    inline const PackageGroupOriginRestrictionType& GetOriginRestrictionType() const{ return m_originRestrictionType; }
    inline bool OriginRestrictionTypeHasBeenSet() const { return m_originRestrictionTypeHasBeenSet; }
    inline void SetOriginRestrictionType(const PackageGroupOriginRestrictionType& value) { m_originRestrictionTypeHasBeenSet = true; m_originRestrictionType = value; }
    inline void SetOriginRestrictionType(PackageGroupOriginRestrictionType&& value) { m_originRestrictionTypeHasBeenSet = true; m_originRestrictionType = std::move(value); }
    inline ListAllowedRepositoriesForGroupRequest& WithOriginRestrictionType(const PackageGroupOriginRestrictionType& value) { SetOriginRestrictionType(value); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithOriginRestrictionType(PackageGroupOriginRestrictionType&& value) { SetOriginRestrictionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAllowedRepositoriesForGroupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAllowedRepositoriesForGroupRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAllowedRepositoriesForGroupRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    PackageGroupOriginRestrictionType m_originRestrictionType;
    bool m_originRestrictionTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
