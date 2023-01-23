/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
#include <aws/fsx/model/DeleteFileSystemOpenZFSOption.h>
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
   * <p>The configuration object for the Amazon FSx for OpenZFS file system used in
   * the <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemOpenZFSConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemOpenZFSConfiguration
  {
  public:
    AWS_FSX_API DeleteFileSystemOpenZFSConfiguration();
    AWS_FSX_API DeleteFileSystemOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>By default, Amazon FSx for OpenZFS takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip taking a final backup, set this value to <code>true</code>.</p>
     */
    inline bool GetSkipFinalBackup() const{ return m_skipFinalBackup; }

    /**
     * <p>By default, Amazon FSx for OpenZFS takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip taking a final backup, set this value to <code>true</code>.</p>
     */
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }

    /**
     * <p>By default, Amazon FSx for OpenZFS takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip taking a final backup, set this value to <code>true</code>.</p>
     */
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }

    /**
     * <p>By default, Amazon FSx for OpenZFS takes a final backup on your behalf when
     * the <code>DeleteFileSystem</code> operation is invoked. Doing this helps protect
     * you from data loss, and we highly recommend taking the final backup. If you want
     * to skip taking a final backup, set this value to <code>true</code>.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}


    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    /**
     * <p>A list of tags to apply to the file system's final backup.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }


    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline const Aws::Vector<DeleteFileSystemOpenZFSOption>& GetOptions() const{ return m_options; }

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline void SetOptions(const Aws::Vector<DeleteFileSystemOpenZFSOption>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline void SetOptions(Aws::Vector<DeleteFileSystemOpenZFSOption>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& WithOptions(const Aws::Vector<DeleteFileSystemOpenZFSOption>& value) { SetOptions(value); return *this;}

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& WithOptions(Aws::Vector<DeleteFileSystemOpenZFSOption>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& AddOptions(const DeleteFileSystemOpenZFSOption& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>To delete a file system if there are child volumes present below the root
     * volume, use the string <code>DELETE_CHILD_VOLUMES_AND_SNAPSHOTS</code>. If your
     * file system has child volumes and you don't use this option, the delete request
     * will fail.</p>
     */
    inline DeleteFileSystemOpenZFSConfiguration& AddOptions(DeleteFileSystemOpenZFSOption&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }

  private:

    bool m_skipFinalBackup;
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;

    Aws::Vector<DeleteFileSystemOpenZFSOption> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
