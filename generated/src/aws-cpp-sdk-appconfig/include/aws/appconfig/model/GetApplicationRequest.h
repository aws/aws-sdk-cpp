﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class GetApplicationRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API GetApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplication"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application you want to get.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetApplicationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
