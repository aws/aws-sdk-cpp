/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/model/StringEnum.h>
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
  class HttpEnumPayloadRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpEnumPayloadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "HttpEnumPayload"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const StringEnum& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const StringEnum& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(StringEnum&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline HttpEnumPayloadRequest& WithPayload(const StringEnum& value) { SetPayload(value); return *this;}
    inline HttpEnumPayloadRequest& WithPayload(StringEnum&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline HttpEnumPayloadRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpEnumPayloadRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpEnumPayloadRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    StringEnum m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
