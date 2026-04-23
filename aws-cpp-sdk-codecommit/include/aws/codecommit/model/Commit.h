/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API Commit
  {
  public:
    Commit();
    Commit(Aws::Utils::Json::JsonView jsonValue);
    Commit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline Commit& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline Commit& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}

    /**
     * <p>The full SHA of the specified commit. </p>
     */
    inline Commit& WithCommitId(const char* value) { SetCommitId(value); return *this;}


    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline bool TreeIdHasBeenSet() const { return m_treeIdHasBeenSet; }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeIdHasBeenSet = true; m_treeId = value; }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeIdHasBeenSet = true; m_treeId = std::move(value); }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline void SetTreeId(const char* value) { m_treeIdHasBeenSet = true; m_treeId.assign(value); }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline Commit& WithTreeId(const Aws::String& value) { SetTreeId(value); return *this;}

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline Commit& WithTreeId(Aws::String&& value) { SetTreeId(std::move(value)); return *this;}

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline Commit& WithTreeId(const char* value) { SetTreeId(value); return *this;}


    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParents() const{ return m_parents; }

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline void SetParents(const Aws::Vector<Aws::String>& value) { m_parentsHasBeenSet = true; m_parents = value; }

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline void SetParents(Aws::Vector<Aws::String>&& value) { m_parentsHasBeenSet = true; m_parents = std::move(value); }

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline Commit& WithParents(const Aws::Vector<Aws::String>& value) { SetParents(value); return *this;}

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline Commit& WithParents(Aws::Vector<Aws::String>&& value) { SetParents(std::move(value)); return *this;}

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline Commit& AddParents(const Aws::String& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline Commit& AddParents(Aws::String&& value) { m_parentsHasBeenSet = true; m_parents.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of parent commits for the specified commit. Each parent commit ID is
     * the full commit ID.</p>
     */
    inline Commit& AddParents(const char* value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }


    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline Commit& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline Commit& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The commit message associated with the specified commit.</p>
     */
    inline Commit& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline const UserInfo& GetAuthor() const{ return m_author; }

    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }

    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline void SetAuthor(const UserInfo& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline void SetAuthor(UserInfo&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }

    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline Commit& WithAuthor(const UserInfo& value) { SetAuthor(value); return *this;}

    /**
     * <p>Information about the author of the specified commit. Information includes
     * the date in timestamp format with GMT offset, the name of the author, and the
     * email address for the author, as configured in Git.</p>
     */
    inline Commit& WithAuthor(UserInfo&& value) { SetAuthor(std::move(value)); return *this;}


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

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. Information includes the date in timestamp format with GMT
     * offset, the name of the committer, and the email address for the committer, as
     * configured in Git.</p> <p>For more information about the difference between an
     * author and a committer in Git, see <a
     * href="http://git-scm.com/book/ch2-3.html">Viewing the Commit History</a> in Pro
     * Git by Scott Chacon and Ben Straub.</p>
     */
    inline bool CommitterHasBeenSet() const { return m_committerHasBeenSet; }

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. Information includes the date in timestamp format with GMT
     * offset, the name of the committer, and the email address for the committer, as
     * configured in Git.</p> <p>For more information about the difference between an
     * author and a committer in Git, see <a
     * href="http://git-scm.com/book/ch2-3.html">Viewing the Commit History</a> in Pro
     * Git by Scott Chacon and Ben Straub.</p>
     */
    inline void SetCommitter(const UserInfo& value) { m_committerHasBeenSet = true; m_committer = value; }

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. Information includes the date in timestamp format with GMT
     * offset, the name of the committer, and the email address for the committer, as
     * configured in Git.</p> <p>For more information about the difference between an
     * author and a committer in Git, see <a
     * href="http://git-scm.com/book/ch2-3.html">Viewing the Commit History</a> in Pro
     * Git by Scott Chacon and Ben Straub.</p>
     */
    inline void SetCommitter(UserInfo&& value) { m_committerHasBeenSet = true; m_committer = std::move(value); }

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. Information includes the date in timestamp format with GMT
     * offset, the name of the committer, and the email address for the committer, as
     * configured in Git.</p> <p>For more information about the difference between an
     * author and a committer in Git, see <a
     * href="http://git-scm.com/book/ch2-3.html">Viewing the Commit History</a> in Pro
     * Git by Scott Chacon and Ben Straub.</p>
     */
    inline Commit& WithCommitter(const UserInfo& value) { SetCommitter(value); return *this;}

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. Information includes the date in timestamp format with GMT
     * offset, the name of the committer, and the email address for the committer, as
     * configured in Git.</p> <p>For more information about the difference between an
     * author and a committer in Git, see <a
     * href="http://git-scm.com/book/ch2-3.html">Viewing the Commit History</a> in Pro
     * Git by Scott Chacon and Ben Straub.</p>
     */
    inline Commit& WithCommitter(UserInfo&& value) { SetCommitter(std::move(value)); return *this;}


    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline const Aws::String& GetAdditionalData() const{ return m_additionalData; }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline bool AdditionalDataHasBeenSet() const { return m_additionalDataHasBeenSet; }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline void SetAdditionalData(const Aws::String& value) { m_additionalDataHasBeenSet = true; m_additionalData = value; }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline void SetAdditionalData(Aws::String&& value) { m_additionalDataHasBeenSet = true; m_additionalData = std::move(value); }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline void SetAdditionalData(const char* value) { m_additionalDataHasBeenSet = true; m_additionalData.assign(value); }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline Commit& WithAdditionalData(const Aws::String& value) { SetAdditionalData(value); return *this;}

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline Commit& WithAdditionalData(Aws::String&& value) { SetAdditionalData(std::move(value)); return *this;}

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline Commit& WithAdditionalData(const char* value) { SetAdditionalData(value); return *this;}

  private:

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet;

    Aws::String m_treeId;
    bool m_treeIdHasBeenSet;

    Aws::Vector<Aws::String> m_parents;
    bool m_parentsHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    UserInfo m_author;
    bool m_authorHasBeenSet;

    UserInfo m_committer;
    bool m_committerHasBeenSet;

    Aws::String m_additionalData;
    bool m_additionalDataHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
