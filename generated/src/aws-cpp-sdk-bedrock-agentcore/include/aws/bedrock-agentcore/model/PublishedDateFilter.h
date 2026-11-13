/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A publication time range for the results. Both bounds are optional, and both
 * are inclusive. If <code>publishedAfter</code> is later than
 * <code>publishedBefore</code>, the request fails with a
 * <code>ValidationException</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PublishedDateFilter">AWS
 * API Reference</a></p>
 */
class PublishedDateFilter {
 public:
  AWS_BEDROCKAGENTCORE_API PublishedDateFilter() = default;
  AWS_BEDROCKAGENTCORE_API PublishedDateFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PublishedDateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The earliest publication time of the results, inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedAfter() const { return m_publishedAfter; }
  inline bool PublishedAfterHasBeenSet() const { return m_publishedAfterHasBeenSet; }
  template <typename PublishedAfterT = Aws::Utils::DateTime>
  void SetPublishedAfter(PublishedAfterT&& value) {
    m_publishedAfterHasBeenSet = true;
    m_publishedAfter = std::forward<PublishedAfterT>(value);
  }
  template <typename PublishedAfterT = Aws::Utils::DateTime>
  PublishedDateFilter& WithPublishedAfter(PublishedAfterT&& value) {
    SetPublishedAfter(std::forward<PublishedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest publication time of the results, inclusive. A date without a time,
   * such as one passed to the AWS CLI, means midnight UTC. To include a whole day,
   * use the last second of that day, for example
   * <code>2026-01-31T23:59:59Z</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedBefore() const { return m_publishedBefore; }
  inline bool PublishedBeforeHasBeenSet() const { return m_publishedBeforeHasBeenSet; }
  template <typename PublishedBeforeT = Aws::Utils::DateTime>
  void SetPublishedBefore(PublishedBeforeT&& value) {
    m_publishedBeforeHasBeenSet = true;
    m_publishedBefore = std::forward<PublishedBeforeT>(value);
  }
  template <typename PublishedBeforeT = Aws::Utils::DateTime>
  PublishedDateFilter& WithPublishedBefore(PublishedBeforeT&& value) {
    SetPublishedBefore(std::forward<PublishedBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_publishedAfter{};

  Aws::Utils::DateTime m_publishedBefore{};
  bool m_publishedAfterHasBeenSet = false;
  bool m_publishedBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
