/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/FileMetadata.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the input file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/InputFile">AWS
   * API Reference</a></p>
   */
  class InputFile
  {
  public:
    AWS_APPTEST_API InputFile();
    AWS_APPTEST_API InputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API InputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source location of the input file.</p>
     */
    inline const Aws::String& GetSourceLocation() const{ return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    inline void SetSourceLocation(const Aws::String& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = value; }
    inline void SetSourceLocation(Aws::String&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::move(value); }
    inline void SetSourceLocation(const char* value) { m_sourceLocationHasBeenSet = true; m_sourceLocation.assign(value); }
    inline InputFile& WithSourceLocation(const Aws::String& value) { SetSourceLocation(value); return *this;}
    inline InputFile& WithSourceLocation(Aws::String&& value) { SetSourceLocation(std::move(value)); return *this;}
    inline InputFile& WithSourceLocation(const char* value) { SetSourceLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target location of the input file.</p>
     */
    inline const Aws::String& GetTargetLocation() const{ return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    inline void SetTargetLocation(const Aws::String& value) { m_targetLocationHasBeenSet = true; m_targetLocation = value; }
    inline void SetTargetLocation(Aws::String&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::move(value); }
    inline void SetTargetLocation(const char* value) { m_targetLocationHasBeenSet = true; m_targetLocation.assign(value); }
    inline InputFile& WithTargetLocation(const Aws::String& value) { SetTargetLocation(value); return *this;}
    inline InputFile& WithTargetLocation(Aws::String&& value) { SetTargetLocation(std::move(value)); return *this;}
    inline InputFile& WithTargetLocation(const char* value) { SetTargetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file metadata of the input file.</p>
     */
    inline const FileMetadata& GetFileMetadata() const{ return m_fileMetadata; }
    inline bool FileMetadataHasBeenSet() const { return m_fileMetadataHasBeenSet; }
    inline void SetFileMetadata(const FileMetadata& value) { m_fileMetadataHasBeenSet = true; m_fileMetadata = value; }
    inline void SetFileMetadata(FileMetadata&& value) { m_fileMetadataHasBeenSet = true; m_fileMetadata = std::move(value); }
    inline InputFile& WithFileMetadata(const FileMetadata& value) { SetFileMetadata(value); return *this;}
    inline InputFile& WithFileMetadata(FileMetadata&& value) { SetFileMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocation;
    bool m_sourceLocationHasBeenSet = false;

    Aws::String m_targetLocation;
    bool m_targetLocationHasBeenSet = false;

    FileMetadata m_fileMetadata;
    bool m_fileMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
