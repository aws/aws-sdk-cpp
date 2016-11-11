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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/TemplateStage.h>

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
   * <p>The output for <a>GetTemplate</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API GetTemplateResult
  {
  public:
    GetTemplateResult();
    GetTemplateResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetTemplateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = value; }

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline GetTemplateResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline GetTemplateResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>AWS CloudFormation
     * returns the same template that was used when the stack was created.</p>
     */
    inline GetTemplateResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline const Aws::Vector<TemplateStage>& GetStagesAvailable() const{ return m_stagesAvailable; }

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline void SetStagesAvailable(const Aws::Vector<TemplateStage>& value) { m_stagesAvailable = value; }

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline void SetStagesAvailable(Aws::Vector<TemplateStage>&& value) { m_stagesAvailable = value; }

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline GetTemplateResult& WithStagesAvailable(const Aws::Vector<TemplateStage>& value) { SetStagesAvailable(value); return *this;}

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline GetTemplateResult& WithStagesAvailable(Aws::Vector<TemplateStage>&& value) { SetStagesAvailable(value); return *this;}

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline GetTemplateResult& AddStagesAvailable(const TemplateStage& value) { m_stagesAvailable.push_back(value); return *this; }

    /**
     * <p>The template type.</p> <ul> <li> <p>For stacks, you can use either the
     * <code>Original</code> or the <code>Processed</code> template type.</p> </li>
     * <li> <p>For change sets, you can use only the <code>Original</code> template
     * type. After the transforms are processed, you can use the <code>Processed</code>
     * template type.</p> </li> </ul> <note> <p>If you create a change set for a new
     * stack, you must select the template type.</p> </note>
     */
    inline GetTemplateResult& AddStagesAvailable(TemplateStage&& value) { m_stagesAvailable.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_templateBody;
    Aws::Vector<TemplateStage> m_stagesAvailable;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws