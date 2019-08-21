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

#include <aws/forecast/model/DatasetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

DatasetSummary::DatasetSummary() : 
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

DatasetSummary::DatasetSummary(JsonView jsonValue) : 
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSummary& DatasetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetType"))
  {
    m_datasetType = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("DatasetType"));

    m_datasetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = DomainMapper::GetDomainForName(jsonValue.GetString("Domain"));

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", DatasetTypeMapper::GetNameForDatasetType(m_datasetType));
  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", DomainMapper::GetNameForDomain(m_domain));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
