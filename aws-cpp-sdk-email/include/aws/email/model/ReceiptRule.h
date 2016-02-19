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
#include <aws/email/model/TlsPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ReceiptAction.h>

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

  class AWS_SES_API ReceiptRule
  {
  public:
    ReceiptRule();
    ReceiptRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReceiptRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ReceiptRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ReceiptRule& WithName(Aws::String&& value) { SetName(value); return *this;}

    
    inline ReceiptRule& WithName(const char* value) { SetName(value); return *this;}

    
    inline bool GetEnabled() const{ return m_enabled; }

    
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    
    inline ReceiptRule& WithEnabled(bool value) { SetEnabled(value); return *this;}

    
    inline bool GetStop() const{ return m_stop; }

    
    inline void SetStop(bool value) { m_stopHasBeenSet = true; m_stop = value; }

    
    inline ReceiptRule& WithStop(bool value) { SetStop(value); return *this;}

    
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    
    inline ReceiptRule& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    
    inline ReceiptRule& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }

    
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domainsHasBeenSet = true; m_domains = value; }

    
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domainsHasBeenSet = true; m_domains = value; }

    
    inline ReceiptRule& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}

    
    inline ReceiptRule& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(value); return *this;}

    
    inline ReceiptRule& AddDomains(const Aws::String& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    
    inline ReceiptRule& AddDomains(Aws::String&& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    
    inline ReceiptRule& AddDomains(const char* value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetRecipients() const{ return m_recipients; }

    
    inline void SetRecipients(const Aws::Vector<Aws::String>& value) { m_recipientsHasBeenSet = true; m_recipients = value; }

    
    inline void SetRecipients(Aws::Vector<Aws::String>&& value) { m_recipientsHasBeenSet = true; m_recipients = value; }

    
    inline ReceiptRule& WithRecipients(const Aws::Vector<Aws::String>& value) { SetRecipients(value); return *this;}

    
    inline ReceiptRule& WithRecipients(Aws::Vector<Aws::String>&& value) { SetRecipients(value); return *this;}

    
    inline ReceiptRule& AddRecipients(const Aws::String& value) { m_recipientsHasBeenSet = true; m_recipients.push_back(value); return *this; }

    
    inline ReceiptRule& AddRecipients(Aws::String&& value) { m_recipientsHasBeenSet = true; m_recipients.push_back(value); return *this; }

    
    inline ReceiptRule& AddRecipients(const char* value) { m_recipientsHasBeenSet = true; m_recipients.push_back(value); return *this; }

    
    inline const Aws::Vector<ReceiptAction>& GetActions() const{ return m_actions; }

    
    inline void SetActions(const Aws::Vector<ReceiptAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    
    inline void SetActions(Aws::Vector<ReceiptAction>&& value) { m_actionsHasBeenSet = true; m_actions = value; }

    
    inline ReceiptRule& WithActions(const Aws::Vector<ReceiptAction>& value) { SetActions(value); return *this;}

    
    inline ReceiptRule& WithActions(Aws::Vector<ReceiptAction>&& value) { SetActions(value); return *this;}

    
    inline ReceiptRule& AddActions(const ReceiptAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    
    inline ReceiptRule& AddActions(ReceiptAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    
    inline bool GetScanEnabled() const{ return m_scanEnabled; }

    
    inline void SetScanEnabled(bool value) { m_scanEnabledHasBeenSet = true; m_scanEnabled = value; }

    
    inline ReceiptRule& WithScanEnabled(bool value) { SetScanEnabled(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    bool m_enabled;
    bool m_enabledHasBeenSet;
    bool m_stop;
    bool m_stopHasBeenSet;
    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet;
    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet;
    Aws::Vector<Aws::String> m_recipients;
    bool m_recipientsHasBeenSet;
    Aws::Vector<ReceiptAction> m_actions;
    bool m_actionsHasBeenSet;
    bool m_scanEnabled;
    bool m_scanEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
