/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityBlockExtension.h>
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
  class DescribeCapacityBlockExtensionHistoryResponse
  {
  public:
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryResponse();
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes one or more of your Capacity Block extensions. The results describe
     * only the Capacity Block extensions in the Amazon Web Services Region that you're
     * currently using.</p>
     */
    inline const Aws::Vector<CapacityBlockExtension>& GetCapacityBlockExtensions() const{ return m_capacityBlockExtensions; }
    inline void SetCapacityBlockExtensions(const Aws::Vector<CapacityBlockExtension>& value) { m_capacityBlockExtensions = value; }
    inline void SetCapacityBlockExtensions(Aws::Vector<CapacityBlockExtension>&& value) { m_capacityBlockExtensions = std::move(value); }
    inline DescribeCapacityBlockExtensionHistoryResponse& WithCapacityBlockExtensions(const Aws::Vector<CapacityBlockExtension>& value) { SetCapacityBlockExtensions(value); return *this;}
    inline DescribeCapacityBlockExtensionHistoryResponse& WithCapacityBlockExtensions(Aws::Vector<CapacityBlockExtension>&& value) { SetCapacityBlockExtensions(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionHistoryResponse& AddCapacityBlockExtensions(const CapacityBlockExtension& value) { m_capacityBlockExtensions.push_back(value); return *this; }
    inline DescribeCapacityBlockExtensionHistoryResponse& AddCapacityBlockExtensions(CapacityBlockExtension&& value) { m_capacityBlockExtensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeCapacityBlockExtensionHistoryResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCapacityBlockExtensionHistoryResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCapacityBlockExtensionHistoryResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeCapacityBlockExtensionHistoryResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeCapacityBlockExtensionHistoryResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockExtension> m_capacityBlockExtensions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
