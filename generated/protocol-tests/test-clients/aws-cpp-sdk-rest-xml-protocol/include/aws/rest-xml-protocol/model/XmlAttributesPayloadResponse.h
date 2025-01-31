/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RestXmlProtocol
{
namespace Model
{

  class XmlAttributesPayloadResponse
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlAttributesPayloadResponse();
    AWS_RESTXMLPROTOCOL_API XmlAttributesPayloadResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API XmlAttributesPayloadResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline XmlAttributesPayloadResponse& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline XmlAttributesPayloadResponse& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline XmlAttributesPayloadResponse& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAttr() const{ return m_attr; }
    inline bool AttrHasBeenSet() const { return m_attrHasBeenSet; }
    inline void SetAttr(const Aws::String& value) { m_attrHasBeenSet = true; m_attr = value; }
    inline void SetAttr(Aws::String&& value) { m_attrHasBeenSet = true; m_attr = std::move(value); }
    inline void SetAttr(const char* value) { m_attrHasBeenSet = true; m_attr.assign(value); }
    inline XmlAttributesPayloadResponse& WithAttr(const Aws::String& value) { SetAttr(value); return *this;}
    inline XmlAttributesPayloadResponse& WithAttr(Aws::String&& value) { SetAttr(std::move(value)); return *this;}
    inline XmlAttributesPayloadResponse& WithAttr(const char* value) { SetAttr(value); return *this;}
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
