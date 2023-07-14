/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/Array.h>
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
namespace EC2
{
namespace Model
{

  class AWS_EC2_API BlobAttributeValue
  {
  public:
    BlobAttributeValue();
    BlobAttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    BlobAttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::Utils::ByteBuffer& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const Aws::Utils::ByteBuffer& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(Aws::Utils::ByteBuffer&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline BlobAttributeValue& WithValue(const Aws::Utils::ByteBuffer& value) { SetValue(value); return *this;}

    
    inline BlobAttributeValue& WithValue(Aws::Utils::ByteBuffer&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
