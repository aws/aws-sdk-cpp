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
    AWS_AUTOSCALING_API DescribeScalingProcessTypesResult() = default;
    AWS_AUTOSCALING_API DescribeScalingProcessTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeScalingProcessTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The names of the process types.</p>
     */
    inline const Aws::Vector<ProcessType>& GetProcesses() const { return m_processes; }
    template<typename ProcessesT = Aws::Vector<ProcessType>>
    void SetProcesses(ProcessesT&& value) { m_processesHasBeenSet = true; m_processes = std::forward<ProcessesT>(value); }
    template<typename ProcessesT = Aws::Vector<ProcessType>>
    DescribeScalingProcessTypesResult& WithProcesses(ProcessesT&& value) { SetProcesses(std::forward<ProcessesT>(value)); return *this;}
    template<typename ProcessesT = ProcessType>
    DescribeScalingProcessTypesResult& AddProcesses(ProcessesT&& value) { m_processesHasBeenSet = true; m_processes.emplace_back(std::forward<ProcessesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeScalingProcessTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProcessType> m_processes;
    bool m_processesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
