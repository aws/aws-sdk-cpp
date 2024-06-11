﻿/**
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


    ///@{
    /**
     * <p>The ARN that identifies the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline CreateProvisioningTemplateVersionResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateProvisioningTemplateVersionResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the provisioning template.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(int value) { m_versionId = value; }
    inline CreateProvisioningTemplateVersionResult& WithVersionId(int value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the provisioning template version is the default version, otherwise
     * false.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }
    inline CreateProvisioningTemplateVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateProvisioningTemplateVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateProvisioningTemplateVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateProvisioningTemplateVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;

    Aws::String m_templateName;

    int m_versionId;

    bool m_isDefaultVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
