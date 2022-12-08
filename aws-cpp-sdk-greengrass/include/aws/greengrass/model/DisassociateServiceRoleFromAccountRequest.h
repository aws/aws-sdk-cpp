/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class DisassociateServiceRoleFromAccountRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API DisassociateServiceRoleFromAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateServiceRoleFromAccount"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
