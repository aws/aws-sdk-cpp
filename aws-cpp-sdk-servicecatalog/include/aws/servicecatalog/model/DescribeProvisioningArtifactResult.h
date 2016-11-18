/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_SERVICECATALOG_API DescribeProvisioningArtifactResult
  {
  public:
    DescribeProvisioningArtifactResult();
    DescribeProvisioningArtifactResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProvisioningArtifactResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Detailed provisioning artifact information.</p>
     */
    inline const ProvisioningArtifactDetail& GetProvisioningArtifactDetail() const{ return m_provisioningArtifactDetail; }

    /**
     * <p>Detailed provisioning artifact information.</p>
     */
    inline void SetProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>Detailed provisioning artifact information.</p>
     */
    inline void SetProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { m_provisioningArtifactDetail = value; }

    /**
     * <p>Detailed provisioning artifact information.</p>
     */
    inline DescribeProvisioningArtifactResult& WithProvisioningArtifactDetail(const ProvisioningArtifactDetail& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>Detailed provisioning artifact information.</p>
     */
    inline DescribeProvisioningArtifactResult& WithProvisioningArtifactDetail(ProvisioningArtifactDetail&& value) { SetProvisioningArtifactDetail(value); return *this;}

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const{ return m_info; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline void SetInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_info = value; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline void SetInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_info = value; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& WithInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetInfo(value); return *this;}

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& WithInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetInfo(value); return *this;}

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const Aws::String& key, const Aws::String& value) { m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(Aws::String&& key, const Aws::String& value) { m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const Aws::String& key, Aws::String&& value) { m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(Aws::String&& key, Aws::String&& value) { m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const char* key, Aws::String&& value) { m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(Aws::String&& key, const char* value) { m_info[key] = value; return *this; }

    /**
     * <p>Additional information about the provisioning artifact.</p>
     */
    inline DescribeProvisioningArtifactResult& AddInfo(const char* key, const char* value) { m_info[key] = value; return *this; }

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
    inline void SetStatus(Status&& value) { m_status = value; }

    /**
     * <p>The status of the current request.</p>
     */
    inline DescribeProvisioningArtifactResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the current request.</p>
     */
    inline DescribeProvisioningArtifactResult& WithStatus(Status&& value) { SetStatus(value); return *this;}

  private:
    ProvisioningArtifactDetail m_provisioningArtifactDetail;
    Aws::Map<Aws::String, Aws::String> m_info;
    Status m_status;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
