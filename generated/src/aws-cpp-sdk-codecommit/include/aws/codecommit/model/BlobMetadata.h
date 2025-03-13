/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Returns information about a specific Git blob object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BlobMetadata">AWS
   * API Reference</a></p>
   */
  class BlobMetadata
  {
  public:
    AWS_CODECOMMIT_API BlobMetadata() = default;
    AWS_CODECOMMIT_API BlobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BlobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full ID of the blob.</p>
     */
    inline const Aws::String& GetBlobId() const { return m_blobId; }
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }
    template<typename BlobIdT = Aws::String>
    void SetBlobId(BlobIdT&& value) { m_blobIdHasBeenSet = true; m_blobId = std::forward<BlobIdT>(value); }
    template<typename BlobIdT = Aws::String>
    BlobMetadata& WithBlobId(BlobIdT&& value) { SetBlobId(std::forward<BlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    BlobMetadata& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline const Aws::String& GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    template<typename ModeT = Aws::String>
    void SetMode(ModeT&& value) { m_modeHasBeenSet = true; m_mode = std::forward<ModeT>(value); }
    template<typename ModeT = Aws::String>
    BlobMetadata& WithMode(ModeT&& value) { SetMode(std::forward<ModeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
