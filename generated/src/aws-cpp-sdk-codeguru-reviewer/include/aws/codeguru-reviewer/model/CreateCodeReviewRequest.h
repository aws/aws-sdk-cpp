/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/CodeReviewType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class CreateCodeReviewRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API CreateCodeReviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCodeReview"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the code review. The name of each code review in your Amazon Web
     * Services account must be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCodeReviewRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * object. You can retrieve this ARN by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     * <p>A code review can only be created on an associated repository. This is the
     * ARN of the associated repository.</p>
     */
    inline const Aws::String& GetRepositoryAssociationArn() const { return m_repositoryAssociationArn; }
    inline bool RepositoryAssociationArnHasBeenSet() const { return m_repositoryAssociationArnHasBeenSet; }
    template<typename RepositoryAssociationArnT = Aws::String>
    void SetRepositoryAssociationArn(RepositoryAssociationArnT&& value) { m_repositoryAssociationArnHasBeenSet = true; m_repositoryAssociationArn = std::forward<RepositoryAssociationArnT>(value); }
    template<typename RepositoryAssociationArnT = Aws::String>
    CreateCodeReviewRequest& WithRepositoryAssociationArn(RepositoryAssociationArnT&& value) { SetRepositoryAssociationArn(std::forward<RepositoryAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of code review to create. This is specified using a <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html">CodeReviewType</a>
     * object. You can create a code review only of type
     * <code>RepositoryAnalysis</code>.</p>
     */
    inline const CodeReviewType& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = CodeReviewType>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = CodeReviewType>
    CreateCodeReviewRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate code reviews if there are failures and retries.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateCodeReviewRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_repositoryAssociationArn;
    bool m_repositoryAssociationArnHasBeenSet = false;

    CodeReviewType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
