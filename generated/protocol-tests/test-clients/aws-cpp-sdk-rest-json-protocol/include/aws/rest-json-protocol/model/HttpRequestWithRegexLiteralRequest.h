/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class HttpRequestWithRegexLiteralRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpRequestWithRegexLiteralRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "HttpRequestWithRegexLiteral"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetStr() const{ return m_str; }
    inline bool StrHasBeenSet() const { return m_strHasBeenSet; }
    inline void SetStr(const Aws::String& value) { m_strHasBeenSet = true; m_str = value; }
    inline void SetStr(Aws::String&& value) { m_strHasBeenSet = true; m_str = std::move(value); }
    inline void SetStr(const char* value) { m_strHasBeenSet = true; m_str.assign(value); }
    inline HttpRequestWithRegexLiteralRequest& WithStr(const Aws::String& value) { SetStr(value); return *this;}
    inline HttpRequestWithRegexLiteralRequest& WithStr(Aws::String&& value) { SetStr(std::move(value)); return *this;}
    inline HttpRequestWithRegexLiteralRequest& WithStr(const char* value) { SetStr(value); return *this;}
    ///@}
  private:

    Aws::String m_str;
    bool m_strHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
