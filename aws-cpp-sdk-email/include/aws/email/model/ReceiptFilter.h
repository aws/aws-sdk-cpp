/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/ReceiptIpFilter.h>

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

  class AWS_SES_API ReceiptFilter
  {
  public:
    ReceiptFilter();
    ReceiptFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ReceiptFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ReceiptFilter& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline ReceiptFilter& WithName(const char* value) { SetName(value); return *this;}

    
    inline const ReceiptIpFilter& GetIpFilter() const{ return m_ipFilter; }

    
    inline void SetIpFilter(const ReceiptIpFilter& value) { m_ipFilterHasBeenSet = true; m_ipFilter = value; }

    
    inline void SetIpFilter(ReceiptIpFilter&& value) { m_ipFilterHasBeenSet = true; m_ipFilter = value; }

    
    inline ReceiptFilter& WithIpFilter(const ReceiptIpFilter& value) { SetIpFilter(value); return *this;}

    
    inline ReceiptFilter& WithIpFilter(ReceiptIpFilter&& value) { SetIpFilter(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ReceiptIpFilter m_ipFilter;
    bool m_ipFilterHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
