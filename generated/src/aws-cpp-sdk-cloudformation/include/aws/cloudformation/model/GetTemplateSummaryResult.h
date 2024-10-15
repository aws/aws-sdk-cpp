/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/Warnings.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ParameterDeclaration.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/ResourceIdentifierSummary.h>
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
  class GetTemplateSummaryResult
  {
  public:
    AWS_CLOUDFORMATION_API GetTemplateSummaryResult();
    AWS_CLOUDFORMATION_API GetTemplateSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API GetTemplateSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Vector<ParameterDeclaration>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Vector<ParameterDeclaration>&& value) { m_parameters = std::move(value); }
    inline GetTemplateSummaryResult& WithParameters(const Aws::Vector<ParameterDeclaration>& value) { SetParameters(value); return *this;}
    inline GetTemplateSummaryResult& WithParameters(Aws::Vector<ParameterDeclaration>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& AddParameters(const ParameterDeclaration& value) { m_parameters.push_back(value); return *this; }
    inline GetTemplateSummaryResult& AddParameters(ParameterDeclaration&& value) { m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that's defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTemplateSummaryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTemplateSummaryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> value for this parameter when you use the
     * <a>CreateStack</a> or <a>UpdateStack</a> actions with your template; otherwise,
     * those actions return an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilities = std::move(value); }
    inline GetTemplateSummaryResult& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}
    inline GetTemplateSummaryResult& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& AddCapabilities(const Capability& value) { m_capabilities.push_back(value); return *this; }
    inline GetTemplateSummaryResult& AddCapabilities(Capability&& value) { m_capabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline const Aws::String& GetCapabilitiesReason() const{ return m_capabilitiesReason; }
    inline void SetCapabilitiesReason(const Aws::String& value) { m_capabilitiesReason = value; }
    inline void SetCapabilitiesReason(Aws::String&& value) { m_capabilitiesReason = std::move(value); }
    inline void SetCapabilitiesReason(const char* value) { m_capabilitiesReason.assign(value); }
    inline GetTemplateSummaryResult& WithCapabilitiesReason(const Aws::String& value) { SetCapabilitiesReason(value); return *this;}
    inline GetTemplateSummaryResult& WithCapabilitiesReason(Aws::String&& value) { SetCapabilitiesReason(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& WithCapabilitiesReason(const char* value) { SetCapabilitiesReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypes = std::move(value); }
    inline GetTemplateSummaryResult& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline GetTemplateSummaryResult& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& AddResourceTypes(const Aws::String& value) { m_resourceTypes.push_back(value); return *this; }
    inline GetTemplateSummaryResult& AddResourceTypes(Aws::String&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }
    inline GetTemplateSummaryResult& AddResourceTypes(const char* value) { m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services template format version, which identifies the
     * capabilities of the template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline GetTemplateSummaryResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GetTemplateSummaryResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that's defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const Aws::String& value) { m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadata.assign(value); }
    inline GetTemplateSummaryResult& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline GetTemplateSummaryResult& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeclaredTransforms() const{ return m_declaredTransforms; }
    inline void SetDeclaredTransforms(const Aws::Vector<Aws::String>& value) { m_declaredTransforms = value; }
    inline void SetDeclaredTransforms(Aws::Vector<Aws::String>&& value) { m_declaredTransforms = std::move(value); }
    inline GetTemplateSummaryResult& WithDeclaredTransforms(const Aws::Vector<Aws::String>& value) { SetDeclaredTransforms(value); return *this;}
    inline GetTemplateSummaryResult& WithDeclaredTransforms(Aws::Vector<Aws::String>&& value) { SetDeclaredTransforms(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& AddDeclaredTransforms(const Aws::String& value) { m_declaredTransforms.push_back(value); return *this; }
    inline GetTemplateSummaryResult& AddDeclaredTransforms(Aws::String&& value) { m_declaredTransforms.push_back(std::move(value)); return *this; }
    inline GetTemplateSummaryResult& AddDeclaredTransforms(const char* value) { m_declaredTransforms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource identifier summaries that describe the target resources of
     * an import operation and the properties you can provide during the import to
     * identify the target resources. For example, <code>BucketName</code> is a
     * possible identifier property for an <code>AWS::S3::Bucket</code> resource.</p>
     */
    inline const Aws::Vector<ResourceIdentifierSummary>& GetResourceIdentifierSummaries() const{ return m_resourceIdentifierSummaries; }
    inline void SetResourceIdentifierSummaries(const Aws::Vector<ResourceIdentifierSummary>& value) { m_resourceIdentifierSummaries = value; }
    inline void SetResourceIdentifierSummaries(Aws::Vector<ResourceIdentifierSummary>&& value) { m_resourceIdentifierSummaries = std::move(value); }
    inline GetTemplateSummaryResult& WithResourceIdentifierSummaries(const Aws::Vector<ResourceIdentifierSummary>& value) { SetResourceIdentifierSummaries(value); return *this;}
    inline GetTemplateSummaryResult& WithResourceIdentifierSummaries(Aws::Vector<ResourceIdentifierSummary>&& value) { SetResourceIdentifierSummaries(std::move(value)); return *this;}
    inline GetTemplateSummaryResult& AddResourceIdentifierSummaries(const ResourceIdentifierSummary& value) { m_resourceIdentifierSummaries.push_back(value); return *this; }
    inline GetTemplateSummaryResult& AddResourceIdentifierSummaries(ResourceIdentifierSummary&& value) { m_resourceIdentifierSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object containing any warnings returned.</p>
     */
    inline const Warnings& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Warnings& value) { m_warnings = value; }
    inline void SetWarnings(Warnings&& value) { m_warnings = std::move(value); }
    inline GetTemplateSummaryResult& WithWarnings(const Warnings& value) { SetWarnings(value); return *this;}
    inline GetTemplateSummaryResult& WithWarnings(Warnings&& value) { SetWarnings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetTemplateSummaryResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetTemplateSummaryResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ParameterDeclaration> m_parameters;

    Aws::String m_description;

    Aws::Vector<Capability> m_capabilities;

    Aws::String m_capabilitiesReason;

    Aws::Vector<Aws::String> m_resourceTypes;

    Aws::String m_version;

    Aws::String m_metadata;

    Aws::Vector<Aws::String> m_declaredTransforms;

    Aws::Vector<ResourceIdentifierSummary> m_resourceIdentifierSummaries;

    Warnings m_warnings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
