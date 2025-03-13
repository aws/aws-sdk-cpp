/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/Commit.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about a version of a file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/FileVersion">AWS
   * API Reference</a></p>
   */
  class FileVersion
  {
  public:
    AWS_CODECOMMIT_API FileVersion() = default;
    AWS_CODECOMMIT_API FileVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API FileVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Commit& GetCommit() const { return m_commit; }
    inline bool CommitHasBeenSet() const { return m_commitHasBeenSet; }
    template<typename CommitT = Commit>
    void SetCommit(CommitT&& value) { m_commitHasBeenSet = true; m_commit = std::forward<CommitT>(value); }
    template<typename CommitT = Commit>
    FileVersion& WithCommit(CommitT&& value) { SetCommit(std::forward<CommitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline const Aws::String& GetBlobId() const { return m_blobId; }
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }
    template<typename BlobIdT = Aws::String>
    void SetBlobId(BlobIdT&& value) { m_blobIdHasBeenSet = true; m_blobId = std::forward<BlobIdT>(value); }
    template<typename BlobIdT = Aws::String>
    FileVersion& WithBlobId(BlobIdT&& value) { SetBlobId(std::forward<BlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    FileVersion& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRevisionChildren() const { return m_revisionChildren; }
    inline bool RevisionChildrenHasBeenSet() const { return m_revisionChildrenHasBeenSet; }
    template<typename RevisionChildrenT = Aws::Vector<Aws::String>>
    void SetRevisionChildren(RevisionChildrenT&& value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren = std::forward<RevisionChildrenT>(value); }
    template<typename RevisionChildrenT = Aws::Vector<Aws::String>>
    FileVersion& WithRevisionChildren(RevisionChildrenT&& value) { SetRevisionChildren(std::forward<RevisionChildrenT>(value)); return *this;}
    template<typename RevisionChildrenT = Aws::String>
    FileVersion& AddRevisionChildren(RevisionChildrenT&& value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren.emplace_back(std::forward<RevisionChildrenT>(value)); return *this; }
    ///@}
  private:

    Commit m_commit;
    bool m_commitHasBeenSet = false;

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_revisionChildren;
    bool m_revisionChildrenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
