/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ScheduledInstanceAvailability.h>
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
   * <p>Contains the output of DescribeScheduledInstanceAvailability.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailabilityResult">AWS
   * API Reference</a></p>
   */
  class DescribeScheduledInstanceAvailabilityResponse
  {
  public:
    AWS_EC2_API DescribeScheduledInstanceAvailabilityResponse() = default;
    AWS_EC2_API DescribeScheduledInstanceAvailabilityResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeScheduledInstanceAvailabilityResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token required to retrieve the next set of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScheduledInstanceAvailabilityResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the available Scheduled Instances.</p>
     */
    inline const Aws::Vector<ScheduledInstanceAvailability>& GetScheduledInstanceAvailabilitySet() const { return m_scheduledInstanceAvailabilitySet; }
    template<typename ScheduledInstanceAvailabilitySetT = Aws::Vector<ScheduledInstanceAvailability>>
    void SetScheduledInstanceAvailabilitySet(ScheduledInstanceAvailabilitySetT&& value) { m_scheduledInstanceAvailabilitySetHasBeenSet = true; m_scheduledInstanceAvailabilitySet = std::forward<ScheduledInstanceAvailabilitySetT>(value); }
    template<typename ScheduledInstanceAvailabilitySetT = Aws::Vector<ScheduledInstanceAvailability>>
    DescribeScheduledInstanceAvailabilityResponse& WithScheduledInstanceAvailabilitySet(ScheduledInstanceAvailabilitySetT&& value) { SetScheduledInstanceAvailabilitySet(std::forward<ScheduledInstanceAvailabilitySetT>(value)); return *this;}
    template<typename ScheduledInstanceAvailabilitySetT = ScheduledInstanceAvailability>
    DescribeScheduledInstanceAvailabilityResponse& AddScheduledInstanceAvailabilitySet(ScheduledInstanceAvailabilitySetT&& value) { m_scheduledInstanceAvailabilitySetHasBeenSet = true; m_scheduledInstanceAvailabilitySet.emplace_back(std::forward<ScheduledInstanceAvailabilitySetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeScheduledInstanceAvailabilityResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ScheduledInstanceAvailability> m_scheduledInstanceAvailabilitySet;
    bool m_scheduledInstanceAvailabilitySetHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
