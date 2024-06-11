/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListAssociatedPackagesRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API ListAssociatedPackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociatedPackages"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the package group from which to list
     * associated packages. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ListAssociatedPackagesRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ListAssociatedPackagesRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ListAssociatedPackagesRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline ListAssociatedPackagesRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline ListAssociatedPackagesRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline ListAssociatedPackagesRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pattern of the package group from which to list associated packages.
     * </p>
     */
    inline const Aws::String& GetPackageGroup() const{ return m_packageGroup; }
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }
    inline void SetPackageGroup(const Aws::String& value) { m_packageGroupHasBeenSet = true; m_packageGroup = value; }
    inline void SetPackageGroup(Aws::String&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::move(value); }
    inline void SetPackageGroup(const char* value) { m_packageGroupHasBeenSet = true; m_packageGroup.assign(value); }
    inline ListAssociatedPackagesRequest& WithPackageGroup(const Aws::String& value) { SetPackageGroup(value); return *this;}
    inline ListAssociatedPackagesRequest& WithPackageGroup(Aws::String&& value) { SetPackageGroup(std::move(value)); return *this;}
    inline ListAssociatedPackagesRequest& WithPackageGroup(const char* value) { SetPackageGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssociatedPackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListAssociatedPackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociatedPackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociatedPackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> When this flag is included, <code>ListAssociatedPackages</code> will return
     * a list of packages that would be associated with a package group, even if it
     * does not exist. </p>
     */
    inline bool GetPreview() const{ return m_preview; }
    inline bool PreviewHasBeenSet() const { return m_previewHasBeenSet; }
    inline void SetPreview(bool value) { m_previewHasBeenSet = true; m_preview = value; }
    inline ListAssociatedPackagesRequest& WithPreview(bool value) { SetPreview(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_packageGroup;
    bool m_packageGroupHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_preview;
    bool m_previewHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
