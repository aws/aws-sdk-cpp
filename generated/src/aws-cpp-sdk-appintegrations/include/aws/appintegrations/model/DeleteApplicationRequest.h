/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace AppIntegrationsService {
namespace Model {

/**
 */
class DeleteApplicationRequest : public AppIntegrationsServiceRequest {
 public:
  AWS_APPINTEGRATIONSSERVICE_API DeleteApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteApplication"; }

  AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;

  AWS_APPINTEGRATIONSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Application.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DeleteApplicationRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to delete the application even if it still has application
   * associations. If <code>true</code>, the operation removes the application and
   * its associations. If <code>false</code> or absent, the delete fails when
   * associations exist.</p>  <p>Setting this parameter to
   * <code>true</code> permanently removes all of the application's associations.
   * Doing so might impact other resources that rely on and reference the
   * application. This action can't be undone.</p>
   */
  inline bool GetForce() const { return m_force; }
  inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
  inline void SetForce(bool value) {
    m_forceHasBeenSet = true;
    m_force = value;
  }
  inline DeleteApplicationRequest& WithForce(bool value) {
    SetForce(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  bool m_force{false};
  bool m_arnHasBeenSet = false;
  bool m_forceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
