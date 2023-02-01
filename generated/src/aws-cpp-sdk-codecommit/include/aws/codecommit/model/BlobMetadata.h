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
    AWS_CODECOMMIT_API BlobMetadata();
    AWS_CODECOMMIT_API BlobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BlobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The full ID of the blob.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }

    /**
     * <p>The full ID of the blob.</p>
     */
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }

    /**
     * <p>The full ID of the blob.</p>
     */
    inline void SetBlobId(const Aws::String& value) { m_blobIdHasBeenSet = true; m_blobId = value; }

    /**
     * <p>The full ID of the blob.</p>
     */
    inline void SetBlobId(Aws::String&& value) { m_blobIdHasBeenSet = true; m_blobId = std::move(value); }

    /**
     * <p>The full ID of the blob.</p>
     */
    inline void SetBlobId(const char* value) { m_blobIdHasBeenSet = true; m_blobId.assign(value); }

    /**
     * <p>The full ID of the blob.</p>
     */
    inline BlobMetadata& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}

    /**
     * <p>The full ID of the blob.</p>
     */
    inline BlobMetadata& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}

    /**
     * <p>The full ID of the blob.</p>
     */
    inline BlobMetadata& WithBlobId(const char* value) { SetBlobId(value); return *this;}


    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline BlobMetadata& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline BlobMetadata& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the blob and associated file name, if any.</p>
     */
    inline BlobMetadata& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline const Aws::String& GetMode() const{ return m_mode; }

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline void SetMode(const Aws::String& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline void SetMode(Aws::String&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline void SetMode(const char* value) { m_modeHasBeenSet = true; m_mode.assign(value); }

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline BlobMetadata& WithMode(const Aws::String& value) { SetMode(value); return *this;}

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline BlobMetadata& WithMode(Aws::String&& value) { SetMode(std::move(value)); return *this;}

    /**
     * <p>The file mode permissions of the blob. File mode permission codes
     * include:</p> <ul> <li> <p> <code>100644</code> indicates read/write</p> </li>
     * <li> <p> <code>100755</code> indicates read/write/execute</p> </li> <li> <p>
     * <code>160000</code> indicates a submodule</p> </li> <li> <p> <code>120000</code>
     * indicates a symlink</p> </li> </ul>
     */
    inline BlobMetadata& WithMode(const char* value) { SetMode(value); return *this;}

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
