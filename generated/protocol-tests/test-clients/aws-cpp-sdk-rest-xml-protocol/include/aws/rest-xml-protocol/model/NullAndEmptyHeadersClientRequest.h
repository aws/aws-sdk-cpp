/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class NullAndEmptyHeadersClientRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API NullAndEmptyHeadersClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NullAndEmptyHeadersClient"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetA() const{ return m_a; }
    inline bool AHasBeenSet() const { return m_aHasBeenSet; }
    inline void SetA(const Aws::String& value) { m_aHasBeenSet = true; m_a = value; }
    inline void SetA(Aws::String&& value) { m_aHasBeenSet = true; m_a = std::move(value); }
    inline void SetA(const char* value) { m_aHasBeenSet = true; m_a.assign(value); }
    inline NullAndEmptyHeadersClientRequest& WithA(const Aws::String& value) { SetA(value); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithA(Aws::String&& value) { SetA(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithA(const char* value) { SetA(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetB() const{ return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    inline void SetB(const Aws::String& value) { m_bHasBeenSet = true; m_b = value; }
    inline void SetB(Aws::String&& value) { m_bHasBeenSet = true; m_b = std::move(value); }
    inline void SetB(const char* value) { m_bHasBeenSet = true; m_b.assign(value); }
    inline NullAndEmptyHeadersClientRequest& WithB(const Aws::String& value) { SetB(value); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithB(Aws::String&& value) { SetB(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithB(const char* value) { SetB(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetC() const{ return m_c; }
    inline bool CHasBeenSet() const { return m_cHasBeenSet; }
    inline void SetC(const Aws::Vector<Aws::String>& value) { m_cHasBeenSet = true; m_c = value; }
    inline void SetC(Aws::Vector<Aws::String>&& value) { m_cHasBeenSet = true; m_c = std::move(value); }
    inline NullAndEmptyHeadersClientRequest& WithC(const Aws::Vector<Aws::String>& value) { SetC(value); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithC(Aws::Vector<Aws::String>&& value) { SetC(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientRequest& AddC(const Aws::String& value) { m_cHasBeenSet = true; m_c.push_back(value); return *this; }
    inline NullAndEmptyHeadersClientRequest& AddC(Aws::String&& value) { m_cHasBeenSet = true; m_c.push_back(std::move(value)); return *this; }
    inline NullAndEmptyHeadersClientRequest& AddC(const char* value) { m_cHasBeenSet = true; m_c.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline NullAndEmptyHeadersClientRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NullAndEmptyHeadersClientRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_a;
    bool m_aHasBeenSet = false;

    Aws::String m_b;
    bool m_bHasBeenSet = false;

    Aws::Vector<Aws::String> m_c;
    bool m_cHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
