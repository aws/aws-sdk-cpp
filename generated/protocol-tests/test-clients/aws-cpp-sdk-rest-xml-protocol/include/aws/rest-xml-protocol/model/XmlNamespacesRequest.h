/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/model/XmlNamespaceNested.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class XmlNamespacesRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlNamespacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlNamespaces"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const XmlNamespaceNested& GetNested() const{ return m_nested; }
    inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
    inline void SetNested(const XmlNamespaceNested& value) { m_nestedHasBeenSet = true; m_nested = value; }
    inline void SetNested(XmlNamespaceNested&& value) { m_nestedHasBeenSet = true; m_nested = std::move(value); }
    inline XmlNamespacesRequest& WithNested(const XmlNamespaceNested& value) { SetNested(value); return *this;}
    inline XmlNamespacesRequest& WithNested(XmlNamespaceNested&& value) { SetNested(std::move(value)); return *this;}
    ///@}
  private:

    XmlNamespaceNested m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
