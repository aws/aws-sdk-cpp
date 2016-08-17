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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/DomainSummary.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ListDomains response includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API ListDomainsResult
  {
  public:
    ListDomainsResult();
    ListDomainsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDomainsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline const Aws::Vector<DomainSummary>& GetDomains() const{ return m_domains; }

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline void SetDomains(const Aws::Vector<DomainSummary>& value) { m_domains = value; }

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline void SetDomains(Aws::Vector<DomainSummary>&& value) { m_domains = value; }

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline ListDomainsResult& WithDomains(const Aws::Vector<DomainSummary>& value) { SetDomains(value); return *this;}

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline ListDomainsResult& WithDomains(Aws::Vector<DomainSummary>&& value) { SetDomains(value); return *this;}

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline ListDomainsResult& AddDomains(const DomainSummary& value) { m_domains.push_back(value); return *this; }

    /**
     * <p>A summary of domains.</p> <p>Type: Complex type containing a list of domain
     * summaries.</p> <p>Children: <code>AutoRenew</code>, <code>DomainName</code>,
     * <code>Expiry</code>, <code>TransferLock</code></p>
     */
    inline ListDomainsResult& AddDomains(DomainSummary&& value) { m_domains.push_back(value); return *this; }

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline const Aws::String& GetNextPageMarker() const{ return m_nextPageMarker; }

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline void SetNextPageMarker(const Aws::String& value) { m_nextPageMarker = value; }

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline void SetNextPageMarker(Aws::String&& value) { m_nextPageMarker = value; }

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline void SetNextPageMarker(const char* value) { m_nextPageMarker.assign(value); }

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline ListDomainsResult& WithNextPageMarker(const Aws::String& value) { SetNextPageMarker(value); return *this;}

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline ListDomainsResult& WithNextPageMarker(Aws::String&& value) { SetNextPageMarker(value); return *this;}

    /**
     * <p>If there are more domains than you specified for <code>MaxItems</code> in the
     * request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p> <p>Type:
     * String</p> <p>Parent: <code>Operations</code></p>
     */
    inline ListDomainsResult& WithNextPageMarker(const char* value) { SetNextPageMarker(value); return *this;}

  private:
    Aws::Vector<DomainSummary> m_domains;
    Aws::String m_nextPageMarker;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
