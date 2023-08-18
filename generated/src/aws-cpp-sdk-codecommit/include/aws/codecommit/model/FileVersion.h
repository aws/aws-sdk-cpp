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
    AWS_CODECOMMIT_API FileVersion();
    AWS_CODECOMMIT_API FileVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API FileVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Commit& GetCommit() const{ return m_commit; }

    
    inline bool CommitHasBeenSet() const { return m_commitHasBeenSet; }

    
    inline void SetCommit(const Commit& value) { m_commitHasBeenSet = true; m_commit = value; }

    
    inline void SetCommit(Commit&& value) { m_commitHasBeenSet = true; m_commit = std::move(value); }

    
    inline FileVersion& WithCommit(const Commit& value) { SetCommit(value); return *this;}

    
    inline FileVersion& WithCommit(Commit&& value) { SetCommit(std::move(value)); return *this;}


    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobIdHasBeenSet = true; m_blobId = value; }

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobIdHasBeenSet = true; m_blobId = std::move(value); }

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline void SetBlobId(const char* value) { m_blobIdHasBeenSet = true; m_blobId.assign(value); }

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline FileVersion& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline FileVersion& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The blob ID of the object that represents the content of the file in this
     * version.</p>
     */
    inline FileVersion& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline FileVersion& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline FileVersion& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The name and path of the file at which this blob is indexed which contains
     * the data for this version of the file. This value will vary between file
     * versions if a file is renamed or if its path changes.</p>
     */
    inline FileVersion& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRevisionChildren() const{ return m_revisionChildren; }

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline bool RevisionChildrenHasBeenSet() const { return m_revisionChildrenHasBeenSet; }

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline void SetRevisionChildren(const Aws::Vector<Aws::String>& value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren = value; }

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline void SetRevisionChildren(Aws::Vector<Aws::String>&& value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren = std::move(value); }

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline FileVersion& WithRevisionChildren(const Aws::Vector<Aws::String>& value) { SetRevisionChildren(value); return *this;}

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline FileVersion& WithRevisionChildren(Aws::Vector<Aws::String>&& value) { SetRevisionChildren(std::move(value)); return *this;}

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline FileVersion& AddRevisionChildren(const Aws::String& value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren.push_back(value); return *this; }

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline FileVersion& AddRevisionChildren(Aws::String&& value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of commit IDs that contain more recent versions of this file. If
     * there are no additional versions of the file, this array will be empty.</p>
     */
    inline FileVersion& AddRevisionChildren(const char* value) { m_revisionChildrenHasBeenSet = true; m_revisionChildren.push_back(value); return *this; }

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
