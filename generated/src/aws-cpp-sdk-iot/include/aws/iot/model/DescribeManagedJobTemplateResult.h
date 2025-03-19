/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/DocumentParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class DescribeManagedJobTemplateResult
  {
  public:
    AWS_IOT_API DescribeManagedJobTemplateResult() = default;
    AWS_IOT_API DescribeManagedJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeManagedJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    DescribeManagedJobTemplateResult& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    DescribeManagedJobTemplateResult& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique description of a managed template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeManagedJobTemplateResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for a managed template.</p>
     */
    inline const Aws::String& GetTemplateVersion() const { return m_templateVersion; }
    template<typename TemplateVersionT = Aws::String>
    void SetTemplateVersion(TemplateVersionT&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::forward<TemplateVersionT>(value); }
    template<typename TemplateVersionT = Aws::String>
    DescribeManagedJobTemplateResult& WithTemplateVersion(TemplateVersionT&& value) { SetTemplateVersion(std::forward<TemplateVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironments() const { return m_environments; }
    template<typename EnvironmentsT = Aws::Vector<Aws::String>>
    void SetEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments = std::forward<EnvironmentsT>(value); }
    template<typename EnvironmentsT = Aws::Vector<Aws::String>>
    DescribeManagedJobTemplateResult& WithEnvironments(EnvironmentsT&& value) { SetEnvironments(std::forward<EnvironmentsT>(value)); return *this;}
    template<typename EnvironmentsT = Aws::String>
    DescribeManagedJobTemplateResult& AddEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments.emplace_back(std::forward<EnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline const Aws::Vector<DocumentParameter>& GetDocumentParameters() const { return m_documentParameters; }
    template<typename DocumentParametersT = Aws::Vector<DocumentParameter>>
    void SetDocumentParameters(DocumentParametersT&& value) { m_documentParametersHasBeenSet = true; m_documentParameters = std::forward<DocumentParametersT>(value); }
    template<typename DocumentParametersT = Aws::Vector<DocumentParameter>>
    DescribeManagedJobTemplateResult& WithDocumentParameters(DocumentParametersT&& value) { SetDocumentParameters(std::forward<DocumentParametersT>(value)); return *this;}
    template<typename DocumentParametersT = DocumentParameter>
    DescribeManagedJobTemplateResult& AddDocumentParameters(DocumentParametersT&& value) { m_documentParametersHasBeenSet = true; m_documentParameters.emplace_back(std::forward<DocumentParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline const Aws::String& GetDocument() const { return m_document; }
    template<typename DocumentT = Aws::String>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Aws::String>
    DescribeManagedJobTemplateResult& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeManagedJobTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_templateVersion;
    bool m_templateVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_environments;
    bool m_environmentsHasBeenSet = false;

    Aws::Vector<DocumentParameter> m_documentParameters;
    bool m_documentParametersHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
