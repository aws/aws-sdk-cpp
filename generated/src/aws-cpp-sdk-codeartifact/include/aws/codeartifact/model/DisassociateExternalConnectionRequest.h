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
  class DisassociateExternalConnectionRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API DisassociateExternalConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateExternalConnection"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the domain that contains the repository from which to remove the
     * external repository. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DisassociateExternalConnectionRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DisassociateExternalConnectionRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DisassociateExternalConnectionRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline DisassociateExternalConnectionRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline DisassociateExternalConnectionRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline DisassociateExternalConnectionRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository from which the external connection will be
     * removed. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline DisassociateExternalConnectionRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline DisassociateExternalConnectionRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline DisassociateExternalConnectionRequest& WithRepository(const char* value) { SetRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the external connection to be removed from the repository. </p>
     */
    inline const Aws::String& GetExternalConnection() const{ return m_externalConnection; }
    inline bool ExternalConnectionHasBeenSet() const { return m_externalConnectionHasBeenSet; }
    inline void SetExternalConnection(const Aws::String& value) { m_externalConnectionHasBeenSet = true; m_externalConnection = value; }
    inline void SetExternalConnection(Aws::String&& value) { m_externalConnectionHasBeenSet = true; m_externalConnection = std::move(value); }
    inline void SetExternalConnection(const char* value) { m_externalConnectionHasBeenSet = true; m_externalConnection.assign(value); }
    inline DisassociateExternalConnectionRequest& WithExternalConnection(const Aws::String& value) { SetExternalConnection(value); return *this;}
    inline DisassociateExternalConnectionRequest& WithExternalConnection(Aws::String&& value) { SetExternalConnection(std::move(value)); return *this;}
    inline DisassociateExternalConnectionRequest& WithExternalConnection(const char* value) { SetExternalConnection(value); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_externalConnection;
    bool m_externalConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
