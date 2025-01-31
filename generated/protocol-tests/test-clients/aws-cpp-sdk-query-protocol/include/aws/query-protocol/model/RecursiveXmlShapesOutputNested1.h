/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace QueryProtocol
{
namespace Model
{
  class RecursiveXmlShapesOutputNested2;

  class RecursiveXmlShapesOutputNested1
  {
  public:
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested1();
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested1(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested1& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline RecursiveXmlShapesOutputNested1& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline RecursiveXmlShapesOutputNested1& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline RecursiveXmlShapesOutputNested1& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    AWS_QUERYPROTOCOL_API const RecursiveXmlShapesOutputNested2& GetNested() const;
    AWS_QUERYPROTOCOL_API bool NestedHasBeenSet() const;
    AWS_QUERYPROTOCOL_API void SetNested(const RecursiveXmlShapesOutputNested2& value);
    AWS_QUERYPROTOCOL_API void SetNested(RecursiveXmlShapesOutputNested2&& value);
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested1& WithNested(const RecursiveXmlShapesOutputNested2& value);
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested1& WithNested(RecursiveXmlShapesOutputNested2&& value);
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    std::shared_ptr<RecursiveXmlShapesOutputNested2> m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
