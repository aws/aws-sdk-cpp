/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /**
   * <p>The output for the <a>CreateChangeSet</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API CreateChangeSetResult
  {
  public:
    CreateChangeSetResult();
    CreateChangeSetResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateChangeSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline CreateChangeSetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline CreateChangeSetResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline CreateChangeSetResult& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = value; }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline CreateChangeSetResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline CreateChangeSetResult& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>The unique ID of the stack.</p>
     */
    inline CreateChangeSetResult& WithStackId(const char* value) { SetStackId(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateChangeSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateChangeSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_id;
    Aws::String m_stackId;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws