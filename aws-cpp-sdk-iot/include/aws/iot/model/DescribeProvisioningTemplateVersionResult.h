/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeProvisioningTemplateVersionResult
  {
  public:
    AWS_IOT_API DescribeProvisioningTemplateVersionResult();
    AWS_IOT_API DescribeProvisioningTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeProvisioningTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The provisioning template version ID.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }

    /**
     * <p>The provisioning template version ID.</p>
     */
    inline void SetVersionId(int value) { m_versionId = value; }

    /**
     * <p>The provisioning template version ID.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithVersionId(int value) { SetVersionId(value); return *this;}


    /**
     * <p>The date when the provisioning template version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when the provisioning template version was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date when the provisioning template version was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date when the provisioning template version was created.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when the provisioning template version was created.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }

    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }

    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }

    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>True if the provisioning template version is the default version.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }

    /**
     * <p>True if the provisioning template version is the default version.</p>
     */
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }

    /**
     * <p>True if the provisioning template version is the default version.</p>
     */
    inline DescribeProvisioningTemplateVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}

  private:

    int m_versionId;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_templateBody;

    bool m_isDefaultVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
