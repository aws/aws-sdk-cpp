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
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryResponse() = default;
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlockExtensionHistoryResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes one or more of your Capacity Block extensions. The results describe
     * only the Capacity Block extensions in the Amazon Web Services Region that you're
     * currently using.</p>
     */
    inline const Aws::Vector<CapacityBlockExtension>& GetCapacityBlockExtensions() const { return m_capacityBlockExtensions; }
    template<typename CapacityBlockExtensionsT = Aws::Vector<CapacityBlockExtension>>
    void SetCapacityBlockExtensions(CapacityBlockExtensionsT&& value) { m_capacityBlockExtensionsHasBeenSet = true; m_capacityBlockExtensions = std::forward<CapacityBlockExtensionsT>(value); }
    template<typename CapacityBlockExtensionsT = Aws::Vector<CapacityBlockExtension>>
    DescribeCapacityBlockExtensionHistoryResponse& WithCapacityBlockExtensions(CapacityBlockExtensionsT&& value) { SetCapacityBlockExtensions(std::forward<CapacityBlockExtensionsT>(value)); return *this;}
    template<typename CapacityBlockExtensionsT = CapacityBlockExtension>
    DescribeCapacityBlockExtensionHistoryResponse& AddCapacityBlockExtensions(CapacityBlockExtensionsT&& value) { m_capacityBlockExtensionsHasBeenSet = true; m_capacityBlockExtensions.emplace_back(std::forward<CapacityBlockExtensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCapacityBlockExtensionHistoryResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCapacityBlockExtensionHistoryResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockExtension> m_capacityBlockExtensions;
    bool m_capacityBlockExtensionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
