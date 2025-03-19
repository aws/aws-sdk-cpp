/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/ConversionSourceFormat.h>
#include <aws/b2bi/model/InputFileSource.h>
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
   * <p>Describes the input for an outbound transformation. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ConversionSource">AWS
   * API Reference</a></p>
   */
  class ConversionSource
  {
  public:
    AWS_B2BI_API ConversionSource() = default;
    AWS_B2BI_API ConversionSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API ConversionSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format for the input file: either JSON or XML.</p>
     */
    inline ConversionSourceFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(ConversionSourceFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline ConversionSource& WithFileFormat(ConversionSourceFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>File to be converted</p>
     */
    inline const InputFileSource& GetInputFile() const { return m_inputFile; }
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }
    template<typename InputFileT = InputFileSource>
    void SetInputFile(InputFileT&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::forward<InputFileT>(value); }
    template<typename InputFileT = InputFileSource>
    ConversionSource& WithInputFile(InputFileT&& value) { SetInputFile(std::forward<InputFileT>(value)); return *this;}
    ///@}
  private:

    ConversionSourceFormat m_fileFormat{ConversionSourceFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    InputFileSource m_inputFile;
    bool m_inputFileHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
