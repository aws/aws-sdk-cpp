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
  class StartInstancesResponse
  {
  public:
    AWS_EC2_API StartInstancesResponse() = default;
    AWS_EC2_API StartInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StartInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the started instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetStartingInstances() const { return m_startingInstances; }
    template<typename StartingInstancesT = Aws::Vector<InstanceStateChange>>
    void SetStartingInstances(StartingInstancesT&& value) { m_startingInstancesHasBeenSet = true; m_startingInstances = std::forward<StartingInstancesT>(value); }
    template<typename StartingInstancesT = Aws::Vector<InstanceStateChange>>
    StartInstancesResponse& WithStartingInstances(StartingInstancesT&& value) { SetStartingInstances(std::forward<StartingInstancesT>(value)); return *this;}
    template<typename StartingInstancesT = InstanceStateChange>
    StartInstancesResponse& AddStartingInstances(StartingInstancesT&& value) { m_startingInstancesHasBeenSet = true; m_startingInstances.emplace_back(std::forward<StartingInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StartInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStateChange> m_startingInstances;
    bool m_startingInstancesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
