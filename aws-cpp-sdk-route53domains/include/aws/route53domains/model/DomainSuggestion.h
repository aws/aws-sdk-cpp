/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information about one suggested domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainSuggestion">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API DomainSuggestion
  {
  public:
    DomainSuggestion();
    DomainSuggestion(Aws::Utils::Json::JsonView jsonValue);
    DomainSuggestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A suggested domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A suggested domain name.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A suggested domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A suggested domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A suggested domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A suggested domain name.</p>
     */
    inline DomainSuggestion& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A suggested domain name.</p>
     */
    inline DomainSuggestion& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A suggested domain name.</p>
     */
    inline DomainSuggestion& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline const Aws::String& GetAvailability() const{ return m_availability; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline bool AvailabilityHasBeenSet() const { return m_availabilityHasBeenSet; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline void SetAvailability(const Aws::String& value) { m_availabilityHasBeenSet = true; m_availability = value; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline void SetAvailability(Aws::String&& value) { m_availabilityHasBeenSet = true; m_availability = std::move(value); }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline void SetAvailability(const char* value) { m_availabilityHasBeenSet = true; m_availability.assign(value); }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline DomainSuggestion& WithAvailability(const Aws::String& value) { SetAvailability(value); return *this;}

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline DomainSuggestion& WithAvailability(Aws::String&& value) { SetAvailability(std::move(value)); return *this;}

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     * </note> <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Amazon Route 53 can return
     * this response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline DomainSuggestion& WithAvailability(const char* value) { SetAvailability(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_availability;
    bool m_availabilityHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
