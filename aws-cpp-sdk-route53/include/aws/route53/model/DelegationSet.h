/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that lists the name servers in a delegation set, as well as
   * the <code>CallerReference</code> and the <code>ID</code> for the delegation
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DelegationSet">AWS
   * API Reference</a></p>
   */
  class DelegationSet
  {
  public:
    AWS_ROUTE53_API DelegationSet();
    AWS_ROUTE53_API DelegationSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API DelegationSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

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
    inline DelegationSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Amazon Route 53 assigns to a reusable delegation set.</p>
     */
    inline DelegationSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline DelegationSet& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline DelegationSet& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>The value that you specified for <code>CallerReference</code> when you
     * created the reusable delegation set.</p>
     */
    inline DelegationSet& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNameServers() const{ return m_nameServers; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline bool NameServersHasBeenSet() const { return m_nameServersHasBeenSet; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline void SetNameServers(const Aws::Vector<Aws::String>& value) { m_nameServersHasBeenSet = true; m_nameServers = value; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline void SetNameServers(Aws::Vector<Aws::String>&& value) { m_nameServersHasBeenSet = true; m_nameServers = std::move(value); }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline DelegationSet& WithNameServers(const Aws::Vector<Aws::String>& value) { SetNameServers(value); return *this;}

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline DelegationSet& WithNameServers(Aws::Vector<Aws::String>&& value) { SetNameServers(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline DelegationSet& AddNameServers(const Aws::String& value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline DelegationSet& AddNameServers(Aws::String&& value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(std::move(value)); return *this; }

    /**
     * <p>A complex type that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline DelegationSet& AddNameServers(const char* value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

    Aws::Vector<Aws::String> m_nameServers;
    bool m_nameServersHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
