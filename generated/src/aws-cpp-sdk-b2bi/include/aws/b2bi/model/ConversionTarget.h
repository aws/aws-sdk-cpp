/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/ConversionTargetFormat.h>
#include <aws/b2bi/model/ConversionTargetFormatDetails.h>
#include <aws/b2bi/model/OutputSampleFileSource.h>
#include <aws/b2bi/model/AdvancedOptions.h>
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
   * <p>Provide a sample of what the output of the transformation should look
   * like.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ConversionTarget">AWS
   * API Reference</a></p>
   */
  class ConversionTarget
  {
  public:
    AWS_B2BI_API ConversionTarget() = default;
    AWS_B2BI_API ConversionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API ConversionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Currently, only X12 format is supported.</p>
     */
    inline ConversionTargetFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(ConversionTargetFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline ConversionTarget& WithFileFormat(ConversionTargetFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the formatting details for the conversion
     * target.</p>
     */
    inline const ConversionTargetFormatDetails& GetFormatDetails() const { return m_formatDetails; }
    inline bool FormatDetailsHasBeenSet() const { return m_formatDetailsHasBeenSet; }
    template<typename FormatDetailsT = ConversionTargetFormatDetails>
    void SetFormatDetails(FormatDetailsT&& value) { m_formatDetailsHasBeenSet = true; m_formatDetails = std::forward<FormatDetailsT>(value); }
    template<typename FormatDetailsT = ConversionTargetFormatDetails>
    ConversionTarget& WithFormatDetails(FormatDetailsT&& value) { SetFormatDetails(std::forward<FormatDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer uses this to provide a sample on what should file look like after
     * conversion X12 EDI use case around this would be discovering the file syntax</p>
     */
    inline const OutputSampleFileSource& GetOutputSampleFile() const { return m_outputSampleFile; }
    inline bool OutputSampleFileHasBeenSet() const { return m_outputSampleFileHasBeenSet; }
    template<typename OutputSampleFileT = OutputSampleFileSource>
    void SetOutputSampleFile(OutputSampleFileT&& value) { m_outputSampleFileHasBeenSet = true; m_outputSampleFile = std::forward<OutputSampleFileT>(value); }
    template<typename OutputSampleFileT = OutputSampleFileSource>
    ConversionTarget& WithOutputSampleFile(OutputSampleFileT&& value) { SetOutputSampleFile(std::forward<OutputSampleFileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AdvancedOptions& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = AdvancedOptions>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = AdvancedOptions>
    ConversionTarget& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    ///@}
  private:

    ConversionTargetFormat m_fileFormat{ConversionTargetFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    ConversionTargetFormatDetails m_formatDetails;
    bool m_formatDetailsHasBeenSet = false;

    OutputSampleFileSource m_outputSampleFile;
    bool m_outputSampleFileHasBeenSet = false;

    AdvancedOptions m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
