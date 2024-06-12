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
    AWS_APPTEST_API Input();
    AWS_APPTEST_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file in the input.</p>
     */
    inline const InputFile& GetFile() const{ return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(const InputFile& value) { m_fileHasBeenSet = true; m_file = value; }
    inline void SetFile(InputFile&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }
    inline Input& WithFile(const InputFile& value) { SetFile(value); return *this;}
    inline Input& WithFile(InputFile&& value) { SetFile(std::move(value)); return *this;}
    ///@}
  private:

    InputFile m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
