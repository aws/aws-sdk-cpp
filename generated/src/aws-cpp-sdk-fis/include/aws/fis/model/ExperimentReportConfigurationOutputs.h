/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentReportConfigurationOutputsS3Configuration.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the output destinations of the experiment report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentReportConfigurationOutputs">AWS
   * API Reference</a></p>
   */
  class ExperimentReportConfigurationOutputs
  {
  public:
    AWS_FIS_API ExperimentReportConfigurationOutputs() = default;
    AWS_FIS_API ExperimentReportConfigurationOutputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentReportConfigurationOutputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 destination for the experiment report.</p>
     */
    inline const ExperimentReportConfigurationOutputsS3Configuration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = ExperimentReportConfigurationOutputsS3Configuration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = ExperimentReportConfigurationOutputsS3Configuration>
    ExperimentReportConfigurationOutputs& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}
  private:

    ExperimentReportConfigurationOutputsS3Configuration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
