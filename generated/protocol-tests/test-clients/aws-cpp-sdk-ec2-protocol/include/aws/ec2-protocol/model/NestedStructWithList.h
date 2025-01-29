/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EC2Protocol
{
namespace Model
{

  class NestedStructWithList
  {
  public:
    AWS_EC2PROTOCOL_API NestedStructWithList();
    AWS_EC2PROTOCOL_API NestedStructWithList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2PROTOCOL_API NestedStructWithList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2PROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListArg() const{ return m_listArg; }
    inline bool ListArgHasBeenSet() const { return m_listArgHasBeenSet; }
    inline void SetListArg(const Aws::Vector<Aws::String>& value) { m_listArgHasBeenSet = true; m_listArg = value; }
    inline void SetListArg(Aws::Vector<Aws::String>&& value) { m_listArgHasBeenSet = true; m_listArg = std::move(value); }
    inline NestedStructWithList& WithListArg(const Aws::Vector<Aws::String>& value) { SetListArg(value); return *this;}
    inline NestedStructWithList& WithListArg(Aws::Vector<Aws::String>&& value) { SetListArg(std::move(value)); return *this;}
    inline NestedStructWithList& AddListArg(const Aws::String& value) { m_listArgHasBeenSet = true; m_listArg.push_back(value); return *this; }
    inline NestedStructWithList& AddListArg(Aws::String&& value) { m_listArgHasBeenSet = true; m_listArg.push_back(std::move(value)); return *this; }
    inline NestedStructWithList& AddListArg(const char* value) { m_listArgHasBeenSet = true; m_listArg.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_listArg;
    bool m_listArgHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
