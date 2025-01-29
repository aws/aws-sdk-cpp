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

  class PayloadWithXmlNamespace
  {
  public:
    AWS_RESTXMLPROTOCOL_API PayloadWithXmlNamespace();
    AWS_RESTXMLPROTOCOL_API PayloadWithXmlNamespace(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API PayloadWithXmlNamespace& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PayloadWithXmlNamespace& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PayloadWithXmlNamespace& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PayloadWithXmlNamespace& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
