﻿/**
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
  class AWS_CODEARTIFACT_API DeleteRepositoryRequest : public CodeArtifactRequest
  {
  public:
    DeleteRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRepository"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline DeleteRepositoryRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline DeleteRepositoryRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p> The name of the domain that contains the repository to delete. </p>
     */
    inline DeleteRepositoryRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline DeleteRepositoryRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline DeleteRepositoryRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the AWS account that owns the domain. It does
     * not include dashes or spaces. </p>
     */
    inline DeleteRepositoryRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p> The name of the repository to delete. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline DeleteRepositoryRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline DeleteRepositoryRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository to delete. </p>
     */
    inline DeleteRepositoryRequest& WithRepository(const char* value) { SetRepository(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
