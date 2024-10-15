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
    AWS_CLOUDFORMATION_API ValidateTemplateResult();
    AWS_CLOUDFORMATION_API ValidateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ValidateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of <code>TemplateParameter</code> structures.</p>
     */
    inline const Aws::Vector<TemplateParameter>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Vector<TemplateParameter>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Vector<TemplateParameter>&& value) { m_parameters = std::move(value); }
    inline ValidateTemplateResult& WithParameters(const Aws::Vector<TemplateParameter>& value) { SetParameters(value); return *this;}
    inline ValidateTemplateResult& WithParameters(Aws::Vector<TemplateParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline ValidateTemplateResult& AddParameters(const TemplateParameter& value) { m_parameters.push_back(value); return *this; }
    inline ValidateTemplateResult& AddParameters(TemplateParameter&& value) { m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description found within the template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline ValidateTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ValidateTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ValidateTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities found within the template. If your template contains IAM
     * resources, you must specify the CAPABILITY_IAM or CAPABILITY_NAMED_IAM value for
     * this parameter when you use the <a>CreateStack</a> or <a>UpdateStack</a> actions
     * with your template; otherwise, those actions return an InsufficientCapabilities
     * error.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilities = std::move(value); }
    inline ValidateTemplateResult& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}
    inline ValidateTemplateResult& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline ValidateTemplateResult& AddCapabilities(const Capability& value) { m_capabilities.push_back(value); return *this; }
    inline ValidateTemplateResult& AddCapabilities(Capability&& value) { m_capabilities.push_back(std::move(value)); return *this; }
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
    inline ValidateTemplateResult& WithCapabilitiesReason(const Aws::String& value) { SetCapabilitiesReason(value); return *this;}
    inline ValidateTemplateResult& WithCapabilitiesReason(Aws::String&& value) { SetCapabilitiesReason(std::move(value)); return *this;}
    inline ValidateTemplateResult& WithCapabilitiesReason(const char* value) { SetCapabilitiesReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the transforms that are declared in the template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeclaredTransforms() const{ return m_declaredTransforms; }
    inline void SetDeclaredTransforms(const Aws::Vector<Aws::String>& value) { m_declaredTransforms = value; }
    inline void SetDeclaredTransforms(Aws::Vector<Aws::String>&& value) { m_declaredTransforms = std::move(value); }
    inline ValidateTemplateResult& WithDeclaredTransforms(const Aws::Vector<Aws::String>& value) { SetDeclaredTransforms(value); return *this;}
    inline ValidateTemplateResult& WithDeclaredTransforms(Aws::Vector<Aws::String>&& value) { SetDeclaredTransforms(std::move(value)); return *this;}
    inline ValidateTemplateResult& AddDeclaredTransforms(const Aws::String& value) { m_declaredTransforms.push_back(value); return *this; }
    inline ValidateTemplateResult& AddDeclaredTransforms(Aws::String&& value) { m_declaredTransforms.push_back(std::move(value)); return *this; }
    inline ValidateTemplateResult& AddDeclaredTransforms(const char* value) { m_declaredTransforms.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ValidateTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ValidateTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
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
