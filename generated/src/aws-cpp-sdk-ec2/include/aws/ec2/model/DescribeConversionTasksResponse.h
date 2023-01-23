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
    AWS_EC2_API DescribeConversionTasksResponse();
    AWS_EC2_API DescribeConversionTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeConversionTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline const Aws::Vector<ConversionTask>& GetConversionTasks() const{ return m_conversionTasks; }

    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline void SetConversionTasks(const Aws::Vector<ConversionTask>& value) { m_conversionTasks = value; }

    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline void SetConversionTasks(Aws::Vector<ConversionTask>&& value) { m_conversionTasks = std::move(value); }

    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline DescribeConversionTasksResponse& WithConversionTasks(const Aws::Vector<ConversionTask>& value) { SetConversionTasks(value); return *this;}

    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline DescribeConversionTasksResponse& WithConversionTasks(Aws::Vector<ConversionTask>&& value) { SetConversionTasks(std::move(value)); return *this;}

    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline DescribeConversionTasksResponse& AddConversionTasks(const ConversionTask& value) { m_conversionTasks.push_back(value); return *this; }

    /**
     * <p>Information about the conversion tasks.</p>
     */
    inline DescribeConversionTasksResponse& AddConversionTasks(ConversionTask&& value) { m_conversionTasks.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeConversionTasksResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeConversionTasksResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ConversionTask> m_conversionTasks;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
