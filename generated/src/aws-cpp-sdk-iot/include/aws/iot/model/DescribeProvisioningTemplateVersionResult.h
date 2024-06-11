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


    ///@{
    /**
     * <p>The provisioning template version ID.</p>
     */
    inline int GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(int value) { m_versionId = value; }
    inline DescribeProvisioningTemplateVersionResult& WithVersionId(int value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the provisioning template version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline DescribeProvisioningTemplateVersionResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline DescribeProvisioningTemplateVersionResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON formatted contents of the provisioning template version.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }
    inline DescribeProvisioningTemplateVersionResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline DescribeProvisioningTemplateVersionResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline DescribeProvisioningTemplateVersionResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the provisioning template version is the default version.</p>
     */
    inline bool GetIsDefaultVersion() const{ return m_isDefaultVersion; }
    inline void SetIsDefaultVersion(bool value) { m_isDefaultVersion = value; }
    inline DescribeProvisioningTemplateVersionResult& WithIsDefaultVersion(bool value) { SetIsDefaultVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProvisioningTemplateVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProvisioningTemplateVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProvisioningTemplateVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_versionId;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_templateBody;

    bool m_isDefaultVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
