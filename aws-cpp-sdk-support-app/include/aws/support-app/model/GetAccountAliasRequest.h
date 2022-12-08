/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppRequest.h>

namespace Aws
{
namespace SupportApp
{
namespace Model
{

  /**
   */
  class GetAccountAliasRequest : public SupportAppRequest
  {
  public:
    AWS_SUPPORTAPP_API GetAccountAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountAlias"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
