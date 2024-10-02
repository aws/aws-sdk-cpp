/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/ConversionTargetFormat.h>
#include <aws/b2bi/model/ConversionTargetFormatDetails.h>
#include <aws/b2bi/model/OutputSampleFileSource.h>
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
    AWS_B2BI_API ConversionTarget();
    AWS_B2BI_API ConversionTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API ConversionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Currently, only X12 format is supported.</p>
     */
    inline const ConversionTargetFormat& GetFileFormat() const{ return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(const ConversionTargetFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline void SetFileFormat(ConversionTargetFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }
    inline ConversionTarget& WithFileFormat(const ConversionTargetFormat& value) { SetFileFormat(value); return *this;}
    inline ConversionTarget& WithFileFormat(ConversionTargetFormat&& value) { SetFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the formatting details for the conversion
     * target.</p>
     */
    inline const ConversionTargetFormatDetails& GetFormatDetails() const{ return m_formatDetails; }
    inline bool FormatDetailsHasBeenSet() const { return m_formatDetailsHasBeenSet; }
    inline void SetFormatDetails(const ConversionTargetFormatDetails& value) { m_formatDetailsHasBeenSet = true; m_formatDetails = value; }
    inline void SetFormatDetails(ConversionTargetFormatDetails&& value) { m_formatDetailsHasBeenSet = true; m_formatDetails = std::move(value); }
    inline ConversionTarget& WithFormatDetails(const ConversionTargetFormatDetails& value) { SetFormatDetails(value); return *this;}
    inline ConversionTarget& WithFormatDetails(ConversionTargetFormatDetails&& value) { SetFormatDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer uses this to provide a sample on what should file look like after
     * conversion X12 EDI use case around this would be discovering the file syntax</p>
     */
    inline const OutputSampleFileSource& GetOutputSampleFile() const{ return m_outputSampleFile; }
    inline bool OutputSampleFileHasBeenSet() const { return m_outputSampleFileHasBeenSet; }
    inline void SetOutputSampleFile(const OutputSampleFileSource& value) { m_outputSampleFileHasBeenSet = true; m_outputSampleFile = value; }
    inline void SetOutputSampleFile(OutputSampleFileSource&& value) { m_outputSampleFileHasBeenSet = true; m_outputSampleFile = std::move(value); }
    inline ConversionTarget& WithOutputSampleFile(const OutputSampleFileSource& value) { SetOutputSampleFile(value); return *this;}
    inline ConversionTarget& WithOutputSampleFile(OutputSampleFileSource&& value) { SetOutputSampleFile(std::move(value)); return *this;}
    ///@}
  private:

    ConversionTargetFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    ConversionTargetFormatDetails m_formatDetails;
    bool m_formatDetailsHasBeenSet = false;

    OutputSampleFileSource m_outputSampleFile;
    bool m_outputSampleFileHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
