/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/UserInfo.h>
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
   * <p>Returns information about a specific commit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Commit">AWS
   * API Reference</a></p>
   */
  class Commit
  {
  public:
    AWS_CODECOMMIT_API Commit() = default;
    AWS_CODECOMMIT_API Commit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Commit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full SHA ID of the specified commit. </p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    Commit& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline const Aws::String& GetTreeId() const { return m_treeId; }
    inline bool TreeIdHasBeenSet() const { return m_treeIdHasBeenSet; }
    template<typename TreeIdT = Aws::String>
    void SetTreeId(TreeIdT&& value) { m_treeIdHasBeenSet = true; m_treeId = std::forward<TreeIdT>(value); }
    template<typename TreeIdT = Aws::String>
    Commit& WithTreeId(TreeIdT&& value) { SetTreeId(std::forward<TreeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParents() const { return m_parents; }
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }
    template<typename ParentsT = Aws::Vector<Aws::String>>
    void SetParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents = std::forward<ParentsT>(value); }
    template<typename ParentsT = Aws::Vector<Aws::String>>
    Commit& WithParents(ParentsT&& value) { SetParents(std::forward<ParentsT>(value)); return *this;}
    template<typename ParentsT = Aws::String>
    Commit& AddParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents.emplace_back(std::forward<ParentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Commit& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline const UserInfo& GetAuthor() const { return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    template<typename AuthorT = UserInfo>
    void SetAuthor(AuthorT&& value) { m_authorHasBeenSet = true; m_author = std::forward<AuthorT>(value); }
    template<typename AuthorT = UserInfo>
    Commit& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. Information includes the date in timestamp format with GMT
     * offset, the name of the committer, and the email address for the committer, as
     * configured in Git.</p> <p>For more information about the difference between an
     * author and a committer in Git, see <a
     * href="http://git-scm.com/book/ch2-3.html">Viewing the Commit History</a> in Pro
     * Git by Scott Chacon and Ben Straub.</p>
     */
    inline const UserInfo& GetCommitter() const { return m_committer; }
    inline bool CommitterHasBeenSet() const { return m_committerHasBeenSet; }
    template<typename CommitterT = UserInfo>
    void SetCommitter(CommitterT&& value) { m_committerHasBeenSet = true; m_committer = std::forward<CommitterT>(value); }
    template<typename CommitterT = UserInfo>
    Commit& WithCommitter(CommitterT&& value) { SetCommitter(std::forward<CommitterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any other data associated with the specified commit.</p>
     */
    inline const Aws::String& GetAdditionalData() const { return m_additionalData; }
    inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }
    template<typename AdditionalDataT = Aws::String>
    void SetAdditionalData(AdditionalDataT&& value) { m_additionalDataHasBeenSet = true; m_additionalData = std::forward<AdditionalDataT>(value); }
    template<typename AdditionalDataT = Aws::String>
    Commit& WithAdditionalData(AdditionalDataT&& value) { SetAdditionalData(std::forward<AdditionalDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_parents;
    bool m_parentsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    UserInfo m_author;
    bool m_authorHasBeenSet = false;

    UserInfo m_committer;
    bool m_committerHasBeenSet = false;

    Aws::String m_additionalData;
    bool m_additionalDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
