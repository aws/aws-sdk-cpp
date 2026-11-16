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
 * <p>A filter for narrowing down the entity aggregates returned by
 * DescribeEntityAggregates.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EntityAggregateFilter">AWS
 * API Reference</a></p>
 */
class EntityAggregateFilter {
 public:
  AWS_HEALTH_API EntityAggregateFilter() = default;
  AWS_HEALTH_API EntityAggregateFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API EntityAggregateFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A map of tag keys to lists of tag values. A tag matches when its key is in
   * the map and its value is one of the values listed for that key. Matching is case
   * sensitive, and the filter matches when at least one key in the map matches.</p>
   * <p>Only entities whose tags match are included in the aggregates.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  EntityAggregateFilter& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::Vector<Aws::String>>
  EntityAggregateFilter& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
