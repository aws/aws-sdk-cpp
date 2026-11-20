/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Filters for listing API inventory items. All supplied filters must
 * match.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ApiInventoryFilters">AWS
 * API Reference</a></p>
 */
class ApiInventoryFilters {
 public:
  AWS_APIPORTAL_API ApiInventoryFilters() = default;
  AWS_APIPORTAL_API ApiInventoryFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ApiInventoryFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline DiscoverySource GetDiscoverySource() const { return m_discoverySource; }
  inline bool DiscoverySourceHasBeenSet() const { return m_discoverySourceHasBeenSet; }
  inline void SetDiscoverySource(DiscoverySource value) {
    m_discoverySourceHasBeenSet = true;
    m_discoverySource = value;
  }
  inline ApiInventoryFilters& WithDiscoverySource(DiscoverySource value) {
    SetDiscoverySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Return only APIs served by this resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ApiInventoryFilters& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  DiscoverySource m_discoverySource{DiscoverySource::NOT_SET};

  Aws::String m_resourceArn;
  bool m_discoverySourceHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
