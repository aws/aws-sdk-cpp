﻿/*
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
   * <p>A complex type that describes the name servers for this hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DelegationSet">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API DelegationSet
  {
  public:
    DelegationSet();
    DelegationSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    DelegationSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline DelegationSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline DelegationSet& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline DelegationSet& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
    inline DelegationSet& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
    inline DelegationSet& WithCallerReference(Aws::String&& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique string that identifies the request, and that allows you to retry
     * failed <code>CreateReusableDelegationSet</code> requests without the risk of
     * executing the operation twice. You must use a unique
     * <code>CallerReference</code> string every time you submit a
     * <code>CreateReusableDelegationSet</code> request. <code>CallerReference</code>
     * can be any unique string, for example, a date/time stamp.</p>
     */
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
