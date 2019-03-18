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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details about the Amazon RDS instances that AWS recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RDSInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API RDSInstanceDetails
  {
  public:
    RDSInstanceDetails();
    RDSInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    RDSInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RDSInstanceDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RDSInstanceDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RDSInstanceDetails& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline RDSInstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline RDSInstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance that AWS recommends.</p>
     */
    inline RDSInstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline RDSInstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline RDSInstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region of the recommended reservation.</p>
     */
    inline RDSInstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const{ return m_databaseEngine; }

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline void SetDatabaseEngine(const Aws::String& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = value; }

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline void SetDatabaseEngine(Aws::String&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::move(value); }

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline void SetDatabaseEngine(const char* value) { m_databaseEngineHasBeenSet = true; m_databaseEngine.assign(value); }

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithDatabaseEngine(const Aws::String& value) { SetDatabaseEngine(value); return *this;}

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithDatabaseEngine(Aws::String&& value) { SetDatabaseEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithDatabaseEngine(const char* value) { SetDatabaseEngine(value); return *this;}


    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEdition() const{ return m_databaseEdition; }

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline bool DatabaseEditionHasBeenSet() const { return m_databaseEditionHasBeenSet; }

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline void SetDatabaseEdition(const Aws::String& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = value; }

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline void SetDatabaseEdition(Aws::String&& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = std::move(value); }

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline void SetDatabaseEdition(const char* value) { m_databaseEditionHasBeenSet = true; m_databaseEdition.assign(value); }

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithDatabaseEdition(const Aws::String& value) { SetDatabaseEdition(value); return *this;}

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithDatabaseEdition(Aws::String&& value) { SetDatabaseEdition(std::move(value)); return *this;}

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithDatabaseEdition(const char* value) { SetDatabaseEdition(value); return *this;}


    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline const Aws::String& GetDeploymentOption() const{ return m_deploymentOption; }

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline void SetDeploymentOption(const Aws::String& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline void SetDeploymentOption(Aws::String&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline void SetDeploymentOption(const char* value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption.assign(value); }

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline RDSInstanceDetails& WithDeploymentOption(const Aws::String& value) { SetDeploymentOption(value); return *this;}

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline RDSInstanceDetails& WithDeploymentOption(Aws::String&& value) { SetDeploymentOption(std::move(value)); return *this;}

    /**
     * <p>Whether the recommendation is for a reservation in a single Availability Zone
     * or a reservation with a backup in a second Availability Zone.</p>
     */
    inline RDSInstanceDetails& WithDeploymentOption(const char* value) { SetDeploymentOption(value); return *this;}


    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline RDSInstanceDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Whether the recommendation is for a current-generation instance. </p>
     */
    inline RDSInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}


    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }

    /**
     * <p>Whether the recommended reservation is size flexible.</p>
     */
    inline RDSInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_databaseEngine;
    bool m_databaseEngineHasBeenSet;

    Aws::String m_databaseEdition;
    bool m_databaseEditionHasBeenSet;

    Aws::String m_deploymentOption;
    bool m_deploymentOptionHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
