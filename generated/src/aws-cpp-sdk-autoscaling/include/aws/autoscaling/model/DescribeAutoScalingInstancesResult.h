/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/AutoScalingInstanceDetails.h>
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
  class DescribeAutoScalingInstancesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeAutoScalingInstancesResult() = default;
    AWS_AUTOSCALING_API DescribeAutoScalingInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeAutoScalingInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The instances.</p>
     */
    inline const Aws::Vector<AutoScalingInstanceDetails>& GetAutoScalingInstances() const { return m_autoScalingInstances; }
    template<typename AutoScalingInstancesT = Aws::Vector<AutoScalingInstanceDetails>>
    void SetAutoScalingInstances(AutoScalingInstancesT&& value) { m_autoScalingInstancesHasBeenSet = true; m_autoScalingInstances = std::forward<AutoScalingInstancesT>(value); }
    template<typename AutoScalingInstancesT = Aws::Vector<AutoScalingInstanceDetails>>
    DescribeAutoScalingInstancesResult& WithAutoScalingInstances(AutoScalingInstancesT&& value) { SetAutoScalingInstances(std::forward<AutoScalingInstancesT>(value)); return *this;}
    template<typename AutoScalingInstancesT = AutoScalingInstanceDetails>
    DescribeAutoScalingInstancesResult& AddAutoScalingInstances(AutoScalingInstancesT&& value) { m_autoScalingInstancesHasBeenSet = true; m_autoScalingInstances.emplace_back(std::forward<AutoScalingInstancesT>(value)); return *this; }
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
    DescribeAutoScalingInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAutoScalingInstancesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoScalingInstanceDetails> m_autoScalingInstances;
    bool m_autoScalingInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
