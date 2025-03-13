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
  class StopInstancesResponse
  {
  public:
    AWS_EC2_API StopInstancesResponse() = default;
    AWS_EC2_API StopInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StopInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the stopped instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetStoppingInstances() const { return m_stoppingInstances; }
    template<typename StoppingInstancesT = Aws::Vector<InstanceStateChange>>
    void SetStoppingInstances(StoppingInstancesT&& value) { m_stoppingInstancesHasBeenSet = true; m_stoppingInstances = std::forward<StoppingInstancesT>(value); }
    template<typename StoppingInstancesT = Aws::Vector<InstanceStateChange>>
    StopInstancesResponse& WithStoppingInstances(StoppingInstancesT&& value) { SetStoppingInstances(std::forward<StoppingInstancesT>(value)); return *this;}
    template<typename StoppingInstancesT = InstanceStateChange>
    StopInstancesResponse& AddStoppingInstances(StoppingInstancesT&& value) { m_stoppingInstancesHasBeenSet = true; m_stoppingInstances.emplace_back(std::forward<StoppingInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StopInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStateChange> m_stoppingInstances;
    bool m_stoppingInstancesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
