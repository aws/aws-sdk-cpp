/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeTerminationPolicyTypesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeTerminationPolicyTypesResult() = default;
    AWS_AUTOSCALING_API DescribeTerminationPolicyTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeTerminationPolicyTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicyTypes() const { return m_terminationPolicyTypes; }
    template<typename TerminationPolicyTypesT = Aws::Vector<Aws::String>>
    void SetTerminationPolicyTypes(TerminationPolicyTypesT&& value) { m_terminationPolicyTypesHasBeenSet = true; m_terminationPolicyTypes = std::forward<TerminationPolicyTypesT>(value); }
    template<typename TerminationPolicyTypesT = Aws::Vector<Aws::String>>
    DescribeTerminationPolicyTypesResult& WithTerminationPolicyTypes(TerminationPolicyTypesT&& value) { SetTerminationPolicyTypes(std::forward<TerminationPolicyTypesT>(value)); return *this;}
    template<typename TerminationPolicyTypesT = Aws::String>
    DescribeTerminationPolicyTypesResult& AddTerminationPolicyTypes(TerminationPolicyTypesT&& value) { m_terminationPolicyTypesHasBeenSet = true; m_terminationPolicyTypes.emplace_back(std::forward<TerminationPolicyTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTerminationPolicyTypesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_terminationPolicyTypes;
    bool m_terminationPolicyTypesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
