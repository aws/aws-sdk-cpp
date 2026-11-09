/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/OnDemandResourceType.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class GetOnDemandScanStatusRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API GetOnDemandScanStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetOnDemandScanStatus"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the resource whose on-demand scan status is being requested.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  GetOnDemandScanStatusRequest& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the on-demand scan whose status is being
   * requested.</p>
   */
  inline const Aws::String& GetScanId() const { return m_scanId; }
  inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
  template <typename ScanIdT = Aws::String>
  void SetScanId(ScanIdT&& value) {
    m_scanIdHasBeenSet = true;
    m_scanId = std::forward<ScanIdT>(value);
  }
  template <typename ScanIdT = Aws::String>
  GetOnDemandScanStatusRequest& WithScanId(ScanIdT&& value) {
    SetScanId(std::forward<ScanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource whose on-demand scan status is being requested.</p>
   */
  inline OnDemandResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(OnDemandResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline GetOnDemandScanStatusRequest& WithResourceType(OnDemandResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  Aws::String m_scanId;

  OnDemandResourceType m_resourceType{OnDemandResourceType::NOT_SET};
  bool m_resourceIdHasBeenSet = false;
  bool m_scanIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
