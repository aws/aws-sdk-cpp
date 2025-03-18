﻿/**
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

  class GreetingStruct
  {
  public:
    AWS_RESTXMLPROTOCOL_API GreetingStruct() = default;
    AWS_RESTXMLPROTOCOL_API GreetingStruct(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API GreetingStruct& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetHi() const { return m_hi; }
    inline bool HiHasBeenSet() const { return m_hiHasBeenSet; }
    template<typename HiT = Aws::String>
    void SetHi(HiT&& value) { m_hiHasBeenSet = true; m_hi = std::forward<HiT>(value); }
    template<typename HiT = Aws::String>
    GreetingStruct& WithHi(HiT&& value) { SetHi(std::forward<HiT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hi;
    bool m_hiHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
