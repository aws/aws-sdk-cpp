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
#include <aws/email/model/ReceiptFilterPolicy.h>
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
  class AWS_SES_API ReceiptIpFilter
  {
  public:
    ReceiptIpFilter();
    ReceiptIpFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptIpFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const ReceiptFilterPolicy& GetPolicy() const{ return m_policy; }

    
    inline void SetPolicy(const ReceiptFilterPolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    
    inline void SetPolicy(ReceiptFilterPolicy&& value) { m_policyHasBeenSet = true; m_policy = value; }

    
    inline ReceiptIpFilter& WithPolicy(const ReceiptFilterPolicy& value) { SetPolicy(value); return *this;}

    
    inline ReceiptIpFilter& WithPolicy(ReceiptFilterPolicy&& value) { SetPolicy(value); return *this;}

    
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    
    inline ReceiptIpFilter& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    
    inline ReceiptIpFilter& WithCidr(Aws::String&& value) { SetCidr(value); return *this;}

    
    inline ReceiptIpFilter& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:
    ReceiptFilterPolicy m_policy;
    bool m_policyHasBeenSet;
    Aws::String m_cidr;
    bool m_cidrHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
