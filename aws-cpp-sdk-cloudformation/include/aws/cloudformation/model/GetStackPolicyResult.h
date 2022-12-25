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
  /**
   * <p>The output for the <a>GetStackPolicy</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetStackPolicyOutput">AWS
   * API Reference</a></p>
   */
  class GetStackPolicyResult
  {
  public:
    AWS_CLOUDFORMATION_API GetStackPolicyResult();
    AWS_CLOUDFORMATION_API GetStackPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API GetStackPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline const Aws::String& GetStackPolicyBody() const{ return m_stackPolicyBody; }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline void SetStackPolicyBody(const Aws::String& value) { m_stackPolicyBody = value; }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline void SetStackPolicyBody(Aws::String&& value) { m_stackPolicyBody = std::move(value); }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline void SetStackPolicyBody(const char* value) { m_stackPolicyBody.assign(value); }

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline GetStackPolicyResult& WithStackPolicyBody(const Aws::String& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline GetStackPolicyResult& WithStackPolicyBody(Aws::String&& value) { SetStackPolicyBody(std::move(value)); return *this;}

    /**
     * <p>Structure containing the stack policy body. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the CloudFormation User Guide.)</p>
     */
    inline GetStackPolicyResult& WithStackPolicyBody(const char* value) { SetStackPolicyBody(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetStackPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetStackPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_stackPolicyBody;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
