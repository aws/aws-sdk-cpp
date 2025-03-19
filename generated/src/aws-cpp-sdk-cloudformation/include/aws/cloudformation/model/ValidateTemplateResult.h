/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/TemplateParameter.h>
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
   * <p>The output for <a>ValidateTemplate</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ValidateTemplateOutput">AWS
   * API Reference</a></p>
   */
  class ValidateTemplateResult
  {
  public:
    AWS_CLOUDFORMATION_API ValidateTemplateResult() = default;
    AWS_CLOUDFORMATION_API ValidateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ValidateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline const Aws::Vector<TemplateParameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Vector<TemplateParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<TemplateParameter>>
    ValidateTemplateResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = TemplateParameter>
    ValidateTemplateResult& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description found within the template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ValidateTemplateResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/control-access-with-iam.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    ValidateTemplateResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline ValidateTemplateResult& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
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
    ValidateTemplateResult& WithCapabilitiesReason(CapabilitiesReasonT&& value) { SetCapabilitiesReason(std::forward<CapabilitiesReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeclaredTransforms() const { return m_declaredTransforms; }
    template<typename DeclaredTransformsT = Aws::Vector<Aws::String>>
    void SetDeclaredTransforms(DeclaredTransformsT&& value) { m_declaredTransformsHasBeenSet = true; m_declaredTransforms = std::forward<DeclaredTransformsT>(value); }
    template<typename DeclaredTransformsT = Aws::Vector<Aws::String>>
    ValidateTemplateResult& WithDeclaredTransforms(DeclaredTransformsT&& value) { SetDeclaredTransforms(std::forward<DeclaredTransformsT>(value)); return *this;}
    template<typename DeclaredTransformsT = Aws::String>
    ValidateTemplateResult& AddDeclaredTransforms(DeclaredTransformsT&& value) { m_declaredTransformsHasBeenSet = true; m_declaredTransforms.emplace_back(std::forward<DeclaredTransformsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ValidateTemplateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TemplateParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_capabilitiesReason;
    bool m_capabilitiesReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_declaredTransforms;
    bool m_declaredTransformsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
