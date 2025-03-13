/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceStateChange.h>
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
  class TerminateInstancesResponse
  {
  public:
    AWS_EC2_API TerminateInstancesResponse() = default;
    AWS_EC2_API TerminateInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API TerminateInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the terminated instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetTerminatingInstances() const { return m_terminatingInstances; }
    template<typename TerminatingInstancesT = Aws::Vector<InstanceStateChange>>
    void SetTerminatingInstances(TerminatingInstancesT&& value) { m_terminatingInstancesHasBeenSet = true; m_terminatingInstances = std::forward<TerminatingInstancesT>(value); }
    template<typename TerminatingInstancesT = Aws::Vector<InstanceStateChange>>
    TerminateInstancesResponse& WithTerminatingInstances(TerminatingInstancesT&& value) { SetTerminatingInstances(std::forward<TerminatingInstancesT>(value)); return *this;}
    template<typename TerminatingInstancesT = InstanceStateChange>
    TerminateInstancesResponse& AddTerminatingInstances(TerminatingInstancesT&& value) { m_terminatingInstancesHasBeenSet = true; m_terminatingInstances.emplace_back(std::forward<TerminatingInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    TerminateInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStateChange> m_terminatingInstances;
    bool m_terminatingInstancesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
