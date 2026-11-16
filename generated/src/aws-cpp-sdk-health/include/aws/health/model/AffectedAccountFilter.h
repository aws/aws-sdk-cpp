/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>A filter for narrowing down affected accounts in an organization
 * event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/AffectedAccountFilter">AWS
 * API Reference</a></p>
 */
class AffectedAccountFilter {
 public:
  AWS_HEALTH_API AffectedAccountFilter() = default;
  AWS_HEALTH_API AffectedAccountFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API AffectedAccountFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier for the event. The event ARN has the
   * <code>arn:aws:health:<i>event-region</i>::event/<i>SERVICE</i>/<i>EVENT_TYPE_CODE</i>/<i>EVENT_TYPE_PLUS_ID</i>
   * </code> format.</p> <p>For example, an event ARN might look like the
   * following:</p> <p>
   * <code>arn:aws:health:us-east-1::event/EC2/EC2_INSTANCE_RETIREMENT_SCHEDULED/EC2_INSTANCE_RETIREMENT_SCHEDULED_ABC123-DEF456</code>
   * </p>
   */
  inline const Aws::String& GetEventArn() const { return m_eventArn; }
  inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
  template <typename EventArnT = Aws::String>
  void SetEventArn(EventArnT&& value) {
    m_eventArnHasBeenSet = true;
    m_eventArn = std::forward<EventArnT>(value);
  }
  template <typename EventArnT = Aws::String>
  AffectedAccountFilter& WithEventArn(EventArnT&& value) {
    SetEventArn(std::forward<EventArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys to lists of tag values. A tag matches when its key is in
   * the map and its value is one of the values listed for that key. Matching is case
   * sensitive, and the filter matches when at least one key in the map matches.</p>
   * <p>An account is returned when its own tags, or the tags of one of its affected
   * resources, match.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  AffectedAccountFilter& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::Vector<Aws::String>>
  AffectedAccountFilter& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventArn;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_tags;
  bool m_eventArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
