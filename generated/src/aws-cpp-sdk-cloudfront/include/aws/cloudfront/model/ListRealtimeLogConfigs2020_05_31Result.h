/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/RealtimeLogConfigs.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudFront
{
namespace Model
{
  class ListRealtimeLogConfigs2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Result();
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of real-time log configurations.</p>
     */
    inline const RealtimeLogConfigs& GetRealtimeLogConfigs() const{ return m_realtimeLogConfigs; }

    /**
     * <p>A list of real-time log configurations.</p>
     */
    inline void SetRealtimeLogConfigs(const RealtimeLogConfigs& value) { m_realtimeLogConfigs = value; }

    /**
     * <p>A list of real-time log configurations.</p>
     */
    inline void SetRealtimeLogConfigs(RealtimeLogConfigs&& value) { m_realtimeLogConfigs = std::move(value); }

    /**
     * <p>A list of real-time log configurations.</p>
     */
    inline ListRealtimeLogConfigs2020_05_31Result& WithRealtimeLogConfigs(const RealtimeLogConfigs& value) { SetRealtimeLogConfigs(value); return *this;}

    /**
     * <p>A list of real-time log configurations.</p>
     */
    inline ListRealtimeLogConfigs2020_05_31Result& WithRealtimeLogConfigs(RealtimeLogConfigs&& value) { SetRealtimeLogConfigs(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRealtimeLogConfigs2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRealtimeLogConfigs2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRealtimeLogConfigs2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RealtimeLogConfigs m_realtimeLogConfigs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
