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
#include <aws/route53domains/model/DomainAvailability.h>
#include <utility>

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
   * <p>The CheckDomainAvailability response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailabilityResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult
  {
  public:
    CheckDomainAvailabilityResult();
    CheckDomainAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CheckDomainAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p> </note> <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Amazon Route 53 can return this response for a variety
     * of reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline const DomainAvailability& GetAvailability() const{ return m_availability; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p> </note> <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Amazon Route 53 can return this response for a variety
     * of reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline void SetAvailability(const DomainAvailability& value) { m_availability = value; }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p> </note> <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Amazon Route 53 can return this response for a variety
     * of reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline void SetAvailability(DomainAvailability&& value) { m_availability = std::move(value); }

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p> </note> <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Amazon Route 53 can return this response for a variety
     * of reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline CheckDomainAvailabilityResult& WithAvailability(const DomainAvailability& value) { SetAvailability(value); return *this;}

    /**
     * <p>Whether the domain name is available for registering.</p> <note> <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p> </note> <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Amazon Route 53 can return this response for a variety
     * of reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline CheckDomainAvailabilityResult& WithAvailability(DomainAvailability&& value) { SetAvailability(std::move(value)); return *this;}

  private:

    DomainAvailability m_availability;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
