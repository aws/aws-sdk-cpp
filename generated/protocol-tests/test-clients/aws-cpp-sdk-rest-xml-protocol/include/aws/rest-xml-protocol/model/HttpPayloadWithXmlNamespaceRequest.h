/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/model/PayloadWithXmlNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class HttpPayloadWithXmlNamespaceRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPayloadWithXmlNamespaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "HttpPayloadWithXmlNamespace"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const PayloadWithXmlNamespace& GetNested() const{ return m_nested; }
    inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
    inline void SetNested(const PayloadWithXmlNamespace& value) { m_nestedHasBeenSet = true; m_nested = value; }
    inline void SetNested(PayloadWithXmlNamespace&& value) { m_nestedHasBeenSet = true; m_nested = std::move(value); }
    inline HttpPayloadWithXmlNamespaceRequest& WithNested(const PayloadWithXmlNamespace& value) { SetNested(value); return *this;}
    inline HttpPayloadWithXmlNamespaceRequest& WithNested(PayloadWithXmlNamespace&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline HttpPayloadWithXmlNamespaceRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpPayloadWithXmlNamespaceRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpPayloadWithXmlNamespaceRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PayloadWithXmlNamespace m_nested;
    bool m_nestedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
