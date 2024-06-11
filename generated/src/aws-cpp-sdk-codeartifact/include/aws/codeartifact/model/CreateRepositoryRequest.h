/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeartifact/model/UpstreamRepository.h>
#include <aws/codeartifact/model/Tag.h>
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
  class CreateRepositoryRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API CreateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The name of the domain that contains the created repository. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreateRepositoryRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreateRepositoryRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreateRepositoryRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline CreateRepositoryRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}
    inline CreateRepositoryRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}
    inline CreateRepositoryRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository to create. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline CreateRepositoryRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline CreateRepositoryRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline CreateRepositoryRequest& WithRepository(const char* value) { SetRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the created repository. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRepositoryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRepositoryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRepositoryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of upstream repositories to associate with the repository. The order
     * of the upstream repositories in the list determines their priority order when
     * CodeArtifact looks for a requested package version. For more information, see <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/ug/repos-upstream.html">Working
     * with upstream repositories</a>. </p>
     */
    inline const Aws::Vector<UpstreamRepository>& GetUpstreams() const{ return m_upstreams; }
    inline bool UpstreamsHasBeenSet() const { return m_upstreamsHasBeenSet; }
    inline void SetUpstreams(const Aws::Vector<UpstreamRepository>& value) { m_upstreamsHasBeenSet = true; m_upstreams = value; }
    inline void SetUpstreams(Aws::Vector<UpstreamRepository>&& value) { m_upstreamsHasBeenSet = true; m_upstreams = std::move(value); }
    inline CreateRepositoryRequest& WithUpstreams(const Aws::Vector<UpstreamRepository>& value) { SetUpstreams(value); return *this;}
    inline CreateRepositoryRequest& WithUpstreams(Aws::Vector<UpstreamRepository>&& value) { SetUpstreams(std::move(value)); return *this;}
    inline CreateRepositoryRequest& AddUpstreams(const UpstreamRepository& value) { m_upstreamsHasBeenSet = true; m_upstreams.push_back(value); return *this; }
    inline CreateRepositoryRequest& AddUpstreams(UpstreamRepository&& value) { m_upstreamsHasBeenSet = true; m_upstreams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tag key-value pairs for the repository.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRepositoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRepositoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRepositoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRepositoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<UpstreamRepository> m_upstreams;
    bool m_upstreamsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
