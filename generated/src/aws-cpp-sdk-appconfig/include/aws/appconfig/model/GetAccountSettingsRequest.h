/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class GetAccountSettingsRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API GetAccountSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountSettings"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
