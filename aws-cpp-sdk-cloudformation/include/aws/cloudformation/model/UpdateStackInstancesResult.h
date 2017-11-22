/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDFORMATION_API UpdateStackInstancesResult
  {
  public:
    UpdateStackInstancesResult();
    UpdateStackInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateStackInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline UpdateStackInstancesResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline UpdateStackInstancesResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for this stack set operation. </p>
     */
    inline UpdateStackInstancesResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdateStackInstancesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateStackInstancesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_operationId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
