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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that describes the name servers for this hosted zone.</p>
   */
  class AWS_ROUTE53_API DelegationSet
  {
  public:
    DelegationSet();
    DelegationSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    DelegationSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline DelegationSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline DelegationSet& WithId(Aws::String&& value) { SetId(value); return *this;}

    
    inline DelegationSet& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    
    inline DelegationSet& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    
    inline DelegationSet& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    
    inline DelegationSet& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNameServers() const{ return m_nameServers; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline void SetNameServers(const Aws::Vector<Aws::String>& value) { m_nameServersHasBeenSet = true; m_nameServers = value; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline void SetNameServers(Aws::Vector<Aws::String>&& value) { m_nameServersHasBeenSet = true; m_nameServers = value; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline DelegationSet& WithNameServers(const Aws::Vector<Aws::String>& value) { SetNameServers(value); return *this;}

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline DelegationSet& WithNameServers(Aws::Vector<Aws::String>&& value) { SetNameServers(value); return *this;}

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline DelegationSet& AddNameServers(const Aws::String& value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline DelegationSet& AddNameServers(Aws::String&& value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for the
     * hosted zone.</p>
     */
    inline DelegationSet& AddNameServers(const char* value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;
    Aws::Vector<Aws::String> m_nameServers;
    bool m_nameServersHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
