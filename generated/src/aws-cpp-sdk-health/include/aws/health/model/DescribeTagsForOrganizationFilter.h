/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/OrganizationTagType.h>

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
 * <p>A filter for narrowing down the tags returned by
 * DescribeTagsForOrganization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeTagsForOrganizationFilter">AWS
 * API Reference</a></p>
 */
class DescribeTagsForOrganizationFilter {
 public:
  AWS_HEALTH_API DescribeTagsForOrganizationFilter() = default;
  AWS_HEALTH_API DescribeTagsForOrganizationFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API DescribeTagsForOrganizationFilter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The types of tags to include in the results.</p>
   */
  inline const Aws::Vector<OrganizationTagType>& GetTagTypes() const { return m_tagTypes; }
  inline bool TagTypesHasBeenSet() const { return m_tagTypesHasBeenSet; }
  template <typename TagTypesT = Aws::Vector<OrganizationTagType>>
  void SetTagTypes(TagTypesT&& value) {
    m_tagTypesHasBeenSet = true;
    m_tagTypes = std::forward<TagTypesT>(value);
  }
  template <typename TagTypesT = Aws::Vector<OrganizationTagType>>
  DescribeTagsForOrganizationFilter& WithTagTypes(TagTypesT&& value) {
    SetTagTypes(std::forward<TagTypesT>(value));
    return *this;
  }
  inline DescribeTagsForOrganizationFilter& AddTagTypes(OrganizationTagType value) {
    m_tagTypesHasBeenSet = true;
    m_tagTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OrganizationTagType> m_tagTypes;
  bool m_tagTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
