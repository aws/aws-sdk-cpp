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
#include <aws/servicecatalog/model/ProvisionedProductPlanType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductPlanSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisionedProductPlanSummary
  {
  public:
    ProvisionedProductPlanSummary();
    ProvisionedProductPlanSummary(Aws::Utils::Json::JsonView jsonValue);
    ProvisionedProductPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const{ return m_planName; }

    /**
     * <p>The name of the plan.</p>
     */
    inline bool PlanNameHasBeenSet() const { return m_planNameHasBeenSet; }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(const Aws::String& value) { m_planNameHasBeenSet = true; m_planName = value; }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(Aws::String&& value) { m_planNameHasBeenSet = true; m_planName = std::move(value); }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(const char* value) { m_planNameHasBeenSet = true; m_planName.assign(value); }

    /**
     * <p>The name of the plan.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanName(const Aws::String& value) { SetPlanName(value); return *this;}

    /**
     * <p>The name of the plan.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanName(Aws::String&& value) { SetPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the plan.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanName(const char* value) { SetPlanName(value); return *this;}


    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const{ return m_planId; }

    /**
     * <p>The plan identifier.</p>
     */
    inline bool PlanIdHasBeenSet() const { return m_planIdHasBeenSet; }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(const Aws::String& value) { m_planIdHasBeenSet = true; m_planId = value; }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(Aws::String&& value) { m_planIdHasBeenSet = true; m_planId = std::move(value); }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(const char* value) { m_planIdHasBeenSet = true; m_planId.assign(value); }

    /**
     * <p>The plan identifier.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanId(const Aws::String& value) { SetPlanId(value); return *this;}

    /**
     * <p>The plan identifier.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanId(Aws::String&& value) { SetPlanId(std::move(value)); return *this;}

    /**
     * <p>The plan identifier.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanId(const char* value) { SetPlanId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const{ return m_provisionProductId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProvisionProductIdHasBeenSet() const { return m_provisionProductIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const Aws::String& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(Aws::String&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const char* value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisionProductId(const Aws::String& value) { SetProvisionProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisionProductId(Aws::String&& value) { SetProvisionProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisionProductId(const char* value) { SetProvisionProductId(value); return *this;}


    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionProductName() const{ return m_provisionProductName; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline bool ProvisionProductNameHasBeenSet() const { return m_provisionProductNameHasBeenSet; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionProductName(const Aws::String& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = value; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionProductName(Aws::String&& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = std::move(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionProductName(const char* value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName.assign(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisionProductName(const Aws::String& value) { SetProvisionProductName(value); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisionProductName(Aws::String&& value) { SetProvisionProductName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisionProductName(const char* value) { SetProvisionProductName(value); return *this;}


    /**
     * <p>The plan type.</p>
     */
    inline const ProvisionedProductPlanType& GetPlanType() const{ return m_planType; }

    /**
     * <p>The plan type.</p>
     */
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetPlanType(const ProvisionedProductPlanType& value) { m_planTypeHasBeenSet = true; m_planType = value; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetPlanType(ProvisionedProductPlanType&& value) { m_planTypeHasBeenSet = true; m_planType = std::move(value); }

    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanType(const ProvisionedProductPlanType& value) { SetPlanType(value); return *this;}

    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanSummary& WithPlanType(ProvisionedProductPlanType&& value) { SetPlanType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisionedProductPlanSummary& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

  private:

    Aws::String m_planName;
    bool m_planNameHasBeenSet;

    Aws::String m_planId;
    bool m_planIdHasBeenSet;

    Aws::String m_provisionProductId;
    bool m_provisionProductIdHasBeenSet;

    Aws::String m_provisionProductName;
    bool m_provisionProductNameHasBeenSet;

    ProvisionedProductPlanType m_planType;
    bool m_planTypeHasBeenSet;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
