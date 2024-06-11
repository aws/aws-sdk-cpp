/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DetectStackDriftResult
  {
  public:
    AWS_CLOUDFORMATION_API DetectStackDriftResult();
    AWS_CLOUDFORMATION_API DetectStackDriftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DetectStackDriftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the drift detection results of this operation.</p>
     * <p>CloudFormation generates new results, with a new drift detection ID, each
     * time this operation is run. However, the number of drift results CloudFormation
     * retains for any given stack, and for how long, may vary.</p>
     */
    inline const Aws::String& GetStackDriftDetectionId() const{ return m_stackDriftDetectionId; }
    inline void SetStackDriftDetectionId(const Aws::String& value) { m_stackDriftDetectionId = value; }
    inline void SetStackDriftDetectionId(Aws::String&& value) { m_stackDriftDetectionId = std::move(value); }
    inline void SetStackDriftDetectionId(const char* value) { m_stackDriftDetectionId.assign(value); }
    inline DetectStackDriftResult& WithStackDriftDetectionId(const Aws::String& value) { SetStackDriftDetectionId(value); return *this;}
    inline DetectStackDriftResult& WithStackDriftDetectionId(Aws::String&& value) { SetStackDriftDetectionId(std::move(value)); return *this;}
    inline DetectStackDriftResult& WithStackDriftDetectionId(const char* value) { SetStackDriftDetectionId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DetectStackDriftResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DetectStackDriftResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackDriftDetectionId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
