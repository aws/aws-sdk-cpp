/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of RunScheduledInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RunScheduledInstancesResult">AWS
   * API Reference</a></p>
   */
  class RunScheduledInstancesResponse
  {
  public:
    AWS_EC2_API RunScheduledInstancesResponse() = default;
    AWS_EC2_API RunScheduledInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RunScheduledInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIdSet() const { return m_instanceIdSet; }
    template<typename InstanceIdSetT = Aws::Vector<Aws::String>>
    void SetInstanceIdSet(InstanceIdSetT&& value) { m_instanceIdSetHasBeenSet = true; m_instanceIdSet = std::forward<InstanceIdSetT>(value); }
    template<typename InstanceIdSetT = Aws::Vector<Aws::String>>
    RunScheduledInstancesResponse& WithInstanceIdSet(InstanceIdSetT&& value) { SetInstanceIdSet(std::forward<InstanceIdSetT>(value)); return *this;}
    template<typename InstanceIdSetT = Aws::String>
    RunScheduledInstancesResponse& AddInstanceIdSet(InstanceIdSetT&& value) { m_instanceIdSetHasBeenSet = true; m_instanceIdSet.emplace_back(std::forward<InstanceIdSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RunScheduledInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceIdSet;
    bool m_instanceIdSetHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
