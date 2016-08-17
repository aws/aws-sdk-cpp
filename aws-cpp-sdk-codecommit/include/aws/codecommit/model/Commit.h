/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a specific commit.</p>
   */
  class AWS_CODECOMMIT_API Commit
  {
  public:
    Commit();
    Commit(const Aws::Utils::Json::JsonValue& jsonValue);
    Commit& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline const Aws::String& GetTreeId() const{ return m_treeId; }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline void SetTreeId(const Aws::String& value) { m_treeIdHasBeenSet = true; m_treeId = value; }

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline void SetTreeId(Aws::String&& value) { m_treeIdHasBeenSet = true; m_treeId = value; }

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
    inline Commit& WithTreeId(Aws::String&& value) { SetTreeId(value); return *this;}

    /**
     * <p>Tree information for the specified commit.</p>
     */
    inline Commit& WithTreeId(const char* value) { SetTreeId(value); return *this;}

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParents() const{ return m_parents; }

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline void SetParents(const Aws::Vector<Aws::String>& value) { m_parentsHasBeenSet = true; m_parents = value; }

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline void SetParents(Aws::Vector<Aws::String>&& value) { m_parentsHasBeenSet = true; m_parents = value; }

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline Commit& WithParents(const Aws::Vector<Aws::String>& value) { SetParents(value); return *this;}

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline Commit& WithParents(Aws::Vector<Aws::String>&& value) { SetParents(value); return *this;}

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline Commit& AddParents(const Aws::String& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline Commit& AddParents(Aws::String&& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>The parent list for the specified commit.</p>
     */
    inline Commit& AddParents(const char* value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline Commit& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline Commit& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>The message associated with the specified commit.</p>
     */
    inline Commit& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>Information about the author of the specified commit.</p>
     */
    inline const UserInfo& GetAuthor() const{ return m_author; }

    /**
     * <p>Information about the author of the specified commit.</p>
     */
    inline void SetAuthor(const UserInfo& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * <p>Information about the author of the specified commit.</p>
     */
    inline void SetAuthor(UserInfo&& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * <p>Information about the author of the specified commit.</p>
     */
    inline Commit& WithAuthor(const UserInfo& value) { SetAuthor(value); return *this;}

    /**
     * <p>Information about the author of the specified commit.</p>
     */
    inline Commit& WithAuthor(UserInfo&& value) { SetAuthor(value); return *this;}

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. For more information about the difference between an author
     * and a committer in Git, see <a href="http://git-scm.com/book/ch2-3.html">Viewing
     * the Commit History</a> in Pro Git by Scott Chacon and Ben Straub.</p>
     */
    inline const UserInfo& GetCommitter() const{ return m_committer; }

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. For more information about the difference between an author
     * and a committer in Git, see <a href="http://git-scm.com/book/ch2-3.html">Viewing
     * the Commit History</a> in Pro Git by Scott Chacon and Ben Straub.</p>
     */
    inline void SetCommitter(const UserInfo& value) { m_committerHasBeenSet = true; m_committer = value; }

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. For more information about the difference between an author
     * and a committer in Git, see <a href="http://git-scm.com/book/ch2-3.html">Viewing
     * the Commit History</a> in Pro Git by Scott Chacon and Ben Straub.</p>
     */
    inline void SetCommitter(UserInfo&& value) { m_committerHasBeenSet = true; m_committer = value; }

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. For more information about the difference between an author
     * and a committer in Git, see <a href="http://git-scm.com/book/ch2-3.html">Viewing
     * the Commit History</a> in Pro Git by Scott Chacon and Ben Straub.</p>
     */
    inline Commit& WithCommitter(const UserInfo& value) { SetCommitter(value); return *this;}

    /**
     * <p>Information about the person who committed the specified commit, also known
     * as the committer. For more information about the difference between an author
     * and a committer in Git, see <a href="http://git-scm.com/book/ch2-3.html">Viewing
     * the Commit History</a> in Pro Git by Scott Chacon and Ben Straub.</p>
     */
    inline Commit& WithCommitter(UserInfo&& value) { SetCommitter(value); return *this;}

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline const Aws::String& GetAdditionalData() const{ return m_additionalData; }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline void SetAdditionalData(const Aws::String& value) { m_additionalDataHasBeenSet = true; m_additionalData = value; }

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline void SetAdditionalData(Aws::String&& value) { m_additionalDataHasBeenSet = true; m_additionalData = value; }

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
    inline Commit& WithAdditionalData(Aws::String&& value) { SetAdditionalData(value); return *this;}

    /**
     * <p>Any additional data associated with the specified commit.</p>
     */
    inline Commit& WithAdditionalData(const char* value) { SetAdditionalData(value); return *this;}

  private:
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
