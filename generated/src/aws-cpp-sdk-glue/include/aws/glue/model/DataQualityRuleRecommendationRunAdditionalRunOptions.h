/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Additional run options you can specify for a recommendation
 * run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRuleRecommendationRunAdditionalRunOptions">AWS
 * API Reference</a></p>
 */
class DataQualityRuleRecommendationRunAdditionalRunOptions {
 public:
  AWS_GLUE_API DataQualityRuleRecommendationRunAdditionalRunOptions() = default;
  AWS_GLUE_API DataQualityRuleRecommendationRunAdditionalRunOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityRuleRecommendationRunAdditionalRunOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A custom prefix for the CloudWatch log group names. When specified,
   * recommendation run logs are written to
   * <code>&lt;CustomLogGroupPrefix&gt;/error</code> and
   * <code>&lt;CustomLogGroupPrefix&gt;/output</code> instead of the default
   * <code>/aws-glue/data-quality/error</code> and
   * <code>/aws-glue/data-quality/output</code> log groups.</p>
   */
  inline const Aws::String& GetCustomLogGroupPrefix() const { return m_customLogGroupPrefix; }
  inline bool CustomLogGroupPrefixHasBeenSet() const { return m_customLogGroupPrefixHasBeenSet; }
  template <typename CustomLogGroupPrefixT = Aws::String>
  void SetCustomLogGroupPrefix(CustomLogGroupPrefixT&& value) {
    m_customLogGroupPrefixHasBeenSet = true;
    m_customLogGroupPrefix = std::forward<CustomLogGroupPrefixT>(value);
  }
  template <typename CustomLogGroupPrefixT = Aws::String>
  DataQualityRuleRecommendationRunAdditionalRunOptions& WithCustomLogGroupPrefix(CustomLogGroupPrefixT&& value) {
    SetCustomLogGroupPrefix(std::forward<CustomLogGroupPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_customLogGroupPrefix;
  bool m_customLogGroupPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
