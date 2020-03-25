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

#include <aws/es/model/DomainPackageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

DomainPackageDetails::DomainPackageDetails() : 
    m_packageIDHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainPackageStatus(DomainPackageStatus::NOT_SET),
    m_domainPackageStatusHasBeenSet(false),
    m_referencePathHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

DomainPackageDetails::DomainPackageDetails(JsonView jsonValue) : 
    m_packageIDHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainPackageStatus(DomainPackageStatus::NOT_SET),
    m_domainPackageStatusHasBeenSet(false),
    m_referencePathHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

DomainPackageDetails& DomainPackageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");

    m_packageIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageType"))
  {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("PackageType"));

    m_packageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainPackageStatus"))
  {
    m_domainPackageStatus = DomainPackageStatusMapper::GetDomainPackageStatusForName(jsonValue.GetString("DomainPackageStatus"));

    m_domainPackageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferencePath"))
  {
    m_referencePath = jsonValue.GetString("ReferencePath");

    m_referencePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainPackageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_domainPackageStatusHasBeenSet)
  {
   payload.WithString("DomainPackageStatus", DomainPackageStatusMapper::GetNameForDomainPackageStatus(m_domainPackageStatus));
  }

  if(m_referencePathHasBeenSet)
  {
   payload.WithString("ReferencePath", m_referencePath);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
