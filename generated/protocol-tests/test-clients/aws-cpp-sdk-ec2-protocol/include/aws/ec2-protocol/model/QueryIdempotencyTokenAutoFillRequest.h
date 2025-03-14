﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/EC2ProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2Protocol
{
namespace Model
{

  /**
   */
  class QueryIdempotencyTokenAutoFillRequest : public EC2ProtocolRequest
  {
  public:
    AWS_EC2PROTOCOL_API QueryIdempotencyTokenAutoFillRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryIdempotencyTokenAutoFill"; }

    AWS_EC2PROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2PROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline QueryIdempotencyTokenAutoFillRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline QueryIdempotencyTokenAutoFillRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline QueryIdempotencyTokenAutoFillRequest& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}
  private:

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
