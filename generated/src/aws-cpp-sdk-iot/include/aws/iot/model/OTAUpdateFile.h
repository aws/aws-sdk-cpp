/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/FileLocation.h>
#include <aws/iot/model/CodeSigning.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a file to be associated with an OTA update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/OTAUpdateFile">AWS
   * API Reference</a></p>
   */
  class OTAUpdateFile
  {
  public:
    AWS_IOT_API OTAUpdateFile();
    AWS_IOT_API OTAUpdateFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OTAUpdateFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline OTAUpdateFile& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline OTAUpdateFile& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline OTAUpdateFile& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value you can include in the job document to allow your devices to
     * identify the type of file received from the cloud.</p>
     */
    inline int GetFileType() const{ return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(int value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline OTAUpdateFile& WithFileType(int value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file version.</p>
     */
    inline const Aws::String& GetFileVersion() const{ return m_fileVersion; }
    inline bool FileVersionHasBeenSet() const { return m_fileVersionHasBeenSet; }
    inline void SetFileVersion(const Aws::String& value) { m_fileVersionHasBeenSet = true; m_fileVersion = value; }
    inline void SetFileVersion(Aws::String&& value) { m_fileVersionHasBeenSet = true; m_fileVersion = std::move(value); }
    inline void SetFileVersion(const char* value) { m_fileVersionHasBeenSet = true; m_fileVersion.assign(value); }
    inline OTAUpdateFile& WithFileVersion(const Aws::String& value) { SetFileVersion(value); return *this;}
    inline OTAUpdateFile& WithFileVersion(Aws::String&& value) { SetFileVersion(std::move(value)); return *this;}
    inline OTAUpdateFile& WithFileVersion(const char* value) { SetFileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the updated firmware.</p>
     */
    inline const FileLocation& GetFileLocation() const{ return m_fileLocation; }
    inline bool FileLocationHasBeenSet() const { return m_fileLocationHasBeenSet; }
    inline void SetFileLocation(const FileLocation& value) { m_fileLocationHasBeenSet = true; m_fileLocation = value; }
    inline void SetFileLocation(FileLocation&& value) { m_fileLocationHasBeenSet = true; m_fileLocation = std::move(value); }
    inline OTAUpdateFile& WithFileLocation(const FileLocation& value) { SetFileLocation(value); return *this;}
    inline OTAUpdateFile& WithFileLocation(FileLocation&& value) { SetFileLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code signing method of the file.</p>
     */
    inline const CodeSigning& GetCodeSigning() const{ return m_codeSigning; }
    inline bool CodeSigningHasBeenSet() const { return m_codeSigningHasBeenSet; }
    inline void SetCodeSigning(const CodeSigning& value) { m_codeSigningHasBeenSet = true; m_codeSigning = value; }
    inline void SetCodeSigning(CodeSigning&& value) { m_codeSigningHasBeenSet = true; m_codeSigning = std::move(value); }
    inline OTAUpdateFile& WithCodeSigning(const CodeSigning& value) { SetCodeSigning(value); return *this;}
    inline OTAUpdateFile& WithCodeSigning(CodeSigning&& value) { SetCodeSigning(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of name-attribute pairs. They won't be sent to devices as a part of
     * the Job document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline OTAUpdateFile& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline OTAUpdateFile& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline OTAUpdateFile& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline OTAUpdateFile& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline OTAUpdateFile& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline OTAUpdateFile& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline OTAUpdateFile& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline OTAUpdateFile& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline OTAUpdateFile& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    int m_fileType;
    bool m_fileTypeHasBeenSet = false;

    Aws::String m_fileVersion;
    bool m_fileVersionHasBeenSet = false;

    FileLocation m_fileLocation;
    bool m_fileLocationHasBeenSet = false;

    CodeSigning m_codeSigning;
    bool m_codeSigningHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
