/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a create repository operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepositoryInput">AWS
   * API Reference</a></p>
   */
  class CreateRepositoryRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API CreateRepositoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the new repository to be created.</p>  <p>The repository
     * name must be unique across the calling Amazon Web Services account. Repository
     * names are limited to 100 alphanumeric, dash, and underscore characters, and
     * cannot include certain characters. For more information about the limits on
     * repository names, see <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Quotas</a>
     * in the <i>CodeCommit User Guide</i>. The suffix .git is prohibited.</p> 
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CreateRepositoryRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment or description about the new repository.</p>  <p>The
     * description field for a repository accepts all HTML characters and all valid
     * Unicode characters. Applications that do not HTML-encode the description and
     * display it in a webpage can expose users to potentially malicious code. Make
     * sure that you HTML-encode the description field in any application that uses
     * this API to display the repository description on a webpage.</p> 
     */
    inline const Aws::String& GetRepositoryDescription() const { return m_repositoryDescription; }
    inline bool RepositoryDescriptionHasBeenSet() const { return m_repositoryDescriptionHasBeenSet; }
    template<typename RepositoryDescriptionT = Aws::String>
    void SetRepositoryDescription(RepositoryDescriptionT&& value) { m_repositoryDescriptionHasBeenSet = true; m_repositoryDescription = std::forward<RepositoryDescriptionT>(value); }
    template<typename RepositoryDescriptionT = Aws::String>
    CreateRepositoryRequest& WithRepositoryDescription(RepositoryDescriptionT&& value) { SetRepositoryDescription(std::forward<RepositoryDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tag key-value pairs to use when tagging this repository.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRepositoryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRepositoryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for kmsKeyID, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p> <p>If no key is specified, the default
     * <code>aws/codecommit</code> Amazon Web Services managed key is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateRepositoryRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryDescription;
    bool m_repositoryDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
