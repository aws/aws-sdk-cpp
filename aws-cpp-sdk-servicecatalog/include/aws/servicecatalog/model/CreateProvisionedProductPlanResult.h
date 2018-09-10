/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_SERVICECATALOG_API CreateProvisionedProductPlanResult
  {
  public:
    CreateProvisionedProductPlanResult();
    CreateProvisionedProductPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProvisionedProductPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const{ return m_planName; }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(const Aws::String& value) { m_planName = value; }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(Aws::String&& value) { m_planName = std::move(value); }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(const char* value) { m_planName.assign(value); }

    /**
     * <p>The name of the plan.</p>
     */
    inline CreateProvisionedProductPlanResult& WithPlanName(const Aws::String& value) { SetPlanName(value); return *this;}

    /**
     * <p>The name of the plan.</p>
     */
    inline CreateProvisionedProductPlanResult& WithPlanName(Aws::String&& value) { SetPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the plan.</p>
     */
    inline CreateProvisionedProductPlanResult& WithPlanName(const char* value) { SetPlanName(value); return *this;}


    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const{ return m_planId; }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(const Aws::String& value) { m_planId = value; }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(Aws::String&& value) { m_planId = std::move(value); }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(const char* value) { m_planId.assign(value); }

    /**
     * <p>The plan identifier.</p>
     */
    inline CreateProvisionedProductPlanResult& WithPlanId(const Aws::String& value) { SetPlanId(value); return *this;}

    /**
     * <p>The plan identifier.</p>
     */
    inline CreateProvisionedProductPlanResult& WithPlanId(Aws::String&& value) { SetPlanId(std::move(value)); return *this;}

    /**
     * <p>The plan identifier.</p>
     */
    inline CreateProvisionedProductPlanResult& WithPlanId(const char* value) { SetPlanId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const{ return m_provisionProductId; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const Aws::String& value) { m_provisionProductId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(Aws::String&& value) { m_provisionProductId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const char* value) { m_provisionProductId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisionProductId(const Aws::String& value) { SetProvisionProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisionProductId(Aws::String&& value) { SetProvisionProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisionProductId(const char* value) { SetProvisionProductId(value); return *this;}


    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductName = value; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductName = std::move(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductName.assign(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline CreateProvisionedProductPlanResult& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

  private:

    Aws::String m_planName;

    Aws::String m_planId;

    Aws::String m_provisionProductId;

    Aws::String m_provisionedProductName;

    Aws::String m_provisioningArtifactId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
