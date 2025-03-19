/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/NotificationConfiguration.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeNotificationConfigurationsResult
  {
  public:
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsResult() = default;
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The notification configurations.</p>
     */
    inline const Aws::Vector<NotificationConfiguration>& GetNotificationConfigurations() const { return m_notificationConfigurations; }
    template<typename NotificationConfigurationsT = Aws::Vector<NotificationConfiguration>>
    void SetNotificationConfigurations(NotificationConfigurationsT&& value) { m_notificationConfigurationsHasBeenSet = true; m_notificationConfigurations = std::forward<NotificationConfigurationsT>(value); }
    template<typename NotificationConfigurationsT = Aws::Vector<NotificationConfiguration>>
    DescribeNotificationConfigurationsResult& WithNotificationConfigurations(NotificationConfigurationsT&& value) { SetNotificationConfigurations(std::forward<NotificationConfigurationsT>(value)); return *this;}
    template<typename NotificationConfigurationsT = NotificationConfiguration>
    DescribeNotificationConfigurationsResult& AddNotificationConfigurations(NotificationConfigurationsT&& value) { m_notificationConfigurationsHasBeenSet = true; m_notificationConfigurations.emplace_back(std::forward<NotificationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeNotificationConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNotificationConfigurationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotificationConfiguration> m_notificationConfigurations;
    bool m_notificationConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
