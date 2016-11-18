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
#include <aws/route53domains/model/DomainAvailability.h>

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
   * <p>The CheckDomainAvailability response includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult
  {
  public:
    CheckDomainAvailabilityResult();
    CheckDomainAvailabilityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CheckDomainAvailabilityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * only register domains designated as <code>AVAILABLE</code>.</p> </note> <p>Type:
     * String</p> <p>Valid values:</p> <ul> <li><code>AVAILABLE</code> – The domain
     * name is available.</li> <li><code>AVAILABLE_RESERVED</code> – The domain name is
     * reserved under specific conditions.</li> <li><code>AVAILABLE_PREORDER</code> –
     * The domain name is available and can be preordered.</li>
     * <li><code>UNAVAILABLE</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_PREMIUM</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_RESTRICTED</code> – The domain name is forbidden.</li>
     * <li><code>RESERVED</code> – The domain name has been reserved for another person
     * or organization.</li> <li><code>DONT_KNOW</code> – The TLD registry didn't reply
     * with a definitive answer about whether the domain name is available. Amazon
     * Route 53 can return this response for a variety of reasons, for example, the
     * registry is performing maintenance. Try again later.</li> </ul>
     */
    inline const DomainAvailability& GetAvailability() const{ return m_availability; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * only register domains designated as <code>AVAILABLE</code>.</p> </note> <p>Type:
     * String</p> <p>Valid values:</p> <ul> <li><code>AVAILABLE</code> – The domain
     * name is available.</li> <li><code>AVAILABLE_RESERVED</code> – The domain name is
     * reserved under specific conditions.</li> <li><code>AVAILABLE_PREORDER</code> –
     * The domain name is available and can be preordered.</li>
     * <li><code>UNAVAILABLE</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_PREMIUM</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_RESTRICTED</code> – The domain name is forbidden.</li>
     * <li><code>RESERVED</code> – The domain name has been reserved for another person
     * or organization.</li> <li><code>DONT_KNOW</code> – The TLD registry didn't reply
     * with a definitive answer about whether the domain name is available. Amazon
     * Route 53 can return this response for a variety of reasons, for example, the
     * registry is performing maintenance. Try again later.</li> </ul>
     */
    inline void SetAvailability(const DomainAvailability& value) { m_availability = value; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * only register domains designated as <code>AVAILABLE</code>.</p> </note> <p>Type:
     * String</p> <p>Valid values:</p> <ul> <li><code>AVAILABLE</code> – The domain
     * name is available.</li> <li><code>AVAILABLE_RESERVED</code> – The domain name is
     * reserved under specific conditions.</li> <li><code>AVAILABLE_PREORDER</code> –
     * The domain name is available and can be preordered.</li>
     * <li><code>UNAVAILABLE</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_PREMIUM</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_RESTRICTED</code> – The domain name is forbidden.</li>
     * <li><code>RESERVED</code> – The domain name has been reserved for another person
     * or organization.</li> <li><code>DONT_KNOW</code> – The TLD registry didn't reply
     * with a definitive answer about whether the domain name is available. Amazon
     * Route 53 can return this response for a variety of reasons, for example, the
     * registry is performing maintenance. Try again later.</li> </ul>
     */
    inline void SetAvailability(DomainAvailability&& value) { m_availability = value; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * only register domains designated as <code>AVAILABLE</code>.</p> </note> <p>Type:
     * String</p> <p>Valid values:</p> <ul> <li><code>AVAILABLE</code> – The domain
     * name is available.</li> <li><code>AVAILABLE_RESERVED</code> – The domain name is
     * reserved under specific conditions.</li> <li><code>AVAILABLE_PREORDER</code> –
     * The domain name is available and can be preordered.</li>
     * <li><code>UNAVAILABLE</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_PREMIUM</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_RESTRICTED</code> – The domain name is forbidden.</li>
     * <li><code>RESERVED</code> – The domain name has been reserved for another person
     * or organization.</li> <li><code>DONT_KNOW</code> – The TLD registry didn't reply
     * with a definitive answer about whether the domain name is available. Amazon
     * Route 53 can return this response for a variety of reasons, for example, the
     * registry is performing maintenance. Try again later.</li> </ul>
     */
    inline CheckDomainAvailabilityResult& WithAvailability(const DomainAvailability& value) { SetAvailability(value); return *this;}

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * only register domains designated as <code>AVAILABLE</code>.</p> </note> <p>Type:
     * String</p> <p>Valid values:</p> <ul> <li><code>AVAILABLE</code> – The domain
     * name is available.</li> <li><code>AVAILABLE_RESERVED</code> – The domain name is
     * reserved under specific conditions.</li> <li><code>AVAILABLE_PREORDER</code> –
     * The domain name is available and can be preordered.</li>
     * <li><code>UNAVAILABLE</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_PREMIUM</code> – The domain name is not available.</li>
     * <li><code>UNAVAILABLE_RESTRICTED</code> – The domain name is forbidden.</li>
     * <li><code>RESERVED</code> – The domain name has been reserved for another person
     * or organization.</li> <li><code>DONT_KNOW</code> – The TLD registry didn't reply
     * with a definitive answer about whether the domain name is available. Amazon
     * Route 53 can return this response for a variety of reasons, for example, the
     * registry is performing maintenance. Try again later.</li> </ul>
     */
    inline CheckDomainAvailabilityResult& WithAvailability(DomainAvailability&& value) { SetAvailability(value); return *this;}

  private:
    DomainAvailability m_availability;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
