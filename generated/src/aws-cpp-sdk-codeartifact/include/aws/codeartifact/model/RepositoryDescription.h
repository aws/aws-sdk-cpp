﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeartifact/model/UpstreamRepositoryInfo.h>
#include <aws/codeartifact/model/RepositoryExternalConnectionInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> The details of a repository stored in CodeArtifact. A CodeArtifact
   * repository contains a set of package versions, each of which maps to a set of
   * assets. Repositories are polyglot—a single repository can contain packages of
   * any supported type. Each repository exposes endpoints for fetching and
   * publishing packages using tools like the <code>npm</code> CLI, the Maven CLI
   * (<code>mvn</code>), and <code>pip</code>. You can create up to 100 repositories
   * per Amazon Web Services account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/RepositoryDescription">AWS
   * API Reference</a></p>
   */
  class RepositoryDescription
  {
  public:
    AWS_CODEARTIFACT_API RepositoryDescription();
    AWS_CODEARTIFACT_API RepositoryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API RepositoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the repository. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RepositoryDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RepositoryDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RepositoryDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that manages
     * the repository. </p>
     */
    inline const Aws::String& GetAdministratorAccount() const{ return m_administratorAccount; }
    inline bool AdministratorAccountHasBeenSet() const { return m_administratorAccountHasBeenSet; }
    inline void SetAdministratorAccount(const Aws::String& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = value; }
    inline void SetAdministratorAccount(Aws::String&& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = std::move(value); }
    inline void SetAdministratorAccount(const char* value) { m_administratorAccountHasBeenSet = true; m_administratorAccount.assign(value); }
    inline RepositoryDescription& WithAdministratorAccount(const Aws::String& value) { SetAdministratorAccount(value); return *this;}
    inline RepositoryDescription& WithAdministratorAccount(Aws::String&& value) { SetAdministratorAccount(std::move(value)); return *this;}
    inline RepositoryDescription& WithAdministratorAccount(const char* value) { SetAdministratorAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline RepositoryDescription& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline RepositoryDescription& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline RepositoryDescription& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain that contains the repository. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }
    inline RepositoryDescription& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline RepositoryDescription& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline RepositoryDescription& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the repository. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RepositoryDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RepositoryDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RepositoryDescription& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A text description of the repository. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RepositoryDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RepositoryDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RepositoryDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of upstream repositories to associate with the repository. The order
     * of the upstream repositories in the list determines their priority order when
     * CodeArtifact looks for a requested package version. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline const Aws::Vector<UpstreamRepositoryInfo>& GetUpstreams() const{ return m_upstreams; }
    inline bool UpstreamsHasBeenSet() const { return m_upstreamsHasBeenSet; }
    inline void SetUpstreams(const Aws::Vector<UpstreamRepositoryInfo>& value) { m_upstreamsHasBeenSet = true; m_upstreams = value; }
    inline void SetUpstreams(Aws::Vector<UpstreamRepositoryInfo>&& value) { m_upstreamsHasBeenSet = true; m_upstreams = std::move(value); }
    inline RepositoryDescription& WithUpstreams(const Aws::Vector<UpstreamRepositoryInfo>& value) { SetUpstreams(value); return *this;}
    inline RepositoryDescription& WithUpstreams(Aws::Vector<UpstreamRepositoryInfo>&& value) { SetUpstreams(std::move(value)); return *this;}
    inline RepositoryDescription& AddUpstreams(const UpstreamRepositoryInfo& value) { m_upstreamsHasBeenSet = true; m_upstreams.push_back(value); return *this; }
    inline RepositoryDescription& AddUpstreams(UpstreamRepositoryInfo&& value) { m_upstreamsHasBeenSet = true; m_upstreams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of external connections associated with the repository. </p>
     */
    inline const Aws::Vector<RepositoryExternalConnectionInfo>& GetExternalConnections() const{ return m_externalConnections; }
    inline bool ExternalConnectionsHasBeenSet() const { return m_externalConnectionsHasBeenSet; }
    inline void SetExternalConnections(const Aws::Vector<RepositoryExternalConnectionInfo>& value) { m_externalConnectionsHasBeenSet = true; m_externalConnections = value; }
    inline void SetExternalConnections(Aws::Vector<RepositoryExternalConnectionInfo>&& value) { m_externalConnectionsHasBeenSet = true; m_externalConnections = std::move(value); }
    inline RepositoryDescription& WithExternalConnections(const Aws::Vector<RepositoryExternalConnectionInfo>& value) { SetExternalConnections(value); return *this;}
    inline RepositoryDescription& WithExternalConnections(Aws::Vector<RepositoryExternalConnectionInfo>&& value) { SetExternalConnections(std::move(value)); return *this;}
    inline RepositoryDescription& AddExternalConnections(const RepositoryExternalConnectionInfo& value) { m_externalConnectionsHasBeenSet = true; m_externalConnections.push_back(value); return *this; }
    inline RepositoryDescription& AddExternalConnections(RepositoryExternalConnectionInfo&& value) { m_externalConnectionsHasBeenSet = true; m_externalConnections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline RepositoryDescription& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline RepositoryDescription& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_administratorAccount;
    bool m_administratorAccountHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<UpstreamRepositoryInfo> m_upstreams;
    bool m_upstreamsHasBeenSet = false;

    Aws::Vector<RepositoryExternalConnectionInfo> m_externalConnections;
    bool m_externalConnectionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
