/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceImageMetadata.h>
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
  class DescribeInstanceImageMetadataResponse
  {
  public:
    AWS_EC2_API DescribeInstanceImageMetadataResponse();
    AWS_EC2_API DescribeInstanceImageMetadataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceImageMetadataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the instance and the AMI used to launch the instance.</p>
     */
    inline const Aws::Vector<InstanceImageMetadata>& GetInstanceImageMetadata() const{ return m_instanceImageMetadata; }
    inline void SetInstanceImageMetadata(const Aws::Vector<InstanceImageMetadata>& value) { m_instanceImageMetadata = value; }
    inline void SetInstanceImageMetadata(Aws::Vector<InstanceImageMetadata>&& value) { m_instanceImageMetadata = std::move(value); }
    inline DescribeInstanceImageMetadataResponse& WithInstanceImageMetadata(const Aws::Vector<InstanceImageMetadata>& value) { SetInstanceImageMetadata(value); return *this;}
    inline DescribeInstanceImageMetadataResponse& WithInstanceImageMetadata(Aws::Vector<InstanceImageMetadata>&& value) { SetInstanceImageMetadata(std::move(value)); return *this;}
    inline DescribeInstanceImageMetadataResponse& AddInstanceImageMetadata(const InstanceImageMetadata& value) { m_instanceImageMetadata.push_back(value); return *this; }
    inline DescribeInstanceImageMetadataResponse& AddInstanceImageMetadata(InstanceImageMetadata&& value) { m_instanceImageMetadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeInstanceImageMetadataResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstanceImageMetadataResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstanceImageMetadataResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeInstanceImageMetadataResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeInstanceImageMetadataResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceImageMetadata> m_instanceImageMetadata;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
