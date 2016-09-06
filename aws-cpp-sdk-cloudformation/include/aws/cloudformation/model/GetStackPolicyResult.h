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
   * <p>The output for the <a>GetStackPolicy</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API GetStackPolicyResult
  {
  public:
    GetStackPolicyResult();
    GetStackPolicyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetStackPolicyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline const Aws::String& GetStackPolicyBody() const{ return m_stackPolicyBody; }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline void SetStackPolicyBody(const Aws::String& value) { m_stackPolicyBody = value; }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline void SetStackPolicyBody(Aws::String&& value) { m_stackPolicyBody = value; }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline void SetStackPolicyBody(const char* value) { m_stackPolicyBody.assign(value); }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline GetStackPolicyResult& WithStackPolicyBody(const Aws::String& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline GetStackPolicyResult& WithStackPolicyBody(Aws::String&& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the AWS CloudFormation User
     * Guide.)</p>
     */
    inline GetStackPolicyResult& WithStackPolicyBody(const char* value) { SetStackPolicyBody(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetStackPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetStackPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_stackPolicyBody;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws