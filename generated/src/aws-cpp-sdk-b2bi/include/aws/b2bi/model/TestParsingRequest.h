/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/B2BIRequest.h>
#include <aws/b2bi/model/S3Location.h>
#include <aws/b2bi/model/FileFormat.h>
#include <aws/b2bi/model/EdiType.h>
#include <aws/b2bi/model/AdvancedOptions.h>
#include <utility>

namespace Aws
{
namespace B2BI
{
namespace Model
{

  /**
   */
  class TestParsingRequest : public B2BIRequest
  {
  public:
    AWS_B2BI_API TestParsingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestParsing"; }

    AWS_B2BI_API Aws::String SerializePayload() const override;

    AWS_B2BI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies an <code>S3Location</code> object, which contains the Amazon S3
     * bucket and prefix for the location of the input file.</p>
     */
    inline const S3Location& GetInputFile() const { return m_inputFile; }
    inline bool InputFileHasBeenSet() const { return m_inputFileHasBeenSet; }
    template<typename InputFileT = S3Location>
    void SetInputFile(InputFileT&& value) { m_inputFileHasBeenSet = true; m_inputFile = std::forward<InputFileT>(value); }
    template<typename InputFileT = S3Location>
    TestParsingRequest& WithInputFile(InputFileT&& value) { SetInputFile(std::forward<InputFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the currently supported file formats for EDI transformations
     * are <code>JSON</code> and <code>XML</code>.</p>
     */
    inline FileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(FileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline TestParsingRequest& WithFileFormat(FileFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const EdiType& GetEdiType() const { return m_ediType; }
    inline bool EdiTypeHasBeenSet() const { return m_ediTypeHasBeenSet; }
    template<typename EdiTypeT = EdiType>
    void SetEdiType(EdiTypeT&& value) { m_ediTypeHasBeenSet = true; m_ediType = std::forward<EdiTypeT>(value); }
    template<typename EdiTypeT = EdiType>
    TestParsingRequest& WithEdiType(EdiTypeT&& value) { SetEdiType(std::forward<EdiTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies advanced options for parsing the input EDI file. These options
     * allow for more granular control over the parsing process, including split
     * options for X12 files.</p>
     */
    inline const AdvancedOptions& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = AdvancedOptions>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = AdvancedOptions>
    TestParsingRequest& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    ///@}
  private:

    S3Location m_inputFile;
    bool m_inputFileHasBeenSet = false;

    FileFormat m_fileFormat{FileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    EdiType m_ediType;
    bool m_ediTypeHasBeenSet = false;

    AdvancedOptions m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
