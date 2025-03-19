/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/RealtimeLogConfig.h>
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
  class GetRealtimeLogConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetRealtimeLogConfig2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetRealtimeLogConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetRealtimeLogConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A real-time log configuration.</p>
     */
    inline const RealtimeLogConfig& GetRealtimeLogConfig() const { return m_realtimeLogConfig; }
    template<typename RealtimeLogConfigT = RealtimeLogConfig>
    void SetRealtimeLogConfig(RealtimeLogConfigT&& value) { m_realtimeLogConfigHasBeenSet = true; m_realtimeLogConfig = std::forward<RealtimeLogConfigT>(value); }
    template<typename RealtimeLogConfigT = RealtimeLogConfig>
    GetRealtimeLogConfig2020_05_31Result& WithRealtimeLogConfig(RealtimeLogConfigT&& value) { SetRealtimeLogConfig(std::forward<RealtimeLogConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRealtimeLogConfig2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RealtimeLogConfig m_realtimeLogConfig;
    bool m_realtimeLogConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
