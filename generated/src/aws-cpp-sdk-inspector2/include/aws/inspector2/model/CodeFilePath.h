/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains information on where a code vulnerability is located in your Lambda
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeFilePath">AWS
   * API Reference</a></p>
   */
  class CodeFilePath
  {
  public:
    AWS_INSPECTOR2_API CodeFilePath();
    AWS_INSPECTOR2_API CodeFilePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeFilePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The line number of the last line of code that a vulnerability was found
     * in.</p>
     */
    inline int GetEndLine() const{ return m_endLine; }
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }
    inline CodeFilePath& WithEndLine(int value) { SetEndLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file the code vulnerability was found in.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline CodeFilePath& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline CodeFilePath& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline CodeFilePath& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path to the code that a vulnerability was found in.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline CodeFilePath& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline CodeFilePath& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline CodeFilePath& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line number of the first line of code that a vulnerability was found
     * in.</p>
     */
    inline int GetStartLine() const{ return m_startLine; }
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }
    inline CodeFilePath& WithStartLine(int value) { SetStartLine(value); return *this;}
    ///@}
  private:

    int m_endLine;
    bool m_endLineHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    int m_startLine;
    bool m_startLineHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
