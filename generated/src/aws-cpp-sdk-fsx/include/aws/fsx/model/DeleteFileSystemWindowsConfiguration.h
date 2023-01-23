/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
   * <p>The configuration object for the Microsoft Windows file system used in the
   * <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemWindowsConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemWindowsConfiguration
  {
  public:
    AWS_FSX_API DeleteFileSystemWindowsConfiguration();
    AWS_FSX_API DeleteFileSystemWindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemWindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>By default, Amazon FSx for Windows takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip this backup, use this flag to do so.</p>
     */
    inline bool GetSkipFinalBackup() const{ return m_skipFinalBackup; }

    /**
     * <p>By default, Amazon FSx for Windows takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip this backup, use this flag to do so.</p>
     */
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }

    /**
     * <p>By default, Amazon FSx for Windows takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip this backup, use this flag to do so.</p>
     */
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }

    /**
     * <p>By default, Amazon FSx for Windows takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip this backup, use this flag to do so.</p>
     */
    inline DeleteFileSystemWindowsConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}


    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline DeleteFileSystemWindowsConfiguration& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline DeleteFileSystemWindowsConfiguration& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline DeleteFileSystemWindowsConfiguration& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    /**
     * <p>A set of tags for your final backup.</p>
     */
    inline DeleteFileSystemWindowsConfiguration& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }

  private:

    bool m_skipFinalBackup;
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
