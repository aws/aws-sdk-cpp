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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_SES_API AddHeaderAction
  {
  public:
    AddHeaderAction();
    AddHeaderAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AddHeaderAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    
    inline AddHeaderAction& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    
    inline AddHeaderAction& WithHeaderName(Aws::String&& value) { SetHeaderName(value); return *this;}

    
    inline AddHeaderAction& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}

    
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }

    
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }

    
    inline AddHeaderAction& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}

    
    inline AddHeaderAction& WithHeaderValue(Aws::String&& value) { SetHeaderValue(value); return *this;}

    
    inline AddHeaderAction& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}

  private:
    Aws::String m_headerName;
    bool m_headerNameHasBeenSet;
    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
