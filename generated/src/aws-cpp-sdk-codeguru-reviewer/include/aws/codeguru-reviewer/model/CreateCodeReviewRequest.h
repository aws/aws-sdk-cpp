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
    AWS_CODEGURUREVIEWER_API CreateCodeReviewRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCodeReviewRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCodeReviewRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCodeReviewRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::String& GetRepositoryAssociationArn() const{ return m_repositoryAssociationArn; }
    inline bool RepositoryAssociationArnHasBeenSet() const { return m_repositoryAssociationArnHasBeenSet; }
    inline void SetRepositoryAssociationArn(const Aws::String& value) { m_repositoryAssociationArnHasBeenSet = true; m_repositoryAssociationArn = value; }
    inline void SetRepositoryAssociationArn(Aws::String&& value) { m_repositoryAssociationArnHasBeenSet = true; m_repositoryAssociationArn = std::move(value); }
    inline void SetRepositoryAssociationArn(const char* value) { m_repositoryAssociationArnHasBeenSet = true; m_repositoryAssociationArn.assign(value); }
    inline CreateCodeReviewRequest& WithRepositoryAssociationArn(const Aws::String& value) { SetRepositoryAssociationArn(value); return *this;}
    inline CreateCodeReviewRequest& WithRepositoryAssociationArn(Aws::String&& value) { SetRepositoryAssociationArn(std::move(value)); return *this;}
    inline CreateCodeReviewRequest& WithRepositoryAssociationArn(const char* value) { SetRepositoryAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of code review to create. This is specified using a <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html">CodeReviewType</a>
     * object. You can create a code review only of type
     * <code>RepositoryAnalysis</code>.</p>
     */
    inline const CodeReviewType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CodeReviewType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CodeReviewType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateCodeReviewRequest& WithType(const CodeReviewType& value) { SetType(value); return *this;}
    inline CreateCodeReviewRequest& WithType(CodeReviewType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon CodeGuru Reviewer uses this value to prevent the accidental creation
     * of duplicate code reviews if there are failures and retries.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateCodeReviewRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateCodeReviewRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateCodeReviewRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_repositoryAssociationArn;
    bool m_repositoryAssociationArnHasBeenSet = false;

    CodeReviewType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
