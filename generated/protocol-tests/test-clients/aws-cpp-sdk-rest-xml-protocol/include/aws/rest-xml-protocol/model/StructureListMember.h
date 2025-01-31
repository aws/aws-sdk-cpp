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

  class StructureListMember
  {
  public:
    AWS_RESTXMLPROTOCOL_API StructureListMember();
    AWS_RESTXMLPROTOCOL_API StructureListMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API StructureListMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetA() const{ return m_a; }
    inline bool AHasBeenSet() const { return m_aHasBeenSet; }
    inline void SetA(const Aws::String& value) { m_aHasBeenSet = true; m_a = value; }
    inline void SetA(Aws::String&& value) { m_aHasBeenSet = true; m_a = std::move(value); }
    inline void SetA(const char* value) { m_aHasBeenSet = true; m_a.assign(value); }
    inline StructureListMember& WithA(const Aws::String& value) { SetA(value); return *this;}
    inline StructureListMember& WithA(Aws::String&& value) { SetA(std::move(value)); return *this;}
    inline StructureListMember& WithA(const char* value) { SetA(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetB() const{ return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    inline void SetB(const Aws::String& value) { m_bHasBeenSet = true; m_b = value; }
    inline void SetB(Aws::String&& value) { m_bHasBeenSet = true; m_b = std::move(value); }
    inline void SetB(const char* value) { m_bHasBeenSet = true; m_b.assign(value); }
    inline StructureListMember& WithB(const Aws::String& value) { SetB(value); return *this;}
    inline StructureListMember& WithB(Aws::String&& value) { SetB(std::move(value)); return *this;}
    inline StructureListMember& WithB(const char* value) { SetB(value); return *this;}
    ///@}
  private:

    Aws::String m_a;
    bool m_aHasBeenSet = false;

    Aws::String m_b;
    bool m_bHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
