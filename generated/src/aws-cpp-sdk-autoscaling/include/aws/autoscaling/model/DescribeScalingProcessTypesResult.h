/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/ProcessType.h>
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
  class DescribeScalingProcessTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeScalingProcessTypesResult();
    AWS_AUTOSCALING_API DescribeScalingProcessTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeScalingProcessTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The names of the process types.</p>
     */
    inline const Aws::Vector<ProcessType>& GetProcesses() const{ return m_processes; }

    /**
     * <p>The names of the process types.</p>
     */
    inline void SetProcesses(const Aws::Vector<ProcessType>& value) { m_processes = value; }

    /**
     * <p>The names of the process types.</p>
     */
    inline void SetProcesses(Aws::Vector<ProcessType>&& value) { m_processes = std::move(value); }

    /**
     * <p>The names of the process types.</p>
     */
    inline DescribeScalingProcessTypesResult& WithProcesses(const Aws::Vector<ProcessType>& value) { SetProcesses(value); return *this;}

    /**
     * <p>The names of the process types.</p>
     */
    inline DescribeScalingProcessTypesResult& WithProcesses(Aws::Vector<ProcessType>&& value) { SetProcesses(std::move(value)); return *this;}

    /**
     * <p>The names of the process types.</p>
     */
    inline DescribeScalingProcessTypesResult& AddProcesses(const ProcessType& value) { m_processes.push_back(value); return *this; }

    /**
     * <p>The names of the process types.</p>
     */
    inline DescribeScalingProcessTypesResult& AddProcesses(ProcessType&& value) { m_processes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeScalingProcessTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeScalingProcessTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ProcessType> m_processes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
