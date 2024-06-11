/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Details about the Amazon RDS reservations that Amazon Web Services recommends
   * that you purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RDSInstanceDetails">AWS
   * API Reference</a></p>
   */
  class RDSInstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API RDSInstanceDetails();
    AWS_COSTEXPLORER_API RDSInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RDSInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }
    inline RDSInstanceDetails& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}
    inline RDSInstanceDetails& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithFamily(const char* value) { SetFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline RDSInstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline RDSInstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the recommended reservation.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RDSInstanceDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RDSInstanceDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEngine() const{ return m_databaseEngine; }
    inline bool DatabaseEngineHasBeenSet() const { return m_databaseEngineHasBeenSet; }
    inline void SetDatabaseEngine(const Aws::String& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = value; }
    inline void SetDatabaseEngine(Aws::String&& value) { m_databaseEngineHasBeenSet = true; m_databaseEngine = std::move(value); }
    inline void SetDatabaseEngine(const char* value) { m_databaseEngineHasBeenSet = true; m_databaseEngine.assign(value); }
    inline RDSInstanceDetails& WithDatabaseEngine(const Aws::String& value) { SetDatabaseEngine(value); return *this;}
    inline RDSInstanceDetails& WithDatabaseEngine(Aws::String&& value) { SetDatabaseEngine(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithDatabaseEngine(const char* value) { SetDatabaseEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetDatabaseEdition() const{ return m_databaseEdition; }
    inline bool DatabaseEditionHasBeenSet() const { return m_databaseEditionHasBeenSet; }
    inline void SetDatabaseEdition(const Aws::String& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = value; }
    inline void SetDatabaseEdition(Aws::String&& value) { m_databaseEditionHasBeenSet = true; m_databaseEdition = std::move(value); }
    inline void SetDatabaseEdition(const char* value) { m_databaseEditionHasBeenSet = true; m_databaseEdition.assign(value); }
    inline RDSInstanceDetails& WithDatabaseEdition(const Aws::String& value) { SetDatabaseEdition(value); return *this;}
    inline RDSInstanceDetails& WithDatabaseEdition(Aws::String&& value) { SetDatabaseEdition(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithDatabaseEdition(const char* value) { SetDatabaseEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline const Aws::String& GetDeploymentOption() const{ return m_deploymentOption; }
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }
    inline void SetDeploymentOption(const Aws::String& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }
    inline void SetDeploymentOption(Aws::String&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }
    inline void SetDeploymentOption(const char* value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption.assign(value); }
    inline RDSInstanceDetails& WithDeploymentOption(const Aws::String& value) { SetDeploymentOption(value); return *this;}
    inline RDSInstanceDetails& WithDeploymentOption(Aws::String&& value) { SetDeploymentOption(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithDeploymentOption(const char* value) { SetDeploymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline RDSInstanceDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline RDSInstanceDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline RDSInstanceDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommendation is for a current-generation instance.
     * </p>
     */
    inline bool GetCurrentGeneration() const{ return m_currentGeneration; }
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }
    inline void SetCurrentGeneration(bool value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }
    inline RDSInstanceDetails& WithCurrentGeneration(bool value) { SetCurrentGeneration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the recommended reservation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }
    inline RDSInstanceDetails& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}
    ///@}
  private:

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_databaseEngine;
    bool m_databaseEngineHasBeenSet = false;

    Aws::String m_databaseEdition;
    bool m_databaseEditionHasBeenSet = false;

    Aws::String m_deploymentOption;
    bool m_deploymentOptionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    bool m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
