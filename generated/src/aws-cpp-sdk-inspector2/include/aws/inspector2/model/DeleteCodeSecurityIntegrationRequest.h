/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class DeleteCodeSecurityIntegrationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API DeleteCodeSecurityIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCodeSecurityIntegration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the code security integration to
     * delete.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    DeleteCodeSecurityIntegrationRequest& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
