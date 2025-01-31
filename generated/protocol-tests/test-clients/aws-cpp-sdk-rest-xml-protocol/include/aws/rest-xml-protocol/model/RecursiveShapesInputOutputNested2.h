/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
  class RecursiveShapesInputOutputNested1;

  class RecursiveShapesInputOutputNested2
  {
  public:
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2();
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetBar() const{ return m_bar; }
    inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
    inline void SetBar(const Aws::String& value) { m_barHasBeenSet = true; m_bar = value; }
    inline void SetBar(Aws::String&& value) { m_barHasBeenSet = true; m_bar = std::move(value); }
    inline void SetBar(const char* value) { m_barHasBeenSet = true; m_bar.assign(value); }
    inline RecursiveShapesInputOutputNested2& WithBar(const Aws::String& value) { SetBar(value); return *this;}
    inline RecursiveShapesInputOutputNested2& WithBar(Aws::String&& value) { SetBar(std::move(value)); return *this;}
    inline RecursiveShapesInputOutputNested2& WithBar(const char* value) { SetBar(value); return *this;}
    ///@}

    ///@{
    
    AWS_RESTXMLPROTOCOL_API const RecursiveShapesInputOutputNested1& GetRecursiveMember() const;
    AWS_RESTXMLPROTOCOL_API bool RecursiveMemberHasBeenSet() const;
    AWS_RESTXMLPROTOCOL_API void SetRecursiveMember(const RecursiveShapesInputOutputNested1& value);
    AWS_RESTXMLPROTOCOL_API void SetRecursiveMember(RecursiveShapesInputOutputNested1&& value);
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2& WithRecursiveMember(const RecursiveShapesInputOutputNested1& value);
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested2& WithRecursiveMember(RecursiveShapesInputOutputNested1&& value);
    ///@}
  private:

    Aws::String m_bar;
    bool m_barHasBeenSet = false;

    std::shared_ptr<RecursiveShapesInputOutputNested1> m_recursiveMember;
    bool m_recursiveMemberHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
