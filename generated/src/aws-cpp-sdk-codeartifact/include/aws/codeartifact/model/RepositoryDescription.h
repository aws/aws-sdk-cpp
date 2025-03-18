/**
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
    AWS_CODEARTIFACT_API RepositoryDescription() = default;
    AWS_CODEARTIFACT_API RepositoryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API RepositoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the repository. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RepositoryDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that manages
     * the repository. </p>
     */
    inline const Aws::String& GetAdministratorAccount() const { return m_administratorAccount; }
    inline bool AdministratorAccountHasBeenSet() const { return m_administratorAccountHasBeenSet; }
    template<typename AdministratorAccountT = Aws::String>
    void SetAdministratorAccount(AdministratorAccountT&& value) { m_administratorAccountHasBeenSet = true; m_administratorAccount = std::forward<AdministratorAccountT>(value); }
    template<typename AdministratorAccountT = Aws::String>
    RepositoryDescription& WithAdministratorAccount(AdministratorAccountT&& value) { SetAdministratorAccount(std::forward<AdministratorAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain that contains the repository. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    RepositoryDescription& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain that contains the repository. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const { return m_domainOwner; }
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }
    template<typename DomainOwnerT = Aws::String>
    void SetDomainOwner(DomainOwnerT&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::forward<DomainOwnerT>(value); }
    template<typename DomainOwnerT = Aws::String>
    RepositoryDescription& WithDomainOwner(DomainOwnerT&& value) { SetDomainOwner(std::forward<DomainOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the repository. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RepositoryDescription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A text description of the repository. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RepositoryDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of upstream repositories to associate with the repository. The order
     * of the upstream repositories in the list determines their priority order when
     * CodeArtifact looks for a requested package version. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline const Aws::Vector<UpstreamRepositoryInfo>& GetUpstreams() const { return m_upstreams; }
    inline bool UpstreamsHasBeenSet() const { return m_upstreamsHasBeenSet; }
    template<typename UpstreamsT = Aws::Vector<UpstreamRepositoryInfo>>
    void SetUpstreams(UpstreamsT&& value) { m_upstreamsHasBeenSet = true; m_upstreams = std::forward<UpstreamsT>(value); }
    template<typename UpstreamsT = Aws::Vector<UpstreamRepositoryInfo>>
    RepositoryDescription& WithUpstreams(UpstreamsT&& value) { SetUpstreams(std::forward<UpstreamsT>(value)); return *this;}
    template<typename UpstreamsT = UpstreamRepositoryInfo>
    RepositoryDescription& AddUpstreams(UpstreamsT&& value) { m_upstreamsHasBeenSet = true; m_upstreams.emplace_back(std::forward<UpstreamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of external connections associated with the repository. </p>
     */
    inline const Aws::Vector<RepositoryExternalConnectionInfo>& GetExternalConnections() const { return m_externalConnections; }
    inline bool ExternalConnectionsHasBeenSet() const { return m_externalConnectionsHasBeenSet; }
    template<typename ExternalConnectionsT = Aws::Vector<RepositoryExternalConnectionInfo>>
    void SetExternalConnections(ExternalConnectionsT&& value) { m_externalConnectionsHasBeenSet = true; m_externalConnections = std::forward<ExternalConnectionsT>(value); }
    template<typename ExternalConnectionsT = Aws::Vector<RepositoryExternalConnectionInfo>>
    RepositoryDescription& WithExternalConnections(ExternalConnectionsT&& value) { SetExternalConnections(std::forward<ExternalConnectionsT>(value)); return *this;}
    template<typename ExternalConnectionsT = RepositoryExternalConnectionInfo>
    RepositoryDescription& AddExternalConnections(ExternalConnectionsT&& value) { m_externalConnectionsHasBeenSet = true; m_externalConnections.emplace_back(std::forward<ExternalConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that represents the date and time the repository was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    RepositoryDescription& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
