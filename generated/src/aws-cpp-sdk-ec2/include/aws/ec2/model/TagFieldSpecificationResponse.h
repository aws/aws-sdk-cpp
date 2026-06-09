/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TaggableResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>A single resource's tag configuration associated with the Flow Logs Amazon
 * EC2 Tags feature fields in your custom log format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TagFieldSpecificationResponse">AWS
 * API Reference</a></p>
 */
class TagFieldSpecificationResponse {
 public:
  AWS_EC2_API TagFieldSpecificationResponse() = default;
  AWS_EC2_API TagFieldSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TagFieldSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The resource type for the tag keys associated with the Flow Logs Amazon EC2
   * Tags feature fields in your custom log format.</p>
   */
  inline TaggableResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(TaggableResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline TagFieldSpecificationResponse& WithResourceType(TaggableResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag keys on your tagged resources to be displayed by the Flow Logs Amazon
   * EC2 Tags feature fields in your custom log format.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
  inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
  template <typename TagKeysT = Aws::Vector<Aws::String>>
  void SetTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys = std::forward<TagKeysT>(value);
  }
  template <typename TagKeysT = Aws::Vector<Aws::String>>
  TagFieldSpecificationResponse& WithTagKeys(TagKeysT&& value) {
    SetTagKeys(std::forward<TagKeysT>(value));
    return *this;
  }
  template <typename TagKeysT = Aws::String>
  TagFieldSpecificationResponse& AddTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys.emplace_back(std::forward<TagKeysT>(value));
    return *this;
  }
  ///@}
 private:
  TaggableResourceType m_resourceType{TaggableResourceType::NOT_SET};

  Aws::Vector<Aws::String> m_tagKeys;
  bool m_resourceTypeHasBeenSet = false;
  bool m_tagKeysHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
