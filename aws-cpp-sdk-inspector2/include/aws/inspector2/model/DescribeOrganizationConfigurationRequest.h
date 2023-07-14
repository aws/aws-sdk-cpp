﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR2_API DescribeOrganizationConfigurationRequest : public Inspector2Request
  {
  public:
    DescribeOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrganizationConfiguration"; }

    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
