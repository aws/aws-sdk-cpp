﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class DatetimeOffsetsRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API DatetimeOffsetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DatetimeOffsets"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
