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
  class UpdateStackInstancesResult
  {
  public:
    AWS_CLOUDFORMATION_API UpdateStackInstancesResult();
    AWS_CLOUDFORMATION_API UpdateStackInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API UpdateStackInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The unique identifier for this stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }
    inline UpdateStackInstancesResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline UpdateStackInstancesResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline UpdateStackInstancesResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline UpdateStackInstancesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline UpdateStackInstancesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
