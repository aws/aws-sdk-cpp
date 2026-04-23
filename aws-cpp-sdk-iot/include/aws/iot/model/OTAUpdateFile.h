/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API OTAUpdateFile
  {
  public:
    OTAUpdateFile();
    OTAUpdateFile(Aws::Utils::Json::JsonView jsonValue);
    OTAUpdateFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the file.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>The name of the file.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>The name of the file.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>The name of the file.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>The name of the file.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>The name of the file.</p>
     */
    inline OTAUpdateFile& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>The name of the file.</p>
     */
    inline OTAUpdateFile& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the file.</p>
     */
    inline OTAUpdateFile& WithFileName(const char* value) { SetFileName(value); return *this;}


    /**
     * <p>The file version.</p>
     */
    inline const Aws::String& GetFileVersion() const{ return m_fileVersion; }

    /**
     * <p>The file version.</p>
     */
    inline bool FileVersionHasBeenSet() const { return m_fileVersionHasBeenSet; }

    /**
     * <p>The file version.</p>
     */
    inline void SetFileVersion(const Aws::String& value) { m_fileVersionHasBeenSet = true; m_fileVersion = value; }

    /**
     * <p>The file version.</p>
     */
    inline void SetFileVersion(Aws::String&& value) { m_fileVersionHasBeenSet = true; m_fileVersion = std::move(value); }

    /**
     * <p>The file version.</p>
     */
    inline void SetFileVersion(const char* value) { m_fileVersionHasBeenSet = true; m_fileVersion.assign(value); }

    /**
     * <p>The file version.</p>
     */
    inline OTAUpdateFile& WithFileVersion(const Aws::String& value) { SetFileVersion(value); return *this;}

    /**
     * <p>The file version.</p>
     */
    inline OTAUpdateFile& WithFileVersion(Aws::String&& value) { SetFileVersion(std::move(value)); return *this;}

    /**
     * <p>The file version.</p>
     */
    inline OTAUpdateFile& WithFileVersion(const char* value) { SetFileVersion(value); return *this;}


    /**
     * <p>The location of the updated firmware.</p>
     */
    inline const FileLocation& GetFileLocation() const{ return m_fileLocation; }

    /**
     * <p>The location of the updated firmware.</p>
     */
    inline bool FileLocationHasBeenSet() const { return m_fileLocationHasBeenSet; }

    /**
     * <p>The location of the updated firmware.</p>
     */
    inline void SetFileLocation(const FileLocation& value) { m_fileLocationHasBeenSet = true; m_fileLocation = value; }

    /**
     * <p>The location of the updated firmware.</p>
     */
    inline void SetFileLocation(FileLocation&& value) { m_fileLocationHasBeenSet = true; m_fileLocation = std::move(value); }

    /**
     * <p>The location of the updated firmware.</p>
     */
    inline OTAUpdateFile& WithFileLocation(const FileLocation& value) { SetFileLocation(value); return *this;}

    /**
     * <p>The location of the updated firmware.</p>
     */
    inline OTAUpdateFile& WithFileLocation(FileLocation&& value) { SetFileLocation(std::move(value)); return *this;}


    /**
     * <p>The code signing method of the file.</p>
     */
    inline const CodeSigning& GetCodeSigning() const{ return m_codeSigning; }

    /**
     * <p>The code signing method of the file.</p>
     */
    inline bool CodeSigningHasBeenSet() const { return m_codeSigningHasBeenSet; }

    /**
     * <p>The code signing method of the file.</p>
     */
    inline void SetCodeSigning(const CodeSigning& value) { m_codeSigningHasBeenSet = true; m_codeSigning = value; }

    /**
     * <p>The code signing method of the file.</p>
     */
    inline void SetCodeSigning(CodeSigning&& value) { m_codeSigningHasBeenSet = true; m_codeSigning = std::move(value); }

    /**
     * <p>The code signing method of the file.</p>
     */
    inline OTAUpdateFile& WithCodeSigning(const CodeSigning& value) { SetCodeSigning(value); return *this;}

    /**
     * <p>The code signing method of the file.</p>
     */
    inline OTAUpdateFile& WithCodeSigning(CodeSigning&& value) { SetCodeSigning(std::move(value)); return *this;}


    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of name/attribute pairs.</p>
     */
    inline OTAUpdateFile& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet;

    Aws::String m_fileVersion;
    bool m_fileVersionHasBeenSet;

    FileLocation m_fileLocation;
    bool m_fileLocationHasBeenSet;

    CodeSigning m_codeSigning;
    bool m_codeSigningHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
