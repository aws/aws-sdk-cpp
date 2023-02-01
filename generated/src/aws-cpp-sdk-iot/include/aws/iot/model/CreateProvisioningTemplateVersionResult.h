/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateProvisioningTemplateVersionResult
  {
  public:
    AWS_IOT_API CreateProvisioningTemplateVersionResult();
    AWS_IOT_API CreateProvisioningTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateProvisioningTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The version of the provisioning template.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version of the provisioning template.</p>
     */
    inline void SetVersionId(int value) { m_versionId = value; }

    /**
     * <p>The version of the provisioning template.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithVersionId(int value) { SetVersionId(value); return *this;}


    /**
     * <p>True if the provisioning template version is the default version, otherwise
     * false.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>True if the provisioning template version is the default version, otherwise
     * false.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }

    /**
     * <p>True if the provisioning template version is the default version, otherwise
     * false.</p>
     */
    inline CreateProvisioningTemplateVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::String m_templateName;

    int m_versionId;

    bool m_isDefaultVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
