/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobAttachmentsFileSystem.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/ManifestProperties.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The attachments for jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/Attachments">AWS
   * API Reference</a></p>
   */
  class Attachments
  {
  public:
    AWS_DEADLINE_API Attachments();
    AWS_DEADLINE_API Attachments(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Attachments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file system.</p>
     */
    inline const JobAttachmentsFileSystem& GetFileSystem() const{ return m_fileSystem; }

    /**
     * <p>The file system.</p>
     */
    inline bool FileSystemHasBeenSet() const { return m_fileSystemHasBeenSet; }

    /**
     * <p>The file system.</p>
     */
    inline void SetFileSystem(const JobAttachmentsFileSystem& value) { m_fileSystemHasBeenSet = true; m_fileSystem = value; }

    /**
     * <p>The file system.</p>
     */
    inline void SetFileSystem(JobAttachmentsFileSystem&& value) { m_fileSystemHasBeenSet = true; m_fileSystem = std::move(value); }

    /**
     * <p>The file system.</p>
     */
    inline Attachments& WithFileSystem(const JobAttachmentsFileSystem& value) { SetFileSystem(value); return *this;}

    /**
     * <p>The file system.</p>
     */
    inline Attachments& WithFileSystem(JobAttachmentsFileSystem&& value) { SetFileSystem(std::move(value)); return *this;}


    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline const Aws::Vector<ManifestProperties>& GetManifests() const{ return m_manifests; }

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline bool ManifestsHasBeenSet() const { return m_manifestsHasBeenSet; }

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline void SetManifests(const Aws::Vector<ManifestProperties>& value) { m_manifestsHasBeenSet = true; m_manifests = value; }

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline void SetManifests(Aws::Vector<ManifestProperties>&& value) { m_manifestsHasBeenSet = true; m_manifests = std::move(value); }

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline Attachments& WithManifests(const Aws::Vector<ManifestProperties>& value) { SetManifests(value); return *this;}

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline Attachments& WithManifests(Aws::Vector<ManifestProperties>&& value) { SetManifests(std::move(value)); return *this;}

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline Attachments& AddManifests(const ManifestProperties& value) { m_manifestsHasBeenSet = true; m_manifests.push_back(value); return *this; }

    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline Attachments& AddManifests(ManifestProperties&& value) { m_manifestsHasBeenSet = true; m_manifests.push_back(std::move(value)); return *this; }

  private:

    JobAttachmentsFileSystem m_fileSystem;
    bool m_fileSystemHasBeenSet = false;

    Aws::Vector<ManifestProperties> m_manifests;
    bool m_manifestsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
