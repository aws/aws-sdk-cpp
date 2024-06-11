﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VolumeStatusItem.h>
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
  class DescribeVolumeStatusResponse
  {
  public:
    AWS_EC2_API DescribeVolumeStatusResponse();
    AWS_EC2_API DescribeVolumeStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVolumeStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeVolumeStatusResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeVolumeStatusResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeVolumeStatusResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of the volumes.</p>
     */
    inline const Aws::Vector<VolumeStatusItem>& GetVolumeStatuses() const{ return m_volumeStatuses; }
    inline void SetVolumeStatuses(const Aws::Vector<VolumeStatusItem>& value) { m_volumeStatuses = value; }
    inline void SetVolumeStatuses(Aws::Vector<VolumeStatusItem>&& value) { m_volumeStatuses = std::move(value); }
    inline DescribeVolumeStatusResponse& WithVolumeStatuses(const Aws::Vector<VolumeStatusItem>& value) { SetVolumeStatuses(value); return *this;}
    inline DescribeVolumeStatusResponse& WithVolumeStatuses(Aws::Vector<VolumeStatusItem>&& value) { SetVolumeStatuses(std::move(value)); return *this;}
    inline DescribeVolumeStatusResponse& AddVolumeStatuses(const VolumeStatusItem& value) { m_volumeStatuses.push_back(value); return *this; }
    inline DescribeVolumeStatusResponse& AddVolumeStatuses(VolumeStatusItem&& value) { m_volumeStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeVolumeStatusResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeVolumeStatusResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<VolumeStatusItem> m_volumeStatuses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
