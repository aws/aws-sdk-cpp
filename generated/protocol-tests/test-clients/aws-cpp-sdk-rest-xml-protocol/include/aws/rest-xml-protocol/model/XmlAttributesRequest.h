/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
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
  class XmlAttributesRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlAttributes"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline XmlAttributesRequest& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline XmlAttributesRequest& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline XmlAttributesRequest& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAttr() const{ return m_attr; }
    inline bool AttrHasBeenSet() const { return m_attrHasBeenSet; }
    inline void SetAttr(const Aws::String& value) { m_attrHasBeenSet = true; m_attr = value; }
    inline void SetAttr(Aws::String&& value) { m_attrHasBeenSet = true; m_attr = std::move(value); }
    inline void SetAttr(const char* value) { m_attrHasBeenSet = true; m_attr.assign(value); }
    inline XmlAttributesRequest& WithAttr(const Aws::String& value) { SetAttr(value); return *this;}
    inline XmlAttributesRequest& WithAttr(Aws::String&& value) { SetAttr(std::move(value)); return *this;}
    inline XmlAttributesRequest& WithAttr(const char* value) { SetAttr(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::String m_attr;
    bool m_attrHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
