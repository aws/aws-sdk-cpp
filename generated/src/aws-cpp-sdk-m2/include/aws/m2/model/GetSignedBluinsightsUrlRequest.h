/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class GetSignedBluinsightsUrlRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSignedBluinsightsUrl"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
