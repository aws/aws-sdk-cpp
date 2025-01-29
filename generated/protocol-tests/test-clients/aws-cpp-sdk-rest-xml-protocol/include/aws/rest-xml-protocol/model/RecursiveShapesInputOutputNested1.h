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

  class RecursiveShapesInputOutputNested1
  {
  public:
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested1();
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested1(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested1& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline RecursiveShapesInputOutputNested1& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline RecursiveShapesInputOutputNested1& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline RecursiveShapesInputOutputNested1& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    AWS_RESTXMLPROTOCOL_API const RecursiveShapesInputOutputNested2& GetNested() const;
    AWS_RESTXMLPROTOCOL_API bool NestedHasBeenSet() const;
    AWS_RESTXMLPROTOCOL_API void SetNested(const RecursiveShapesInputOutputNested2& value);
    AWS_RESTXMLPROTOCOL_API void SetNested(RecursiveShapesInputOutputNested2&& value);
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested1& WithNested(const RecursiveShapesInputOutputNested2& value);
    AWS_RESTXMLPROTOCOL_API RecursiveShapesInputOutputNested1& WithNested(RecursiveShapesInputOutputNested2&& value);
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    std::shared_ptr<RecursiveShapesInputOutputNested2> m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
