/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace JsonProtocol
{
namespace Model
{

  /**
   */
  class NullOperationRequest : public JsonProtocolRequest
  {
  public:
    AWS_JSONPROTOCOL_API NullOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NullOperation"; }

    AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetString() const{ return m_string; }
    inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
    inline void SetString(const Aws::String& value) { m_stringHasBeenSet = true; m_string = value; }
    inline void SetString(Aws::String&& value) { m_stringHasBeenSet = true; m_string = std::move(value); }
    inline void SetString(const char* value) { m_stringHasBeenSet = true; m_string.assign(value); }
    inline NullOperationRequest& WithString(const Aws::String& value) { SetString(value); return *this;}
    inline NullOperationRequest& WithString(Aws::String&& value) { SetString(std::move(value)); return *this;}
    inline NullOperationRequest& WithString(const char* value) { SetString(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline NullOperationRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NullOperationRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NullOperationRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_string;
    bool m_stringHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
