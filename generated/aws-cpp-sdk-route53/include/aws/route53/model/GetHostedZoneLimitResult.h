﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZoneLimit.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the requested limit. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneLimitResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API GetHostedZoneLimitResult
  {
  public:
    GetHostedZoneLimitResult();
    GetHostedZoneLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetHostedZoneLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_RRSETS_BY_ZONE</code> for the value of <code>Type</code> in the
     * request, the value of <code>Limit</code> is the maximum number of records that
     * you can create in the specified hosted zone.</p>
     */
    inline const HostedZoneLimit& GetLimit() const{ return m_limit; }

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_RRSETS_BY_ZONE</code> for the value of <code>Type</code> in the
     * request, the value of <code>Limit</code> is the maximum number of records that
     * you can create in the specified hosted zone.</p>
     */
    inline void SetLimit(const HostedZoneLimit& value) { m_limit = value; }

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_RRSETS_BY_ZONE</code> for the value of <code>Type</code> in the
     * request, the value of <code>Limit</code> is the maximum number of records that
     * you can create in the specified hosted zone.</p>
     */
    inline void SetLimit(HostedZoneLimit&& value) { m_limit = std::move(value); }

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_RRSETS_BY_ZONE</code> for the value of <code>Type</code> in the
     * request, the value of <code>Limit</code> is the maximum number of records that
     * you can create in the specified hosted zone.</p>
     */
    inline GetHostedZoneLimitResult& WithLimit(const HostedZoneLimit& value) { SetLimit(value); return *this;}

    /**
     * <p>The current setting for the specified limit. For example, if you specified
     * <code>MAX_RRSETS_BY_ZONE</code> for the value of <code>Type</code> in the
     * request, the value of <code>Limit</code> is the maximum number of records that
     * you can create in the specified hosted zone.</p>
     */
    inline GetHostedZoneLimitResult& WithLimit(HostedZoneLimit&& value) { SetLimit(std::move(value)); return *this;}


    /**
     * <p>The current number of entities that you have created of the specified type.
     * For example, if you specified <code>MAX_RRSETS_BY_ZONE</code> for the value of
     * <code>Type</code> in the request, the value of <code>Count</code> is the current
     * number of records that you have created in the specified hosted zone.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The current number of entities that you have created of the specified type.
     * For example, if you specified <code>MAX_RRSETS_BY_ZONE</code> for the value of
     * <code>Type</code> in the request, the value of <code>Count</code> is the current
     * number of records that you have created in the specified hosted zone.</p>
     */
    inline void SetCount(long long value) { m_count = value; }

    /**
     * <p>The current number of entities that you have created of the specified type.
     * For example, if you specified <code>MAX_RRSETS_BY_ZONE</code> for the value of
     * <code>Type</code> in the request, the value of <code>Count</code> is the current
     * number of records that you have created in the specified hosted zone.</p>
     */
    inline GetHostedZoneLimitResult& WithCount(long long value) { SetCount(value); return *this;}

  private:

    HostedZoneLimit m_limit;

    long long m_count;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
