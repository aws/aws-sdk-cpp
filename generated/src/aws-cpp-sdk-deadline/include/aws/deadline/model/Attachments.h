/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/JobAttachmentsFileSystem.h>
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
    AWS_DEADLINE_API Attachments() = default;
    AWS_DEADLINE_API Attachments(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Attachments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of manifests which describe job attachment configurations.</p>
     */
    inline const Aws::Vector<ManifestProperties>& GetManifests() const { return m_manifests; }
    inline bool ManifestsHasBeenSet() const { return m_manifestsHasBeenSet; }
    template<typename ManifestsT = Aws::Vector<ManifestProperties>>
    void SetManifests(ManifestsT&& value) { m_manifestsHasBeenSet = true; m_manifests = std::forward<ManifestsT>(value); }
    template<typename ManifestsT = Aws::Vector<ManifestProperties>>
    Attachments& WithManifests(ManifestsT&& value) { SetManifests(std::forward<ManifestsT>(value)); return *this;}
    template<typename ManifestsT = ManifestProperties>
    Attachments& AddManifests(ManifestsT&& value) { m_manifestsHasBeenSet = true; m_manifests.emplace_back(std::forward<ManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file system.</p>
     */
    inline JobAttachmentsFileSystem GetFileSystem() const { return m_fileSystem; }
    inline bool FileSystemHasBeenSet() const { return m_fileSystemHasBeenSet; }
    inline void SetFileSystem(JobAttachmentsFileSystem value) { m_fileSystemHasBeenSet = true; m_fileSystem = value; }
    inline Attachments& WithFileSystem(JobAttachmentsFileSystem value) { SetFileSystem(value); return *this;}
    ///@}
  private:

    Aws::Vector<ManifestProperties> m_manifests;
    bool m_manifestsHasBeenSet = false;

    JobAttachmentsFileSystem m_fileSystem{JobAttachmentsFileSystem::NOT_SET};
    bool m_fileSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
