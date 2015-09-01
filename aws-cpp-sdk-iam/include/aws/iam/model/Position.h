/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_IAM_API Position
  {
  public:
    Position();
    Position(const Aws::Utils::Xml::XmlNode& xmlNode);
    Position& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline long GetLine() const{ return m_line; }

    
    inline void SetLine(long value) { m_lineHasBeenSet = true; m_line = value; }

    
    inline Position& WithLine(long value) { SetLine(value); return *this;}

    
    inline long GetColumn() const{ return m_column; }

    
    inline void SetColumn(long value) { m_columnHasBeenSet = true; m_column = value; }

    
    inline Position& WithColumn(long value) { SetColumn(value); return *this;}

  private:
    long m_line;
    bool m_lineHasBeenSet;
    long m_column;
    bool m_columnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
