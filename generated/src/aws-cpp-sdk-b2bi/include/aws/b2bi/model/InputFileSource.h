/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>The input file to use for an outbound transformation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/InputFileSource">AWS
   * API Reference</a></p>
   */
  class InputFileSource
  {
  public:
    AWS_B2BI_API InputFileSource();
    AWS_B2BI_API InputFileSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API InputFileSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the input contents, as a string, for the source of an outbound
     * transformation.</p>
     */
    inline const Aws::String& GetFileContent() const{ return m_fileContent; }
    inline bool FileContentHasBeenSet() const { return m_fileContentHasBeenSet; }
    inline void SetFileContent(const Aws::String& value) { m_fileContentHasBeenSet = true; m_fileContent = value; }
    inline void SetFileContent(Aws::String&& value) { m_fileContentHasBeenSet = true; m_fileContent = std::move(value); }
    inline void SetFileContent(const char* value) { m_fileContentHasBeenSet = true; m_fileContent.assign(value); }
    inline InputFileSource& WithFileContent(const Aws::String& value) { SetFileContent(value); return *this;}
    inline InputFileSource& WithFileContent(Aws::String&& value) { SetFileContent(std::move(value)); return *this;}
    inline InputFileSource& WithFileContent(const char* value) { SetFileContent(value); return *this;}
    ///@}
  private:

    Aws::String m_fileContent;
    bool m_fileContentHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
