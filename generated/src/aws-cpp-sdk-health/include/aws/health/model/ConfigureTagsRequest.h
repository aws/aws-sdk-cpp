/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/HealthRequest.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/ConfigureTagsTagKey.h>

#include <utility>

namespace Aws {
namespace Health {
namespace Model {

/**
 */
class ConfigureTagsRequest : public HealthRequest {
 public:
  AWS_HEALTH_API ConfigureTagsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ConfigureTags"; }

  AWS_HEALTH_API Aws::String SerializePayload() const override;

  AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The list of resource tag keys to configure for Health event tracking.</p>
   */
  inline const Aws::Vector<ConfigureTagsTagKey>& GetTagKeys() const { return m_tagKeys; }
  inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
  template <typename TagKeysT = Aws::Vector<ConfigureTagsTagKey>>
  void SetTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys = std::forward<TagKeysT>(value);
  }
  template <typename TagKeysT = Aws::Vector<ConfigureTagsTagKey>>
  ConfigureTagsRequest& WithTagKeys(TagKeysT&& value) {
    SetTagKeys(std::forward<TagKeysT>(value));
    return *this;
  }
  template <typename TagKeysT = ConfigureTagsTagKey>
  ConfigureTagsRequest& AddTagKeys(TagKeysT&& value) {
    m_tagKeysHasBeenSet = true;
    m_tagKeys.emplace_back(std::forward<TagKeysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConfigureTagsTagKey> m_tagKeys;
  bool m_tagKeysHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
