/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackResourceDrift.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  class DetectStackResourceDriftResult
  {
  public:
    AWS_CLOUDFORMATION_API DetectStackResourceDriftResult() = default;
    AWS_CLOUDFORMATION_API DetectStackResourceDriftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DetectStackResourceDriftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline const StackResourceDrift& GetStackResourceDrift() const { return m_stackResourceDrift; }
    template<typename StackResourceDriftT = StackResourceDrift>
    void SetStackResourceDrift(StackResourceDriftT&& value) { m_stackResourceDriftHasBeenSet = true; m_stackResourceDrift = std::forward<StackResourceDriftT>(value); }
    template<typename StackResourceDriftT = StackResourceDrift>
    DetectStackResourceDriftResult& WithStackResourceDrift(StackResourceDriftT&& value) { SetStackResourceDrift(std::forward<StackResourceDriftT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DetectStackResourceDriftResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    StackResourceDrift m_stackResourceDrift;
    bool m_stackResourceDriftHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
