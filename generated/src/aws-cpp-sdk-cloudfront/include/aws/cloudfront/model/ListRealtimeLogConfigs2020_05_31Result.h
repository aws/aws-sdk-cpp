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
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListRealtimeLogConfigs2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of real-time log configurations.</p>
     */
    inline const RealtimeLogConfigs& GetRealtimeLogConfigs() const { return m_realtimeLogConfigs; }
    template<typename RealtimeLogConfigsT = RealtimeLogConfigs>
    void SetRealtimeLogConfigs(RealtimeLogConfigsT&& value) { m_realtimeLogConfigsHasBeenSet = true; m_realtimeLogConfigs = std::forward<RealtimeLogConfigsT>(value); }
    template<typename RealtimeLogConfigsT = RealtimeLogConfigs>
    ListRealtimeLogConfigs2020_05_31Result& WithRealtimeLogConfigs(RealtimeLogConfigsT&& value) { SetRealtimeLogConfigs(std::forward<RealtimeLogConfigsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRealtimeLogConfigs2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RealtimeLogConfigs m_realtimeLogConfigs;
    bool m_realtimeLogConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
