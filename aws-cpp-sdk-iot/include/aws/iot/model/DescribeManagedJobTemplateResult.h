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
    AWS_IOT_API DescribeManagedJobTemplateResult();
    AWS_IOT_API DescribeManagedJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeManagedJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }

    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The unique name of a managed template, such as <code>AWS-Reboot</code>.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>The unique description of a managed template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The unique description of a managed template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The unique description of a managed template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The unique description of a managed template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The unique description of a managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The unique description of a managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The unique description of a managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version for a managed template.</p>
     */
    inline const Aws::String& GetTemplateVersion() const{ return m_templateVersion; }

    /**
     * <p>The version for a managed template.</p>
     */
    inline void SetTemplateVersion(const Aws::String& value) { m_templateVersion = value; }

    /**
     * <p>The version for a managed template.</p>
     */
    inline void SetTemplateVersion(Aws::String&& value) { m_templateVersion = std::move(value); }

    /**
     * <p>The version for a managed template.</p>
     */
    inline void SetTemplateVersion(const char* value) { m_templateVersion.assign(value); }

    /**
     * <p>The version for a managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateVersion(const Aws::String& value) { SetTemplateVersion(value); return *this;}

    /**
     * <p>The version for a managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateVersion(Aws::String&& value) { SetTemplateVersion(std::move(value)); return *this;}

    /**
     * <p>The version for a managed template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithTemplateVersion(const char* value) { SetTemplateVersion(value); return *this;}


    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironments() const{ return m_environments; }

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline void SetEnvironments(const Aws::Vector<Aws::String>& value) { m_environments = value; }

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline void SetEnvironments(Aws::Vector<Aws::String>&& value) { m_environments = std::move(value); }

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithEnvironments(const Aws::Vector<Aws::String>& value) { SetEnvironments(value); return *this;}

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithEnvironments(Aws::Vector<Aws::String>&& value) { SetEnvironments(std::move(value)); return *this;}

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& AddEnvironments(const Aws::String& value) { m_environments.push_back(value); return *this; }

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& AddEnvironments(Aws::String&& value) { m_environments.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of environments that are supported with the managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& AddEnvironments(const char* value) { m_environments.push_back(value); return *this; }


    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline const Aws::Vector<DocumentParameter>& GetDocumentParameters() const{ return m_documentParameters; }

    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline void SetDocumentParameters(const Aws::Vector<DocumentParameter>& value) { m_documentParameters = value; }

    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline void SetDocumentParameters(Aws::Vector<DocumentParameter>&& value) { m_documentParameters = std::move(value); }

    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline DescribeManagedJobTemplateResult& WithDocumentParameters(const Aws::Vector<DocumentParameter>& value) { SetDocumentParameters(value); return *this;}

    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline DescribeManagedJobTemplateResult& WithDocumentParameters(Aws::Vector<DocumentParameter>&& value) { SetDocumentParameters(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline DescribeManagedJobTemplateResult& AddDocumentParameters(const DocumentParameter& value) { m_documentParameters.push_back(value); return *this; }

    /**
     * <p>A map of key-value pairs that you can use as guidance to specify the inputs
     * for creating a job from a managed template.</p>  <p>
     * <code>documentParameters</code> can only be used when creating jobs from Amazon
     * Web Services managed templates. This parameter can't be used with custom job
     * templates or to create jobs from them.</p> 
     */
    inline DescribeManagedJobTemplateResult& AddDocumentParameters(DocumentParameter&& value) { m_documentParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_document = value; }

    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_document = std::move(value); }

    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline void SetDocument(const char* value) { m_document.assign(value); }

    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The document schema for a managed job template.</p>
     */
    inline DescribeManagedJobTemplateResult& WithDocument(const char* value) { SetDocument(value); return *this;}

  private:

    Aws::String m_templateName;

    Aws::String m_templateArn;

    Aws::String m_description;

    Aws::String m_templateVersion;

    Aws::Vector<Aws::String> m_environments;

    Aws::Vector<DocumentParameter> m_documentParameters;

    Aws::String m_document;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
