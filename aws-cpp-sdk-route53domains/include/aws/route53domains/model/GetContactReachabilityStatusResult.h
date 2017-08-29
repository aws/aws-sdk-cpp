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
#include <aws/route53domains/model/ReachabilityStatus.h>
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
  class AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult
  {
  public:
    GetContactReachabilityStatusResult();
    GetContactReachabilityStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetContactReachabilityStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline GetContactReachabilityStatusResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline GetContactReachabilityStatusResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline GetContactReachabilityStatusResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline const ReachabilityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline void SetStatus(const ReachabilityStatus& value) { m_status = value; }

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline void SetStatus(ReachabilityStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline GetContactReachabilityStatusResult& WithStatus(const ReachabilityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline GetContactReachabilityStatusResult& WithStatus(ReachabilityStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;

    ReachabilityStatus m_status;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
