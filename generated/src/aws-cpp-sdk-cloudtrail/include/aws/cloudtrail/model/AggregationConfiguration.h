/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/EventCategoryAggregation.h>
#include <aws/cloudtrail/model/Template.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudTrail {
namespace Model {

/**
 * <p>An object that contains configuration settings for aggregating
 * events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/AggregationConfiguration">AWS
 * API Reference</a></p>
 */
class AggregationConfiguration {
 public:
  AWS_CLOUDTRAIL_API AggregationConfiguration() = default;
  AWS_CLOUDTRAIL_API AggregationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDTRAIL_API AggregationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of aggregation templates that can be used to configure event
   * aggregation.</p>
   */
  inline const Aws::Vector<Template>& GetTemplates() const { return m_templates; }
  inline bool TemplatesHasBeenSet() const { return m_templatesHasBeenSet; }
  template <typename TemplatesT = Aws::Vector<Template>>
  void SetTemplates(TemplatesT&& value) {
    m_templatesHasBeenSet = true;
    m_templates = std::forward<TemplatesT>(value);
  }
  template <typename TemplatesT = Aws::Vector<Template>>
  AggregationConfiguration& WithTemplates(TemplatesT&& value) {
    SetTemplates(std::forward<TemplatesT>(value));
    return *this;
  }
  inline AggregationConfiguration& AddTemplates(Template value) {
    m_templatesHasBeenSet = true;
    m_templates.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the event category for which aggregation should be performed.</p>
   */
  inline EventCategoryAggregation GetEventCategory() const { return m_eventCategory; }
  inline bool EventCategoryHasBeenSet() const { return m_eventCategoryHasBeenSet; }
  inline void SetEventCategory(EventCategoryAggregation value) {
    m_eventCategoryHasBeenSet = true;
    m_eventCategory = value;
  }
  inline AggregationConfiguration& WithEventCategory(EventCategoryAggregation value) {
    SetEventCategory(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Template> m_templates;
  bool m_templatesHasBeenSet = false;

  EventCategoryAggregation m_eventCategory{EventCategoryAggregation::NOT_SET};
  bool m_eventCategoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudTrail
}  // namespace Aws
