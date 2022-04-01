﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/Limit.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  class AWS_ELASTICLOADBALANCING_API DescribeAccountLimitsResult
  {
  public:
    DescribeAccountLimitsResult();
    DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the limits.</p>
     */
    inline const Aws::Vector<Limit>& GetLimits() const{ return m_limits; }

    /**
     * <p>Information about the limits.</p>
     */
    inline void SetLimits(const Aws::Vector<Limit>& value) { m_limits = value; }

    /**
     * <p>Information about the limits.</p>
     */
    inline void SetLimits(Aws::Vector<Limit>&& value) { m_limits = std::move(value); }

    /**
     * <p>Information about the limits.</p>
     */
    inline DescribeAccountLimitsResult& WithLimits(const Aws::Vector<Limit>& value) { SetLimits(value); return *this;}

    /**
     * <p>Information about the limits.</p>
     */
    inline DescribeAccountLimitsResult& WithLimits(Aws::Vector<Limit>&& value) { SetLimits(std::move(value)); return *this;}

    /**
     * <p>Information about the limits.</p>
     */
    inline DescribeAccountLimitsResult& AddLimits(const Limit& value) { m_limits.push_back(value); return *this; }

    /**
     * <p>Information about the limits.</p>
     */
    inline DescribeAccountLimitsResult& AddLimits(Limit&& value) { m_limits.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeAccountLimitsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeAccountLimitsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeAccountLimitsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAccountLimitsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAccountLimitsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Limit> m_limits;

    Aws::String m_nextMarker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
