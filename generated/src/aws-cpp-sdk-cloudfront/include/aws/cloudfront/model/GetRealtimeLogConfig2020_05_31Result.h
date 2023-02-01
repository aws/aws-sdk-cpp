/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/RealtimeLogConfig.h>
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
  class GetRealtimeLogConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetRealtimeLogConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetRealtimeLogConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetRealtimeLogConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A real-time log configuration.</p>
     */
    inline const RealtimeLogConfig& GetRealtimeLogConfig() const{ return m_realtimeLogConfig; }

    /**
     * <p>A real-time log configuration.</p>
     */
    inline void SetRealtimeLogConfig(const RealtimeLogConfig& value) { m_realtimeLogConfig = value; }

    /**
     * <p>A real-time log configuration.</p>
     */
    inline void SetRealtimeLogConfig(RealtimeLogConfig&& value) { m_realtimeLogConfig = std::move(value); }

    /**
     * <p>A real-time log configuration.</p>
     */
    inline GetRealtimeLogConfig2020_05_31Result& WithRealtimeLogConfig(const RealtimeLogConfig& value) { SetRealtimeLogConfig(value); return *this;}

    /**
     * <p>A real-time log configuration.</p>
     */
    inline GetRealtimeLogConfig2020_05_31Result& WithRealtimeLogConfig(RealtimeLogConfig&& value) { SetRealtimeLogConfig(std::move(value)); return *this;}

  private:

    RealtimeLogConfig m_realtimeLogConfig;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
