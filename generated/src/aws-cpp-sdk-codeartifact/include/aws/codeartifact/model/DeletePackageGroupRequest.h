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
  class DeletePackageGroupRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API DeletePackageGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePackageGroup"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline DeletePackageGroupRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline DeletePackageGroupRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The domain that contains the package group to be deleted. </p>
     */
    inline DeletePackageGroupRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline DeletePackageGroupRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline DeletePackageGroupRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline DeletePackageGroupRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline const Aws::String& GetPackageGroup() const{ return m_packageGroup; }

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline bool PackageGroupHasBeenSet() const { return m_packageGroupHasBeenSet; }

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline void SetPackageGroup(const Aws::String& value) { m_packageGroupHasBeenSet = true; m_packageGroup = value; }

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline void SetPackageGroup(Aws::String&& value) { m_packageGroupHasBeenSet = true; m_packageGroup = std::move(value); }

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline void SetPackageGroup(const char* value) { m_packageGroupHasBeenSet = true; m_packageGroup.assign(value); }

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline DeletePackageGroupRequest& WithPackageGroup(const Aws::String& value) { SetPackageGroup(value); return *this;}

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline DeletePackageGroupRequest& WithPackageGroup(Aws::String&& value) { SetPackageGroup(std::move(value)); return *this;}

    /**
     * <p>The pattern of the package group to be deleted.</p>
     */
    inline DeletePackageGroupRequest& WithPackageGroup(const char* value) { SetPackageGroup(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_packageGroup;
    bool m_packageGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
