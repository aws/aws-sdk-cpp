/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IdFormat.h>
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
  class DescribeAggregateIdFormatResponse
  {
  public:
    AWS_EC2_API DescribeAggregateIdFormatResponse() = default;
    AWS_EC2_API DescribeAggregateIdFormatResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeAggregateIdFormatResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether all resource types in the Region are configured to use
     * longer IDs. This value is only <code>true</code> if all users are configured to
     * use longer IDs for all resources types in the Region.</p>
     */
    inline bool GetUseLongIdsAggregated() const { return m_useLongIdsAggregated; }
    inline void SetUseLongIdsAggregated(bool value) { m_useLongIdsAggregatedHasBeenSet = true; m_useLongIdsAggregated = value; }
    inline DescribeAggregateIdFormatResponse& WithUseLongIdsAggregated(bool value) { SetUseLongIdsAggregated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about each resource's ID format.</p>
     */
    inline const Aws::Vector<IdFormat>& GetStatuses() const { return m_statuses; }
    template<typename StatusesT = Aws::Vector<IdFormat>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<IdFormat>>
    DescribeAggregateIdFormatResponse& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    template<typename StatusesT = IdFormat>
    DescribeAggregateIdFormatResponse& AddStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses.emplace_back(std::forward<StatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAggregateIdFormatResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_useLongIdsAggregated{false};
    bool m_useLongIdsAggregatedHasBeenSet = false;

    Aws::Vector<IdFormat> m_statuses;
    bool m_statusesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
