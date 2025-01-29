/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
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
namespace EC2Protocol
{
namespace Model
{

  class RecursiveXmlShapesOutputNested2
  {
  public:
    AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested2();
    AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested2(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested2& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetBar() const{ return m_bar; }
    inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
    inline void SetBar(const Aws::String& value) { m_barHasBeenSet = true; m_bar = value; }
    inline void SetBar(Aws::String&& value) { m_barHasBeenSet = true; m_bar = std::move(value); }
    inline void SetBar(const char* value) { m_barHasBeenSet = true; m_bar.assign(value); }
    inline RecursiveXmlShapesOutputNested2& WithBar(const Aws::String& value) { SetBar(value); return *this;}
    inline RecursiveXmlShapesOutputNested2& WithBar(Aws::String&& value) { SetBar(std::move(value)); return *this;}
    inline RecursiveXmlShapesOutputNested2& WithBar(const char* value) { SetBar(value); return *this;}
    ///@}

    ///@{
    
    AWS_EC2PROTOCOL_API const RecursiveXmlShapesOutputNested1& GetRecursiveMember() const;
    AWS_EC2PROTOCOL_API bool RecursiveMemberHasBeenSet() const;
    AWS_EC2PROTOCOL_API void SetRecursiveMember(const RecursiveXmlShapesOutputNested1& value);
    AWS_EC2PROTOCOL_API void SetRecursiveMember(RecursiveXmlShapesOutputNested1&& value);
    AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested2& WithRecursiveMember(const RecursiveXmlShapesOutputNested1& value);
    AWS_EC2PROTOCOL_API RecursiveXmlShapesOutputNested2& WithRecursiveMember(RecursiveXmlShapesOutputNested1&& value);
    ///@}
  private:

    Aws::String m_bar;
    bool m_barHasBeenSet = false;

    std::shared_ptr<RecursiveXmlShapesOutputNested1> m_recursiveMember;
    bool m_recursiveMemberHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
