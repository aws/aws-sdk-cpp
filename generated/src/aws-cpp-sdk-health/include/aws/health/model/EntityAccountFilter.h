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
#include <aws/health/model/EntityStatusCode.h>

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
 * <p>A JSON set of elements including the <code>awsAccountId</code>,
 * <code>eventArn</code> and a set of <code>statusCodes</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EntityAccountFilter">AWS
 * API Reference</a></p>
 */
class EntityAccountFilter {
 public:
  AWS_HEALTH_API EntityAccountFilter() = default;
  AWS_HEALTH_API EntityAccountFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API EntityAccountFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  EntityAccountFilter& WithEventArn(EventArnT&& value) {
    SetEventArn(std::forward<EventArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account numbers that contains the affected
   * entities.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  EntityAccountFilter& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of entity status codes.</p>
   */
  inline const Aws::Vector<EntityStatusCode>& GetStatusCodes() const { return m_statusCodes; }
  inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }
  template <typename StatusCodesT = Aws::Vector<EntityStatusCode>>
  void SetStatusCodes(StatusCodesT&& value) {
    m_statusCodesHasBeenSet = true;
    m_statusCodes = std::forward<StatusCodesT>(value);
  }
  template <typename StatusCodesT = Aws::Vector<EntityStatusCode>>
  EntityAccountFilter& WithStatusCodes(StatusCodesT&& value) {
    SetStatusCodes(std::forward<StatusCodesT>(value));
    return *this;
  }
  inline EntityAccountFilter& AddStatusCodes(EntityStatusCode value) {
    m_statusCodesHasBeenSet = true;
    m_statusCodes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys to lists of tag values. A tag matches when its key is in
   * the map and its value is one of the values listed for that key. Matching is case
   * sensitive, and the filter matches when at least one key in the map matches.</p>
   * <p>An entity is returned when the tags of the resource, or of the account it
   * belongs to, match. When you specify several filters in
   * <code>organizationEntityAccountFilters</code>, the tags must be identical in
   * every filter.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  EntityAccountFilter& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::Vector<Aws::String>>
  EntityAccountFilter& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventArn;

  Aws::String m_awsAccountId;

  Aws::Vector<EntityStatusCode> m_statusCodes;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_tags;
  bool m_eventArnHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_statusCodesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
