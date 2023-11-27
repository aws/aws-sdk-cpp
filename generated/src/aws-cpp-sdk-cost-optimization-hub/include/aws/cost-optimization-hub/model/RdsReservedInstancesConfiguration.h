/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The RDS reserved instances configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/RdsReservedInstancesConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsReservedInstancesConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API RdsReservedInstancesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline const Aws::String& GetAccountScope() const{ return m_accountScope; }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline void SetAccountScope(const Aws::String& value) { m_accountScopeHasBeenSet = true; m_accountScope = value; }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline void SetAccountScope(Aws::String&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::move(value); }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline void SetAccountScope(const char* value) { m_accountScopeHasBeenSet = true; m_accountScope.assign(value); }

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline RdsReservedInstancesConfiguration& WithAccountScope(const Aws::String& value) { SetAccountScope(value); return *this;}

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline RdsReservedInstancesConfiguration& WithAccountScope(Aws::String&& value) { SetAccountScope(std::move(value)); return *this;}

    /**
     * <p>The account scope that you want your recommendations for.</p>
     */
    inline RdsReservedInstancesConfiguration& WithAccountScope(const char* value) { SetAccountScope(value); return *this;}


    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline const Aws::String& GetCurrentGeneration() const{ return m_currentGeneration; }

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline bool CurrentGenerationHasBeenSet() const { return m_currentGenerationHasBeenSet; }

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline void SetCurrentGeneration(const Aws::String& value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = value; }

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline void SetCurrentGeneration(Aws::String&& value) { m_currentGenerationHasBeenSet = true; m_currentGeneration = std::move(value); }

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline void SetCurrentGeneration(const char* value) { m_currentGenerationHasBeenSet = true; m_currentGeneration.assign(value); }

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline RdsReservedInstancesConfiguration& WithCurrentGeneration(const Aws::String& value) { SetCurrentGeneration(value); return *this;}

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline RdsReservedInstancesConfiguration& WithCurrentGeneration(Aws::String&& value) { SetCurrentGeneration(std::move(value)); return *this;}

    /**
     * <p>Determines whether the recommendation is for a current generation
     * instance.</p>
     */
    inline RdsReservedInstancesConfiguration& WithCurrentGeneration(const char* value) { SetCurrentGeneration(value); return *this;}


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
    inline RdsReservedInstancesConfiguration& WithDatabaseEdition(const Aws::String& value) { SetDatabaseEdition(value); return *this;}

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDatabaseEdition(Aws::String&& value) { SetDatabaseEdition(std::move(value)); return *this;}

    /**
     * <p>The database edition that the recommended reservation supports.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDatabaseEdition(const char* value) { SetDatabaseEdition(value); return *this;}


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
    inline RdsReservedInstancesConfiguration& WithDatabaseEngine(const Aws::String& value) { SetDatabaseEngine(value); return *this;}

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDatabaseEngine(Aws::String&& value) { SetDatabaseEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine that the recommended reservation supports.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDatabaseEngine(const char* value) { SetDatabaseEngine(value); return *this;}


    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline const Aws::String& GetDeploymentOption() const{ return m_deploymentOption; }

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline void SetDeploymentOption(const Aws::String& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline void SetDeploymentOption(Aws::String&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline void SetDeploymentOption(const char* value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption.assign(value); }

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDeploymentOption(const Aws::String& value) { SetDeploymentOption(value); return *this;}

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDeploymentOption(Aws::String&& value) { SetDeploymentOption(std::move(value)); return *this;}

    /**
     * <p>Determines whether the recommendation is for a reservation in a single
     * Availability Zone or a reservation with a backup in a second Availability
     * Zone.</p>
     */
    inline RdsReservedInstancesConfiguration& WithDeploymentOption(const char* value) { SetDeploymentOption(value); return *this;}


    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RdsReservedInstancesConfiguration& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RdsReservedInstancesConfiguration& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family of the recommended reservation.</p>
     */
    inline RdsReservedInstancesConfiguration& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}


    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline RdsReservedInstancesConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline RdsReservedInstancesConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance that Amazon Web Services recommends.</p>
     */
    inline RdsReservedInstancesConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


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
    inline RdsReservedInstancesConfiguration& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline RdsReservedInstancesConfiguration& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model that the recommended reservation supports.</p>
     */
    inline RdsReservedInstancesConfiguration& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetMonthlyRecurringCost() const{ return m_monthlyRecurringCost; }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline bool MonthlyRecurringCostHasBeenSet() const { return m_monthlyRecurringCostHasBeenSet; }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline void SetMonthlyRecurringCost(const Aws::String& value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost = value; }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline void SetMonthlyRecurringCost(Aws::String&& value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost = std::move(value); }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline void SetMonthlyRecurringCost(const char* value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost.assign(value); }

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(const Aws::String& value) { SetMonthlyRecurringCost(value); return *this;}

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(Aws::String&& value) { SetMonthlyRecurringCost(std::move(value)); return *this;}

    /**
     * <p>How much purchasing this instance costs you on a monthly basis.</p>
     */
    inline RdsReservedInstancesConfiguration& WithMonthlyRecurringCost(const char* value) { SetMonthlyRecurringCost(value); return *this;}


    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetNormalizedUnitsToPurchase() const{ return m_normalizedUnitsToPurchase; }

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline bool NormalizedUnitsToPurchaseHasBeenSet() const { return m_normalizedUnitsToPurchaseHasBeenSet; }

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetNormalizedUnitsToPurchase(const Aws::String& value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase = value; }

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetNormalizedUnitsToPurchase(Aws::String&& value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase = std::move(value); }

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetNormalizedUnitsToPurchase(const char* value) { m_normalizedUnitsToPurchaseHasBeenSet = true; m_normalizedUnitsToPurchase.assign(value); }

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(const Aws::String& value) { SetNormalizedUnitsToPurchase(value); return *this;}

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(Aws::String&& value) { SetNormalizedUnitsToPurchase(std::move(value)); return *this;}

    /**
     * <p>The number of normalized units that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline RdsReservedInstancesConfiguration& WithNormalizedUnitsToPurchase(const char* value) { SetNormalizedUnitsToPurchase(value); return *this;}


    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const Aws::String& GetNumberOfInstancesToPurchase() const{ return m_numberOfInstancesToPurchase; }

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline bool NumberOfInstancesToPurchaseHasBeenSet() const { return m_numberOfInstancesToPurchaseHasBeenSet; }

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetNumberOfInstancesToPurchase(const Aws::String& value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase = value; }

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetNumberOfInstancesToPurchase(Aws::String&& value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase = std::move(value); }

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetNumberOfInstancesToPurchase(const char* value) { m_numberOfInstancesToPurchaseHasBeenSet = true; m_numberOfInstancesToPurchase.assign(value); }

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(const Aws::String& value) { SetNumberOfInstancesToPurchase(value); return *this;}

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(Aws::String&& value) { SetNumberOfInstancesToPurchase(std::move(value)); return *this;}

    /**
     * <p>The number of instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline RdsReservedInstancesConfiguration& WithNumberOfInstancesToPurchase(const char* value) { SetNumberOfInstancesToPurchase(value); return *this;}


    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline void SetPaymentOption(const Aws::String& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline void SetPaymentOption(Aws::String&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline void SetPaymentOption(const char* value) { m_paymentOptionHasBeenSet = true; m_paymentOption.assign(value); }

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline RdsReservedInstancesConfiguration& WithPaymentOption(const Aws::String& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline RdsReservedInstancesConfiguration& WithPaymentOption(Aws::String&& value) { SetPaymentOption(std::move(value)); return *this;}

    /**
     * <p>The payment option for the commitment.</p>
     */
    inline RdsReservedInstancesConfiguration& WithPaymentOption(const char* value) { SetPaymentOption(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline const Aws::String& GetReservedInstancesRegion() const{ return m_reservedInstancesRegion; }

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline bool ReservedInstancesRegionHasBeenSet() const { return m_reservedInstancesRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline void SetReservedInstancesRegion(const Aws::String& value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion = value; }

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline void SetReservedInstancesRegion(Aws::String&& value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline void SetReservedInstancesRegion(const char* value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline RdsReservedInstancesConfiguration& WithReservedInstancesRegion(const Aws::String& value) { SetReservedInstancesRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline RdsReservedInstancesConfiguration& WithReservedInstancesRegion(Aws::String&& value) { SetReservedInstancesRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline RdsReservedInstancesConfiguration& WithReservedInstancesRegion(const char* value) { SetReservedInstancesRegion(value); return *this;}


    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline RdsReservedInstancesConfiguration& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline RdsReservedInstancesConfiguration& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The service that you want your recommendations for.</p>
     */
    inline RdsReservedInstancesConfiguration& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>Determines whether the recommendation is size flexible.</p>
     */
    inline bool GetSizeFlexEligible() const{ return m_sizeFlexEligible; }

    /**
     * <p>Determines whether the recommendation is size flexible.</p>
     */
    inline bool SizeFlexEligibleHasBeenSet() const { return m_sizeFlexEligibleHasBeenSet; }

    /**
     * <p>Determines whether the recommendation is size flexible.</p>
     */
    inline void SetSizeFlexEligible(bool value) { m_sizeFlexEligibleHasBeenSet = true; m_sizeFlexEligible = value; }

    /**
     * <p>Determines whether the recommendation is size flexible.</p>
     */
    inline RdsReservedInstancesConfiguration& WithSizeFlexEligible(bool value) { SetSizeFlexEligible(value); return *this;}


    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const{ return m_term; }

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline void SetTerm(const Aws::String& value) { m_termHasBeenSet = true; m_term = value; }

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline void SetTerm(Aws::String&& value) { m_termHasBeenSet = true; m_term = std::move(value); }

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline void SetTerm(const char* value) { m_termHasBeenSet = true; m_term.assign(value); }

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline RdsReservedInstancesConfiguration& WithTerm(const Aws::String& value) { SetTerm(value); return *this;}

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline RdsReservedInstancesConfiguration& WithTerm(Aws::String&& value) { SetTerm(std::move(value)); return *this;}

    /**
     * <p>The reserved instances recommendation term in years.</p>
     */
    inline RdsReservedInstancesConfiguration& WithTerm(const char* value) { SetTerm(value); return *this;}


    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const{ return m_upfrontCost; }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline void SetUpfrontCost(const Aws::String& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = value; }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline void SetUpfrontCost(Aws::String&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::move(value); }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline void SetUpfrontCost(const char* value) { m_upfrontCostHasBeenSet = true; m_upfrontCost.assign(value); }

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline RdsReservedInstancesConfiguration& WithUpfrontCost(const Aws::String& value) { SetUpfrontCost(value); return *this;}

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline RdsReservedInstancesConfiguration& WithUpfrontCost(Aws::String&& value) { SetUpfrontCost(std::move(value)); return *this;}

    /**
     * <p>How much purchasing this instance costs you upfront.</p>
     */
    inline RdsReservedInstancesConfiguration& WithUpfrontCost(const char* value) { SetUpfrontCost(value); return *this;}

  private:

    Aws::String m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_currentGeneration;
    bool m_currentGenerationHasBeenSet = false;

    Aws::String m_databaseEdition;
    bool m_databaseEditionHasBeenSet = false;

    Aws::String m_databaseEngine;
    bool m_databaseEngineHasBeenSet = false;

    Aws::String m_deploymentOption;
    bool m_deploymentOptionHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_monthlyRecurringCost;
    bool m_monthlyRecurringCostHasBeenSet = false;

    Aws::String m_normalizedUnitsToPurchase;
    bool m_normalizedUnitsToPurchaseHasBeenSet = false;

    Aws::String m_numberOfInstancesToPurchase;
    bool m_numberOfInstancesToPurchaseHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_reservedInstancesRegion;
    bool m_reservedInstancesRegionHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    bool m_sizeFlexEligible;
    bool m_sizeFlexEligibleHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
