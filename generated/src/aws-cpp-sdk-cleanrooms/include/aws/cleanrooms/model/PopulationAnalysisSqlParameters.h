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
 * <p>Contains the SQL parameters used to populate an intermediate
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PopulationAnalysisSqlParameters">AWS
 * API Reference</a></p>
 */
class PopulationAnalysisSqlParameters {
 public:
  AWS_CLEANROOMS_API PopulationAnalysisSqlParameters() = default;
  AWS_CLEANROOMS_API PopulationAnalysisSqlParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API PopulationAnalysisSqlParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SQL query string used to populate the intermediate table. Maximum length
   * of 500,000 characters.</p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  PopulationAnalysisSqlParameters& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the analysis template to use for populating
   * the intermediate table.</p>
   */
  inline const Aws::String& GetAnalysisTemplateArn() const { return m_analysisTemplateArn; }
  inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }
  template <typename AnalysisTemplateArnT = Aws::String>
  void SetAnalysisTemplateArn(AnalysisTemplateArnT&& value) {
    m_analysisTemplateArnHasBeenSet = true;
    m_analysisTemplateArn = std::forward<AnalysisTemplateArnT>(value);
  }
  template <typename AnalysisTemplateArnT = Aws::String>
  PopulationAnalysisSqlParameters& WithAnalysisTemplateArn(AnalysisTemplateArnT&& value) {
    SetAnalysisTemplateArn(std::forward<AnalysisTemplateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryString;

  Aws::String m_analysisTemplateArn;
  bool m_queryStringHasBeenSet = false;
  bool m_analysisTemplateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
