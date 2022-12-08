/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The response object for the Amazon FSx for Lustre file system being deleted
   * in the <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemLustreResponse">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemLustreResponse
  {
  public:
    AWS_FSX_API DeleteFileSystemLustreResponse();
    AWS_FSX_API DeleteFileSystemLustreResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemLustreResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline const Aws::String& GetFinalBackupId() const{ return m_finalBackupId; }

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline bool FinalBackupIdHasBeenSet() const { return m_finalBackupIdHasBeenSet; }

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline void SetFinalBackupId(const Aws::String& value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId = value; }

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline void SetFinalBackupId(Aws::String&& value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId = std::move(value); }

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline void SetFinalBackupId(const char* value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId.assign(value); }

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline DeleteFileSystemLustreResponse& WithFinalBackupId(const Aws::String& value) { SetFinalBackupId(value); return *this;}

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline DeleteFileSystemLustreResponse& WithFinalBackupId(Aws::String&& value) { SetFinalBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline DeleteFileSystemLustreResponse& WithFinalBackupId(const char* value) { SetFinalBackupId(value); return *this;}


    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline DeleteFileSystemLustreResponse& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline DeleteFileSystemLustreResponse& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline DeleteFileSystemLustreResponse& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline DeleteFileSystemLustreResponse& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_finalBackupId;
    bool m_finalBackupIdHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
