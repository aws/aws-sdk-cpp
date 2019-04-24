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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ParameterDeclaration.h>
#include <aws/cloudformation/model/Capability.h>
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
   * <p>The output for the <a>GetTemplateSummary</a> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummaryOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API GetTemplateSummaryResult
  {
  public:
    GetTemplateSummaryResult();
    GetTemplateSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetTemplateSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline void SetParameters(const Aws::Vector<ParameterDeclaration>& value) { m_parameters = value; }

    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline void SetParameters(Aws::Vector<ParameterDeclaration>&& value) { m_parameters = std::move(value); }

    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline GetTemplateSummaryResult& WithParameters(const Aws::Vector<ParameterDeclaration>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline GetTemplateSummaryResult& WithParameters(Aws::Vector<ParameterDeclaration>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline GetTemplateSummaryResult& AddParameters(const ParameterDeclaration& value) { m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline GetTemplateSummaryResult& AddParameters(ParameterDeclaration&& value) { m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The value that is defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilities = value; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilities = std::move(value); }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline GetTemplateSummaryResult& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline GetTemplateSummaryResult& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline GetTemplateSummaryResult& AddCapabilities(const Capability& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline GetTemplateSummaryResult& AddCapabilities(Capability&& value) { m_capabilities.push_back(std::move(value)); return *this; }


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
    inline void SetCapabilitiesReason(Aws::String&& value) { m_capabilitiesReason = std::move(value); }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline void SetCapabilitiesReason(const char* value) { m_capabilitiesReason.assign(value); }

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline GetTemplateSummaryResult& WithCapabilitiesReason(const Aws::String& value) { SetCapabilitiesReason(value); return *this;}

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline GetTemplateSummaryResult& WithCapabilitiesReason(Aws::String&& value) { SetCapabilitiesReason(std::move(value)); return *this;}

    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline GetTemplateSummaryResult& WithCapabilitiesReason(const char* value) { SetCapabilitiesReason(value); return *this;}


    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypes = value; }

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypes = std::move(value); }

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline GetTemplateSummaryResult& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline GetTemplateSummaryResult& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline GetTemplateSummaryResult& AddResourceTypes(const Aws::String& value) { m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline GetTemplateSummaryResult& AddResourceTypes(Aws::String&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline GetTemplateSummaryResult& AddResourceTypes(const char* value) { m_resourceTypes.push_back(value); return *this; }


    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The AWS template format version, which identifies the capabilities of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadata = value; }

    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadata = std::move(value); }

    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline void SetMetadata(const char* value) { m_metadata.assign(value); }

    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The value that is defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline GetTemplateSummaryResult& WithMetadata(const char* value) { SetMetadata(value); return *this;}


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
    inline void SetDeclaredTransforms(Aws::Vector<Aws::String>&& value) { m_declaredTransforms = std::move(value); }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline GetTemplateSummaryResult& WithDeclaredTransforms(const Aws::Vector<Aws::String>& value) { SetDeclaredTransforms(value); return *this;}

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline GetTemplateSummaryResult& WithDeclaredTransforms(Aws::Vector<Aws::String>&& value) { SetDeclaredTransforms(std::move(value)); return *this;}

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline GetTemplateSummaryResult& AddDeclaredTransforms(const Aws::String& value) { m_declaredTransforms.push_back(value); return *this; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline GetTemplateSummaryResult& AddDeclaredTransforms(Aws::String&& value) { m_declaredTransforms.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline GetTemplateSummaryResult& AddDeclaredTransforms(const char* value) { m_declaredTransforms.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetTemplateSummaryResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetTemplateSummaryResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ParameterDeclaration> m_parameters;

    Aws::String m_description;

    Aws::Vector<Capability> m_capabilities;

    Aws::String m_capabilitiesReason;

    Aws::Vector<Aws::String> m_resourceTypes;

    Aws::String m_version;

    Aws::String m_metadata;

    Aws::Vector<Aws::String> m_declaredTransforms;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
