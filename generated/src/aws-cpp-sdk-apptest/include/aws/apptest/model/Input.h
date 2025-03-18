/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/InputFile.h>
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
   * <p>Specifies the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/Input">AWS API
   * Reference</a></p>
   */
  class Input
  {
  public:
    AWS_APPTEST_API Input() = default;
    AWS_APPTEST_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file in the input.</p>
     */
    inline const InputFile& GetFile() const { return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    template<typename FileT = InputFile>
    void SetFile(FileT&& value) { m_fileHasBeenSet = true; m_file = std::forward<FileT>(value); }
    template<typename FileT = InputFile>
    Input& WithFile(FileT&& value) { SetFile(std::forward<FileT>(value)); return *this;}
    ///@}
  private:

    InputFile m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
