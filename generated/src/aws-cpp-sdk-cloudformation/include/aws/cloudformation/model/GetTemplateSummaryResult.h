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
    AWS_CLOUDFORMATION_API GetTemplateSummaryResult() = default;
    AWS_CLOUDFORMATION_API GetTemplateSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API GetTemplateSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of parameter declarations that describe various properties for each
     * parameter.</p>
     */
    inline const Aws::Vector<ParameterDeclaration>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Vector<ParameterDeclaration>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<ParameterDeclaration>>
    GetTemplateSummaryResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = ParameterDeclaration>
    GetTemplateSummaryResult& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that's defined in the <code>Description</code> property of the
     * template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetTemplateSummaryResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> value for this parameter when you use the
     * <a>CreateStack</a> or <a>UpdateStack</a> actions with your template; otherwise,
     * those actions return an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/control-access-with-iam.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    GetTemplateSummaryResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline GetTemplateSummaryResult& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of resources that generated the values in the
     * <code>Capabilities</code> response element.</p>
     */
    inline const Aws::String& GetCapabilitiesReason() const { return m_capabilitiesReason; }
    template<typename CapabilitiesReasonT = Aws::String>
    void SetCapabilitiesReason(CapabilitiesReasonT&& value) { m_capabilitiesReasonHasBeenSet = true; m_capabilitiesReason = std::forward<CapabilitiesReasonT>(value); }
    template<typename CapabilitiesReasonT = Aws::String>
    GetTemplateSummaryResult& WithCapabilitiesReason(CapabilitiesReasonT&& value) { SetCapabilitiesReason(std::forward<CapabilitiesReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all the template resource types that are defined in the template,
     * such as <code>AWS::EC2::Instance</code>, <code>AWS::Dynamo::Table</code>, and
     * <code>Custom::MyCustomInstance</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    GetTemplateSummaryResult& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = Aws::String>
    GetTemplateSummaryResult& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services template format version, which identifies the
     * capabilities of the template.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    GetTemplateSummaryResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that's defined for the <code>Metadata</code> property of the
     * template.</p>
     */
    inline const Aws::String& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = Aws::String>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::String>
    GetTemplateSummaryResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeclaredTransforms() const { return m_declaredTransforms; }
    template<typename DeclaredTransformsT = Aws::Vector<Aws::String>>
    void SetDeclaredTransforms(DeclaredTransformsT&& value) { m_declaredTransformsHasBeenSet = true; m_declaredTransforms = std::forward<DeclaredTransformsT>(value); }
    template<typename DeclaredTransformsT = Aws::Vector<Aws::String>>
    GetTemplateSummaryResult& WithDeclaredTransforms(DeclaredTransformsT&& value) { SetDeclaredTransforms(std::forward<DeclaredTransformsT>(value)); return *this;}
    template<typename DeclaredTransformsT = Aws::String>
    GetTemplateSummaryResult& AddDeclaredTransforms(DeclaredTransformsT&& value) { m_declaredTransformsHasBeenSet = true; m_declaredTransforms.emplace_back(std::forward<DeclaredTransformsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource identifier summaries that describe the target resources of
     * an import operation and the properties you can provide during the import to
     * identify the target resources. For example, <code>BucketName</code> is a
     * possible identifier property for an <code>AWS::S3::Bucket</code> resource.</p>
     */
    inline const Aws::Vector<ResourceIdentifierSummary>& GetResourceIdentifierSummaries() const { return m_resourceIdentifierSummaries; }
    template<typename ResourceIdentifierSummariesT = Aws::Vector<ResourceIdentifierSummary>>
    void SetResourceIdentifierSummaries(ResourceIdentifierSummariesT&& value) { m_resourceIdentifierSummariesHasBeenSet = true; m_resourceIdentifierSummaries = std::forward<ResourceIdentifierSummariesT>(value); }
    template<typename ResourceIdentifierSummariesT = Aws::Vector<ResourceIdentifierSummary>>
    GetTemplateSummaryResult& WithResourceIdentifierSummaries(ResourceIdentifierSummariesT&& value) { SetResourceIdentifierSummaries(std::forward<ResourceIdentifierSummariesT>(value)); return *this;}
    template<typename ResourceIdentifierSummariesT = ResourceIdentifierSummary>
    GetTemplateSummaryResult& AddResourceIdentifierSummaries(ResourceIdentifierSummariesT&& value) { m_resourceIdentifierSummariesHasBeenSet = true; m_resourceIdentifierSummaries.emplace_back(std::forward<ResourceIdentifierSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains any warnings returned.</p>
     */
    inline const Warnings& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Warnings>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Warnings>
    GetTemplateSummaryResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetTemplateSummaryResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ParameterDeclaration> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_capabilitiesReason;
    bool m_capabilitiesReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<Aws::String> m_declaredTransforms;
    bool m_declaredTransformsHasBeenSet = false;

    Aws::Vector<ResourceIdentifierSummary> m_resourceIdentifierSummaries;
    bool m_resourceIdentifierSummariesHasBeenSet = false;

    Warnings m_warnings;
    bool m_warningsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
