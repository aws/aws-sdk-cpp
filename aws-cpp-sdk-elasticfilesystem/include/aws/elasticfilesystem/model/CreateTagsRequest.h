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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Tag.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_EFS_API CreateTagsRequest : public EFSRequest
  {
  public:
    CreateTagsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline CreateTagsRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline CreateTagsRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system whose tags you want to modify (String). This operation
     * modifies the tags only, not the file system.</p>
     */
    inline CreateTagsRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline CreateTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline CreateTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline CreateTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Array of <code>Tag</code> objects to add. Each <code>Tag</code> object is a
     * key-value pair. </p>
     */
    inline CreateTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
