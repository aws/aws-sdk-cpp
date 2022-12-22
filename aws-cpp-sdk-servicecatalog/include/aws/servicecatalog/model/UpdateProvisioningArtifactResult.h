/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/Status.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class UpdateProvisioningArtifactResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateProvisioningArtifactResult();
    AWS_SERVICECATALOG_API UpdateProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const{ return m_provisioningArtifactDetail; }

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetail = std::move(value); }

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactResult& WithProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>Information about the provisioning artifact.</p>
     */
    inline UpdateProvisioningArtifactResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { SetProvisioningArtifactDetail(std::move(value)); return *this;}


    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const{ return m_info; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline void SetInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_info = value; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline void SetInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_info = std::move(value); }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& WithInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetInfo(value); return *this;}

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& WithInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetInfo(std::move(value)); return *this;}

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(const Aws::String& key, const Aws::String& value) { m_info.emplace(key, value); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(Aws::String&& key, const Aws::String& value) { m_info.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(const Aws::String& key, Aws::String&& value) { m_info.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(Aws::String&& key, Aws::String&& value) { m_info.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(const char* key, Aws::String&& value) { m_info.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(Aws::String&& key, const char* value) { m_info.emplace(std::move(key), value); return *this; }

    /**
     * <p>The URL of the CloudFormation template in Amazon S3 or GitHub in JSON
     * format.</p>
     */
    inline UpdateProvisioningArtifactResult& AddInfo(const char* key, const char* value) { m_info.emplace(key, value); return *this; }


    /**
     * <p>The status of the current request.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the current request.</p>
     */
    inline UpdateProvisioningArtifactResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the current request.</p>
     */
    inline UpdateProvisioningArtifactResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ProvisioningArtifactDetail m_provisioningArtifactDetail;

    Aws::Map<Aws::String, Aws::String> m_info;

    Status m_status;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
