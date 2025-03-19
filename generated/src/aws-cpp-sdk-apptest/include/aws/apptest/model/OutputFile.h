/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies an output file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/OutputFile">AWS
   * API Reference</a></p>
   */
  class OutputFile
  {
  public:
    AWS_APPTEST_API OutputFile() = default;
    AWS_APPTEST_API OutputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API OutputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file location of the output file.</p>
     */
    inline const Aws::String& GetFileLocation() const { return m_fileLocation; }
    inline bool FileLocationHasBeenSet() const { return m_fileLocationHasBeenSet; }
    template<typename FileLocationT = Aws::String>
    void SetFileLocation(FileLocationT&& value) { m_fileLocationHasBeenSet = true; m_fileLocation = std::forward<FileLocationT>(value); }
    template<typename FileLocationT = Aws::String>
    OutputFile& WithFileLocation(FileLocationT&& value) { SetFileLocation(std::forward<FileLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileLocation;
    bool m_fileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
