/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

LicenseConfiguration::LicenseConfiguration() : 
    m_numberOfCores(0),
    m_numberOfCoresHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_licenseEdition(LicenseEdition::NOT_SET),
    m_licenseEditionHasBeenSet(false),
    m_licenseName(LicenseName::NOT_SET),
    m_licenseNameHasBeenSet(false),
    m_licenseModel(LicenseModel::NOT_SET),
    m_licenseModelHasBeenSet(false),
    m_licenseVersionHasBeenSet(false),
    m_metricsSourceHasBeenSet(false)
{
}

LicenseConfiguration::LicenseConfiguration(JsonView jsonValue) : 
    m_numberOfCores(0),
    m_numberOfCoresHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_licenseEdition(LicenseEdition::NOT_SET),
    m_licenseEditionHasBeenSet(false),
    m_licenseName(LicenseName::NOT_SET),
    m_licenseNameHasBeenSet(false),
    m_licenseModel(LicenseModel::NOT_SET),
    m_licenseModelHasBeenSet(false),
    m_licenseVersionHasBeenSet(false),
    m_metricsSourceHasBeenSet(false)
{
  *this = jsonValue;
}

LicenseConfiguration& LicenseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfCores"))
  {
    m_numberOfCores = jsonValue.GetInteger("numberOfCores");

    m_numberOfCoresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("operatingSystem");

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseEdition"))
  {
    m_licenseEdition = LicenseEditionMapper::GetLicenseEditionForName(jsonValue.GetString("licenseEdition"));

    m_licenseEditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseName"))
  {
    m_licenseName = LicenseNameMapper::GetLicenseNameForName(jsonValue.GetString("licenseName"));

    m_licenseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseModel"))
  {
    m_licenseModel = LicenseModelMapper::GetLicenseModelForName(jsonValue.GetString("licenseModel"));

    m_licenseModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseVersion"))
  {
    m_licenseVersion = jsonValue.GetString("licenseVersion");

    m_licenseVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricsSource"))
  {
    Aws::Utils::Array<JsonView> metricsSourceJsonList = jsonValue.GetArray("metricsSource");
    for(unsigned metricsSourceIndex = 0; metricsSourceIndex < metricsSourceJsonList.GetLength(); ++metricsSourceIndex)
    {
      m_metricsSource.push_back(metricsSourceJsonList[metricsSourceIndex].AsObject());
    }
    m_metricsSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfCoresHasBeenSet)
  {
   payload.WithInteger("numberOfCores", m_numberOfCores);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("operatingSystem", m_operatingSystem);

  }

  if(m_licenseEditionHasBeenSet)
  {
   payload.WithString("licenseEdition", LicenseEditionMapper::GetNameForLicenseEdition(m_licenseEdition));
  }

  if(m_licenseNameHasBeenSet)
  {
   payload.WithString("licenseName", LicenseNameMapper::GetNameForLicenseName(m_licenseName));
  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if(m_licenseVersionHasBeenSet)
  {
   payload.WithString("licenseVersion", m_licenseVersion);

  }

  if(m_metricsSourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsSourceJsonList(m_metricsSource.size());
   for(unsigned metricsSourceIndex = 0; metricsSourceIndex < metricsSourceJsonList.GetLength(); ++metricsSourceIndex)
   {
     metricsSourceJsonList[metricsSourceIndex].AsObject(m_metricsSource[metricsSourceIndex].Jsonize());
   }
   payload.WithArray("metricsSource", std::move(metricsSourceJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
