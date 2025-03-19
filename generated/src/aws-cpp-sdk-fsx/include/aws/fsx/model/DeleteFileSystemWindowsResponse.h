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
   * <p>The response object for the Microsoft Windows file system used in the
   * <code>DeleteFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystemWindowsResponse">AWS
   * API Reference</a></p>
   */
  class DeleteFileSystemWindowsResponse
  {
  public:
    AWS_FSX_API DeleteFileSystemWindowsResponse() = default;
    AWS_FSX_API DeleteFileSystemWindowsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteFileSystemWindowsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the final backup for this file system.</p>
     */
    inline const Aws::String& GetFinalBackupId() const { return m_finalBackupId; }
    inline bool FinalBackupIdHasBeenSet() const { return m_finalBackupIdHasBeenSet; }
    template<typename FinalBackupIdT = Aws::String>
    void SetFinalBackupId(FinalBackupIdT&& value) { m_finalBackupIdHasBeenSet = true; m_finalBackupId = std::forward<FinalBackupIdT>(value); }
    template<typename FinalBackupIdT = Aws::String>
    DeleteFileSystemWindowsResponse& WithFinalBackupId(FinalBackupIdT&& value) { SetFinalBackupId(std::forward<FinalBackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of tags applied to the final backup.</p>
     */
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const { return m_finalBackupTags; }
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    void SetFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::forward<FinalBackupTagsT>(value); }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    DeleteFileSystemWindowsResponse& WithFinalBackupTags(FinalBackupTagsT&& value) { SetFinalBackupTags(std::forward<FinalBackupTagsT>(value)); return *this;}
    template<typename FinalBackupTagsT = Tag>
    DeleteFileSystemWindowsResponse& AddFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.emplace_back(std::forward<FinalBackupTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_finalBackupId;
    bool m_finalBackupIdHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
