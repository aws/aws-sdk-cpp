/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/RDSInstanceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

RDSInstanceDetails::RDSInstanceDetails() : 
    m_familyHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_databaseEngineHasBeenSet(false),
    m_databaseEditionHasBeenSet(false),
    m_deploymentOptionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_currentGeneration(false),
    m_currentGenerationHasBeenSet(false),
    m_sizeFlexEligible(false),
    m_sizeFlexEligibleHasBeenSet(false)
{
}

RDSInstanceDetails::RDSInstanceDetails(JsonView jsonValue) : 
    m_familyHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_databaseEngineHasBeenSet(false),
    m_databaseEditionHasBeenSet(false),
    m_deploymentOptionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_currentGeneration(false),
    m_currentGenerationHasBeenSet(false),
    m_sizeFlexEligible(false),
    m_sizeFlexEligibleHasBeenSet(false)
{
  *this = jsonValue;
}

RDSInstanceDetails& RDSInstanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Family"))
  {
    m_family = jsonValue.GetString("Family");

    m_familyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseEngine"))
  {
    m_databaseEngine = jsonValue.GetString("DatabaseEngine");

    m_databaseEngineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseEdition"))
  {
    m_databaseEdition = jsonValue.GetString("DatabaseEdition");

    m_databaseEditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentOption"))
  {
    m_deploymentOption = jsonValue.GetString("DeploymentOption");

    m_deploymentOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseModel"))
  {
    m_licenseModel = jsonValue.GetString("LicenseModel");

    m_licenseModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentGeneration"))
  {
    m_currentGeneration = jsonValue.GetBool("CurrentGeneration");

    m_currentGenerationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeFlexEligible"))
  {
    m_sizeFlexEligible = jsonValue.GetBool("SizeFlexEligible");

    m_sizeFlexEligibleHasBeenSet = true;
  }

  return *this;
}

JsonValue RDSInstanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_familyHasBeenSet)
  {
   payload.WithString("Family", m_family);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_databaseEngineHasBeenSet)
  {
   payload.WithString("DatabaseEngine", m_databaseEngine);

  }

  if(m_databaseEditionHasBeenSet)
  {
   payload.WithString("DatabaseEdition", m_databaseEdition);

  }

  if(m_deploymentOptionHasBeenSet)
  {
   payload.WithString("DeploymentOption", m_deploymentOption);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("LicenseModel", m_licenseModel);

  }

  if(m_currentGenerationHasBeenSet)
  {
   payload.WithBool("CurrentGeneration", m_currentGeneration);

  }

  if(m_sizeFlexEligibleHasBeenSet)
  {
   payload.WithBool("SizeFlexEligible", m_sizeFlexEligible);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
