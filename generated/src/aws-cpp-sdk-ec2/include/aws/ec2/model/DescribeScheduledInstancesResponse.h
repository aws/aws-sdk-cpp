/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ScheduledInstance.h>
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
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeScheduledInstances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstancesResult">AWS
   * API Reference</a></p>
   */
  class DescribeScheduledInstancesResponse
  {
  public:
    AWS_EC2_API DescribeScheduledInstancesResponse() = default;
    AWS_EC2_API DescribeScheduledInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeScheduledInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScheduledInstancesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline const Aws::Vector<ScheduledInstance>& GetScheduledInstanceSet() const { return m_scheduledInstanceSet; }
    template<typename ScheduledInstanceSetT = Aws::Vector<ScheduledInstance>>
    void SetScheduledInstanceSet(ScheduledInstanceSetT&& value) { m_scheduledInstanceSetHasBeenSet = true; m_scheduledInstanceSet = std::forward<ScheduledInstanceSetT>(value); }
    template<typename ScheduledInstanceSetT = Aws::Vector<ScheduledInstance>>
    DescribeScheduledInstancesResponse& WithScheduledInstanceSet(ScheduledInstanceSetT&& value) { SetScheduledInstanceSet(std::forward<ScheduledInstanceSetT>(value)); return *this;}
    template<typename ScheduledInstanceSetT = ScheduledInstance>
    DescribeScheduledInstancesResponse& AddScheduledInstanceSet(ScheduledInstanceSetT&& value) { m_scheduledInstanceSetHasBeenSet = true; m_scheduledInstanceSet.emplace_back(std::forward<ScheduledInstanceSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeScheduledInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ScheduledInstance> m_scheduledInstanceSet;
    bool m_scheduledInstanceSetHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
