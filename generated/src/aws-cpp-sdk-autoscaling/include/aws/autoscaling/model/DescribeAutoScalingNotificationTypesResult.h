/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeAutoScalingNotificationTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeAutoScalingNotificationTypesResult() = default;
    AWS_AUTOSCALING_API DescribeAutoScalingNotificationTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeAutoScalingNotificationTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The notification types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingNotificationTypes() const { return m_autoScalingNotificationTypes; }
    template<typename AutoScalingNotificationTypesT = Aws::Vector<Aws::String>>
    void SetAutoScalingNotificationTypes(AutoScalingNotificationTypesT&& value) { m_autoScalingNotificationTypesHasBeenSet = true; m_autoScalingNotificationTypes = std::forward<AutoScalingNotificationTypesT>(value); }
    template<typename AutoScalingNotificationTypesT = Aws::Vector<Aws::String>>
    DescribeAutoScalingNotificationTypesResult& WithAutoScalingNotificationTypes(AutoScalingNotificationTypesT&& value) { SetAutoScalingNotificationTypes(std::forward<AutoScalingNotificationTypesT>(value)); return *this;}
    template<typename AutoScalingNotificationTypesT = Aws::String>
    DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(AutoScalingNotificationTypesT&& value) { m_autoScalingNotificationTypesHasBeenSet = true; m_autoScalingNotificationTypes.emplace_back(std::forward<AutoScalingNotificationTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAutoScalingNotificationTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_autoScalingNotificationTypes;
    bool m_autoScalingNotificationTypesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
