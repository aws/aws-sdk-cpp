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
    AWS_CLOUDFORMATION_API DetectStackResourceDriftResult();
    AWS_CLOUDFORMATION_API DetectStackResourceDriftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DetectStackResourceDriftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about whether the resource's actual configuration has drifted
     * from its expected template configuration, including actual and expected property
     * values and any differences detected.</p>
     */
    inline const StackResourceDrift& GetStackResourceDrift() const{ return m_stackResourceDrift; }
    inline void SetStackResourceDrift(const StackResourceDrift& value) { m_stackResourceDrift = value; }
    inline void SetStackResourceDrift(StackResourceDrift&& value) { m_stackResourceDrift = std::move(value); }
    inline DetectStackResourceDriftResult& WithStackResourceDrift(const StackResourceDrift& value) { SetStackResourceDrift(value); return *this;}
    inline DetectStackResourceDriftResult& WithStackResourceDrift(StackResourceDrift&& value) { SetStackResourceDrift(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DetectStackResourceDriftResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DetectStackResourceDriftResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    StackResourceDrift m_stackResourceDrift;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
