/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/OutputFile.h>
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
   * <p>Specifies an output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/Output">AWS API
   * Reference</a></p>
   */
  class Output
  {
  public:
    AWS_APPTEST_API Output();
    AWS_APPTEST_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file of the output.</p>
     */
    inline const OutputFile& GetFile() const{ return m_file; }
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
    inline void SetFile(const OutputFile& value) { m_fileHasBeenSet = true; m_file = value; }
    inline void SetFile(OutputFile&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }
    inline Output& WithFile(const OutputFile& value) { SetFile(value); return *this;}
    inline Output& WithFile(OutputFile&& value) { SetFile(std::move(value)); return *this;}
    ///@}
  private:

    OutputFile m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
