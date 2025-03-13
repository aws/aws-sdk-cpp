/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/Comment.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about comments on the comparison between two
   * commits.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CommentsForComparedCommit">AWS
   * API Reference</a></p>
   */
  class CommentsForComparedCommit
  {
  public:
    AWS_CODECOMMIT_API CommentsForComparedCommit() = default;
    AWS_CODECOMMIT_API CommentsForComparedCommit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API CommentsForComparedCommit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository that contains the compared commits.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CommentsForComparedCommit& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit used to establish the before of the
     * comparison.</p>
     */
    inline const Aws::String& GetBeforeCommitId() const { return m_beforeCommitId; }
    inline bool BeforeCommitIdHasBeenSet() const { return m_beforeCommitIdHasBeenSet; }
    template<typename BeforeCommitIdT = Aws::String>
    void SetBeforeCommitId(BeforeCommitIdT&& value) { m_beforeCommitIdHasBeenSet = true; m_beforeCommitId = std::forward<BeforeCommitIdT>(value); }
    template<typename BeforeCommitIdT = Aws::String>
    CommentsForComparedCommit& WithBeforeCommitId(BeforeCommitIdT&& value) { SetBeforeCommitId(std::forward<BeforeCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full commit ID of the commit used to establish the after of the
     * comparison.</p>
     */
    inline const Aws::String& GetAfterCommitId() const { return m_afterCommitId; }
    inline bool AfterCommitIdHasBeenSet() const { return m_afterCommitIdHasBeenSet; }
    template<typename AfterCommitIdT = Aws::String>
    void SetAfterCommitId(AfterCommitIdT&& value) { m_afterCommitIdHasBeenSet = true; m_afterCommitId = std::forward<AfterCommitIdT>(value); }
    template<typename AfterCommitIdT = Aws::String>
    CommentsForComparedCommit& WithAfterCommitId(AfterCommitIdT&& value) { SetAfterCommitId(std::forward<AfterCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full blob ID of the commit used to establish the before of the
     * comparison.</p>
     */
    inline const Aws::String& GetBeforeBlobId() const { return m_beforeBlobId; }
    inline bool BeforeBlobIdHasBeenSet() const { return m_beforeBlobIdHasBeenSet; }
    template<typename BeforeBlobIdT = Aws::String>
    void SetBeforeBlobId(BeforeBlobIdT&& value) { m_beforeBlobIdHasBeenSet = true; m_beforeBlobId = std::forward<BeforeBlobIdT>(value); }
    template<typename BeforeBlobIdT = Aws::String>
    CommentsForComparedCommit& WithBeforeBlobId(BeforeBlobIdT&& value) { SetBeforeBlobId(std::forward<BeforeBlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full blob ID of the commit used to establish the after of the
     * comparison.</p>
     */
    inline const Aws::String& GetAfterBlobId() const { return m_afterBlobId; }
    inline bool AfterBlobIdHasBeenSet() const { return m_afterBlobIdHasBeenSet; }
    template<typename AfterBlobIdT = Aws::String>
    void SetAfterBlobId(AfterBlobIdT&& value) { m_afterBlobIdHasBeenSet = true; m_afterBlobId = std::forward<AfterBlobIdT>(value); }
    template<typename AfterBlobIdT = Aws::String>
    CommentsForComparedCommit& WithAfterBlobId(AfterBlobIdT&& value) { SetAfterBlobId(std::forward<AfterBlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location information about the comment on the comparison, including the file
     * name, line number, and whether the version of the file where the comment was
     * made is BEFORE or AFTER.</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    CommentsForComparedCommit& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of comment objects. Each comment object contains information about a
     * comment on the comparison between commits.</p>
     */
    inline const Aws::Vector<Comment>& GetComments() const { return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    template<typename CommentsT = Aws::Vector<Comment>>
    void SetComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments = std::forward<CommentsT>(value); }
    template<typename CommentsT = Aws::Vector<Comment>>
    CommentsForComparedCommit& WithComments(CommentsT&& value) { SetComments(std::forward<CommentsT>(value)); return *this;}
    template<typename CommentsT = Comment>
    CommentsForComparedCommit& AddComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments.emplace_back(std::forward<CommentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_beforeCommitId;
    bool m_beforeCommitIdHasBeenSet = false;

    Aws::String m_afterCommitId;
    bool m_afterCommitIdHasBeenSet = false;

    Aws::String m_beforeBlobId;
    bool m_beforeBlobIdHasBeenSet = false;

    Aws::String m_afterBlobId;
    bool m_afterBlobIdHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::Vector<Comment> m_comments;
    bool m_commentsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
