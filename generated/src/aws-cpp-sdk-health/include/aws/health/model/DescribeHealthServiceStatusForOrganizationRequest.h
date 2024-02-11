/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class DescribeHealthServiceStatusForOrganizationRequest : public HealthRequest
  {
  public:
    AWS_HEALTH_API DescribeHealthServiceStatusForOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHealthServiceStatusForOrganization"; }

    AWS_HEALTH_API Aws::String SerializePayload() const override;

    AWS_HEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace Health
} // namespace Aws
