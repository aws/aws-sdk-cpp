/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class QueryIdempotencyTokenAutoFillRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API QueryIdempotencyTokenAutoFillRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryIdempotencyTokenAutoFill"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
} // namespace QueryProtocol
} // namespace Aws
