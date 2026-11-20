/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DesiredPublishStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class UpdatePortalPublishStatusRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API UpdatePortalPublishStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePortalPublishStatus"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the portal.</p>
   */
  inline const Aws::String& GetPortalId() const { return m_portalId; }
  inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
  template <typename PortalIdT = Aws::String>
  void SetPortalId(PortalIdT&& value) {
    m_portalIdHasBeenSet = true;
    m_portalId = std::forward<PortalIdT>(value);
  }
  template <typename PortalIdT = Aws::String>
  UpdatePortalPublishStatusRequest& WithPortalId(PortalIdT&& value) {
    SetPortalId(std::forward<PortalIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DesiredPublishStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DesiredPublishStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdatePortalPublishStatusRequest& WithStatus(DesiredPublishStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of this publish request, up to 1024 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePortalPublishStatusRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalId;

  DesiredPublishStatus m_status{DesiredPublishStatus::NOT_SET};

  Aws::String m_description;
  bool m_portalIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
