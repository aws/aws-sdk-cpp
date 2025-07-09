/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/FreeTierRequest.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{

  /**
   */
  class GetAccountPlanStateRequest : public FreeTierRequest
  {
  public:
    AWS_FREETIER_API GetAccountPlanStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountPlanState"; }

    AWS_FREETIER_API Aws::String SerializePayload() const override;

    AWS_FREETIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
