/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A batch job identifier in which the batch job to run is identified by the
   * file name and the relative path to the file name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/FileBatchJobIdentifier">AWS
   * API Reference</a></p>
   */
  class FileBatchJobIdentifier
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API FileBatchJobIdentifier();
    AWS_MAINFRAMEMODERNIZATION_API FileBatchJobIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API FileBatchJobIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline FileBatchJobIdentifier& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline FileBatchJobIdentifier& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The file name for the batch job identifier.</p>
     */
    inline FileBatchJobIdentifier& WithFileName(const char* value) { SetFileName(value); return *this;}


    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline const Aws::String& GetFolderPath() const{ return m_folderPath; }

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline bool FolderPathHasBeenSet() const { return m_folderPathHasBeenSet; }

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline void SetFolderPath(const Aws::String& value) { m_folderPathHasBeenSet = true; m_folderPath = value; }

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline void SetFolderPath(Aws::String&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::move(value); }

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline void SetFolderPath(const char* value) { m_folderPathHasBeenSet = true; m_folderPath.assign(value); }

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline FileBatchJobIdentifier& WithFolderPath(const Aws::String& value) { SetFolderPath(value); return *this;}

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline FileBatchJobIdentifier& WithFolderPath(Aws::String&& value) { SetFolderPath(std::move(value)); return *this;}

    /**
     * <p>The relative path to the file name for the batch job identifier.</p>
     */
    inline FileBatchJobIdentifier& WithFolderPath(const char* value) { SetFolderPath(value); return *this;}

  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_folderPath;
    bool m_folderPathHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
