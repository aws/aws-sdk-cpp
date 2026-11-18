/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains the PySpark job parameters used to populate an intermediate table,
 * including the ARN of the analysis template that defines the job. Use these
 * parameters instead of SQL parameters when the analysis you use to populate the
 * intermediate table is a PySpark analysis template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PopulationAnalysisJobParameters">AWS
 * API Reference</a></p>
 */
class PopulationAnalysisJobParameters {
 public:
  AWS_CLEANROOMS_API PopulationAnalysisJobParameters() = default;
  AWS_CLEANROOMS_API PopulationAnalysisJobParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API PopulationAnalysisJobParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the ARN of the PySpark analysis template that populates the
   * intermediate table. Provide this ARN in <code>jobParameters</code> when you
   * populate the intermediate table with results from a PySpark job.</p>
   */
  inline const Aws::String& GetAnalysisTemplateArn() const { return m_analysisTemplateArn; }
  inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }
  template <typename AnalysisTemplateArnT = Aws::String>
  void SetAnalysisTemplateArn(AnalysisTemplateArnT&& value) {
    m_analysisTemplateArnHasBeenSet = true;
    m_analysisTemplateArn = std::forward<AnalysisTemplateArnT>(value);
  }
  template <typename AnalysisTemplateArnT = Aws::String>
  PopulationAnalysisJobParameters& WithAnalysisTemplateArn(AnalysisTemplateArnT&& value) {
    SetAnalysisTemplateArn(std::forward<AnalysisTemplateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_analysisTemplateArn;
  bool m_analysisTemplateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
