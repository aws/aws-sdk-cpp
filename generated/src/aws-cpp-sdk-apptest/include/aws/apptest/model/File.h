/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CompareFileType.h>
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
   * <p>Defines a file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/File">AWS API
   * Reference</a></p>
   */
  class File
  {
  public:
    AWS_APPTEST_API File() = default;
    AWS_APPTEST_API File(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API File& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file type of the file.</p>
     */
    inline const CompareFileType& GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    template<typename FileTypeT = CompareFileType>
    void SetFileType(FileTypeT&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::forward<FileTypeT>(value); }
    template<typename FileTypeT = CompareFileType>
    File& WithFileType(FileTypeT&& value) { SetFileType(std::forward<FileTypeT>(value)); return *this;}
    ///@}
  private:

    CompareFileType m_fileType;
    bool m_fileTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
