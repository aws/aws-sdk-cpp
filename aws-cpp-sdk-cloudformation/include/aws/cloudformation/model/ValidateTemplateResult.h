﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/TemplateParameter.h>
#include <aws/cloudformation/model/Capability.h>

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
   * <p>The output for <a>ValidateTemplate</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API ValidateTemplateResult
  {
  public:
    ValidateTemplateResult();
    ValidateTemplateResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ValidateTemplateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline const Aws::Vector<TemplateParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline void SetParameters(const Aws::Vector<TemplateParameter>& value) { m_parameters = value; }

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline void SetParameters(Aws::Vector<TemplateParameter>&& value) { m_parameters = value; }

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline ValidateTemplateResult& WithParameters(const Aws::Vector<TemplateParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline ValidateTemplateResult& WithParameters(Aws::Vector<TemplateParameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline ValidateTemplateResult& AddParameters(const TemplateParameter& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline ValidateTemplateResult& AddParameters(TemplateParameter&& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>The description found within the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description found within the template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description found within the template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The description found within the template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description found within the template.</p>
     */
    inline ValidateTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description found within the template.</p>
     */
    inline ValidateTemplateResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description found within the template.</p>
     */
    inline ValidateTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilities = value; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilities = value; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline ValidateTemplateResult& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline ValidateTemplateResult& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline ValidateTemplateResult& AddCapabilities(const Capability& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline ValidateTemplateResult& AddCapabilities(Capability&& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline const Aws::String& GetCapabilitiesReason() const{ return m_capabilitiesReason; }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline void SetCapabilitiesReason(const Aws::String& value) { m_capabilitiesReason = value; }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline void SetCapabilitiesReason(Aws::String&& value) { m_capabilitiesReason = value; }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline void SetCapabilitiesReason(const char* value) { m_capabilitiesReason.assign(value); }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline ValidateTemplateResult& WithCapabilitiesReason(const Aws::String& value) { SetCapabilitiesReason(value); return *this;}

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline ValidateTemplateResult& WithCapabilitiesReason(Aws::String&& value) { SetCapabilitiesReason(value); return *this;}

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline ValidateTemplateResult& WithCapabilitiesReason(const char* value) { SetCapabilitiesReason(value); return *this;}

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeclaredTransforms() const{ return m_declaredTransforms; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline void SetDeclaredTransforms(const Aws::Vector<Aws::String>& value) { m_declaredTransforms = value; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline void SetDeclaredTransforms(Aws::Vector<Aws::String>&& value) { m_declaredTransforms = value; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline ValidateTemplateResult& WithDeclaredTransforms(const Aws::Vector<Aws::String>& value) { SetDeclaredTransforms(value); return *this;}

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline ValidateTemplateResult& WithDeclaredTransforms(Aws::Vector<Aws::String>&& value) { SetDeclaredTransforms(value); return *this;}

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline ValidateTemplateResult& AddDeclaredTransforms(const Aws::String& value) { m_declaredTransforms.push_back(value); return *this; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline ValidateTemplateResult& AddDeclaredTransforms(Aws::String&& value) { m_declaredTransforms.push_back(value); return *this; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline ValidateTemplateResult& AddDeclaredTransforms(const char* value) { m_declaredTransforms.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ValidateTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ValidateTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<TemplateParameter> m_parameters;
    Aws::String m_description;
    Aws::Vector<Capability> m_capabilities;
    Aws::String m_capabilitiesReason;
    Aws::Vector<Aws::String> m_declaredTransforms;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws