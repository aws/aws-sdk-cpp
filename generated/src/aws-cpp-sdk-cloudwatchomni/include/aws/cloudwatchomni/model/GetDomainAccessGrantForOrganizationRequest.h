/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 */
class GetDomainAccessGrantForOrganizationRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API GetDomainAccessGrantForOrganizationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDomainAccessGrantForOrganization"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the access grant to retrieve.</p>
   */
  inline const Aws::String& GetGrantId() const { return m_grantId; }
  inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }
  template <typename GrantIdT = Aws::String>
  void SetGrantId(GrantIdT&& value) {
    m_grantIdHasBeenSet = true;
    m_grantId = std::forward<GrantIdT>(value);
  }
  template <typename GrantIdT = Aws::String>
  GetDomainAccessGrantForOrganizationRequest& WithGrantId(GrantIdT&& value) {
    SetGrantId(std::forward<GrantIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_grantId;
  bool m_grantIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
