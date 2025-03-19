/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object representing a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/Repository">AWS
   * API Reference</a></p>
   */
  class Repository
  {
  public:
    AWS_ECRPUBLIC_API Repository() = default;
    AWS_ECRPUBLIC_API Repository(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, Amazon Web Services account ID of the repository owner, repository
     * namespace, and repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline const Aws::String& GetRepositoryArn() const { return m_repositoryArn; }
    inline bool RepositoryArnHasBeenSet() const { return m_repositoryArnHasBeenSet; }
    template<typename RepositoryArnT = Aws::String>
    void SetRepositoryArn(RepositoryArnT&& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = std::forward<RepositoryArnT>(value); }
    template<typename RepositoryArnT = Aws::String>
    Repository& WithRepositoryArn(RepositoryArnT&& value) { SetRepositoryArn(std::forward<RepositoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the public registry
     * that contains the repository.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    Repository& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    Repository& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI for the repository. You can use this URI for container image
     * <code>push</code> and <code>pull</code> operations.</p>
     */
    inline const Aws::String& GetRepositoryUri() const { return m_repositoryUri; }
    inline bool RepositoryUriHasBeenSet() const { return m_repositoryUriHasBeenSet; }
    template<typename RepositoryUriT = Aws::String>
    void SetRepositoryUri(RepositoryUriT&& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = std::forward<RepositoryUriT>(value); }
    template<typename RepositoryUriT = Aws::String>
    Repository& WithRepositoryUri(RepositoryUriT&& value) { SetRepositoryUri(std::forward<RepositoryUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Repository& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryArn;
    bool m_repositoryArnHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryUri;
    bool m_repositoryUriHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
