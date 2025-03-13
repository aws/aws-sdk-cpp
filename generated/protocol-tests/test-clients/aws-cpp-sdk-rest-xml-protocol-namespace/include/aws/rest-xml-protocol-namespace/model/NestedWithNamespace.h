/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespace_EXPORTS.h>
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
namespace RestXmlProtocolNamespace
{
namespace Model
{

  class NestedWithNamespace
  {
  public:
    AWS_RESTXMLPROTOCOLNAMESPACE_API NestedWithNamespace() = default;
    AWS_RESTXMLPROTOCOLNAMESPACE_API NestedWithNamespace(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOLNAMESPACE_API NestedWithNamespace& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOLNAMESPACE_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetAttrField() const { return m_attrField; }
    inline bool AttrFieldHasBeenSet() const { return m_attrFieldHasBeenSet; }
    template<typename AttrFieldT = Aws::String>
    void SetAttrField(AttrFieldT&& value) { m_attrFieldHasBeenSet = true; m_attrField = std::forward<AttrFieldT>(value); }
    template<typename AttrFieldT = Aws::String>
    NestedWithNamespace& WithAttrField(AttrFieldT&& value) { SetAttrField(std::forward<AttrFieldT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attrField;
    bool m_attrFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocolNamespace
} // namespace Aws
