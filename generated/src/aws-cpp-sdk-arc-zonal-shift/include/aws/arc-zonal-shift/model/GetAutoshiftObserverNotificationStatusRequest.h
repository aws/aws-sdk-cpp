/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/ARCZonalShiftRequest.h>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

  /**
   */
  class GetAutoshiftObserverNotificationStatusRequest : public ARCZonalShiftRequest
  {
  public:
    AWS_ARCZONALSHIFT_API GetAutoshiftObserverNotificationStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutoshiftObserverNotificationStatus"; }

    AWS_ARCZONALSHIFT_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
