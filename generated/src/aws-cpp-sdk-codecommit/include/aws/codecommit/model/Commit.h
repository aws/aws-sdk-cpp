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
    AWS_CODECOMMIT_API Commit();
    AWS_CODECOMMIT_API Commit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Commit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full SHA ID of the specified commit. </p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }
    inline Commit& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline Commit& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline Commit& WithCommitId(const char* value) { SetCommitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }
    inline bool TreeIdHasBeenSet() const { return m_treeIdHasBeenSet; }
    inline void SetTreeId(const Aws::String& value) { m_treeIdHasBeenSet = true; m_treeId = value; }
    inline void SetTreeId(Aws::String&& value) { m_treeIdHasBeenSet = true; m_treeId = std::move(value); }
    inline void SetTreeId(const char* value) { m_treeIdHasBeenSet = true; m_treeId.assign(value); }
    inline Commit& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}
    inline Commit& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}
    inline Commit& WithTreeId(const char* value) { SetTreeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParents() const{ return m_parents; }
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }
    inline void SetParents(const Aws::Vector<Aws::String>& value) { m_parentsHasBeenSet = true; m_parents = value; }
    inline void SetParents(Aws::Vector<Aws::String>&& value) { m_parentsHasBeenSet = true; m_parents = std::move(value); }
    inline Commit& WithParents(const Aws::Vector<Aws::String>& value) { SetParents(value); return *this;}
    inline Commit& WithParents(Aws::Vector<Aws::String>&& value) { SetParents(std::move(value)); return *this;}
    inline Commit& AddParents(const Aws::String& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }
    inline Commit& AddParents(Aws::String&& value) { m_parentsHasBeenSet = true; m_parents.push_back(std::move(value)); return *this; }
    inline Commit& AddParents(const char* value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Commit& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Commit& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Commit& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline const UserInfo& GetAuthor() const{ return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    inline void SetAuthor(const UserInfo& value) { m_authorHasBeenSet = true; m_author = value; }
    inline void SetAuthor(UserInfo&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }
    inline Commit& WithAuthor(const UserInfo& value) { SetAuthor(value); return *this;}
    inline Commit& WithAuthor(UserInfo&& value) { SetAuthor(std::move(value)); return *this;}
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
    inline const UserInfo& GetCommitter() const{ return m_committer; }
    inline bool CommitterHasBeenSet() const { return m_committerHasBeenSet; }
    inline void SetCommitter(const UserInfo& value) { m_committerHasBeenSet = true; m_committer = value; }
    inline void SetCommitter(UserInfo&& value) { m_committerHasBeenSet = true; m_committer = std::move(value); }
    inline Commit& WithCommitter(const UserInfo& value) { SetCommitter(value); return *this;}
    inline Commit& WithCommitter(UserInfo&& value) { SetCommitter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any other data associated with the specified commit.</p>
     */
    inline const Aws::String& GetAdditionalData() const{ return m_additionalData; }
    inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }
    inline void SetAdditionalData(const Aws::String& value) { m_additionalDataHasBeenSet = true; m_additionalData = value; }
    inline void SetAdditionalData(Aws::String&& value) { m_additionalDataHasBeenSet = true; m_additionalData = std::move(value); }
    inline void SetAdditionalData(const char* value) { m_additionalDataHasBeenSet = true; m_additionalData.assign(value); }
    inline Commit& WithAdditionalData(const Aws::String& value) { SetAdditionalData(value); return *this;}
    inline Commit& WithAdditionalData(Aws::String&& value) { SetAdditionalData(std::move(value)); return *this;}
    inline Commit& WithAdditionalData(const char* value) { SetAdditionalData(value); return *this;}
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
