/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class GetFlowLogsIntegrationTemplateResponse
  {
  public:
    AWS_EC2_API GetFlowLogsIntegrationTemplateResponse();
    AWS_EC2_API GetFlowLogsIntegrationTemplateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetFlowLogsIntegrationTemplateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline void SetResult(const Aws::String& value) { m_result = value; }

    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline void SetResult(Aws::String&& value) { m_result = std::move(value); }

    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline void SetResult(const char* value) { m_result.assign(value); }

    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline GetFlowLogsIntegrationTemplateResponse& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline GetFlowLogsIntegrationTemplateResponse& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>The generated CloudFormation template.</p>
     */
    inline GetFlowLogsIntegrationTemplateResponse& WithResult(const char* value) { SetResult(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetFlowLogsIntegrationTemplateResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetFlowLogsIntegrationTemplateResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_result;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
