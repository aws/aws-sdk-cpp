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
    AWS_IOT_API OTAUpdateFile() = default;
    AWS_IOT_API OTAUpdateFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API OTAUpdateFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    OTAUpdateFile& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer value you can include in the job document to allow your devices to
     * identify the type of file received from the cloud.</p>
     */
    inline int GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(int value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline OTAUpdateFile& WithFileType(int value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file version.</p>
     */
    inline const Aws::String& GetFileVersion() const { return m_fileVersion; }
    inline bool FileVersionHasBeenSet() const { return m_fileVersionHasBeenSet; }
    template<typename FileVersionT = Aws::String>
    void SetFileVersion(FileVersionT&& value) { m_fileVersionHasBeenSet = true; m_fileVersion = std::forward<FileVersionT>(value); }
    template<typename FileVersionT = Aws::String>
    OTAUpdateFile& WithFileVersion(FileVersionT&& value) { SetFileVersion(std::forward<FileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the updated firmware.</p>
     */
    inline const FileLocation& GetFileLocation() const { return m_fileLocation; }
    inline bool FileLocationHasBeenSet() const { return m_fileLocationHasBeenSet; }
    template<typename FileLocationT = FileLocation>
    void SetFileLocation(FileLocationT&& value) { m_fileLocationHasBeenSet = true; m_fileLocation = std::forward<FileLocationT>(value); }
    template<typename FileLocationT = FileLocation>
    OTAUpdateFile& WithFileLocation(FileLocationT&& value) { SetFileLocation(std::forward<FileLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code signing method of the file.</p>
     */
    inline const CodeSigning& GetCodeSigning() const { return m_codeSigning; }
    inline bool CodeSigningHasBeenSet() const { return m_codeSigningHasBeenSet; }
    template<typename CodeSigningT = CodeSigning>
    void SetCodeSigning(CodeSigningT&& value) { m_codeSigningHasBeenSet = true; m_codeSigning = std::forward<CodeSigningT>(value); }
    template<typename CodeSigningT = CodeSigning>
    OTAUpdateFile& WithCodeSigning(CodeSigningT&& value) { SetCodeSigning(std::forward<CodeSigningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of name-attribute pairs. They won't be sent to devices as a part of
     * the Job document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    OTAUpdateFile& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    OTAUpdateFile& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    int m_fileType{0};
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
