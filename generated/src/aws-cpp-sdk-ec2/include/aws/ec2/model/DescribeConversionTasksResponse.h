/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ConversionTask.h>
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
  class DescribeConversionTasksResponse
  {
  public:
    AWS_EC2_API DescribeConversionTasksResponse() = default;
    AWS_EC2_API DescribeConversionTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeConversionTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline const Aws::Vector<ConversionTask>& GetConversionTasks() const { return m_conversionTasks; }
    template<typename ConversionTasksT = Aws::Vector<ConversionTask>>
    void SetConversionTasks(ConversionTasksT&& value) { m_conversionTasksHasBeenSet = true; m_conversionTasks = std::forward<ConversionTasksT>(value); }
    template<typename ConversionTasksT = Aws::Vector<ConversionTask>>
    DescribeConversionTasksResponse& WithConversionTasks(ConversionTasksT&& value) { SetConversionTasks(std::forward<ConversionTasksT>(value)); return *this;}
    template<typename ConversionTasksT = ConversionTask>
    DescribeConversionTasksResponse& AddConversionTasks(ConversionTasksT&& value) { m_conversionTasksHasBeenSet = true; m_conversionTasks.emplace_back(std::forward<ConversionTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeConversionTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConversionTask> m_conversionTasks;
    bool m_conversionTasksHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
