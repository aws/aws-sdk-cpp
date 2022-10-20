/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ReplicationConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

ReplicationConfigurationDescription::ReplicationConfigurationDescription() : 
    m_sourceFileSystemIdHasBeenSet(false),
    m_sourceFileSystemRegionHasBeenSet(false),
    m_sourceFileSystemArnHasBeenSet(false),
    m_originalSourceFileSystemArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
}

ReplicationConfigurationDescription::ReplicationConfigurationDescription(JsonView jsonValue) : 
    m_sourceFileSystemIdHasBeenSet(false),
    m_sourceFileSystemRegionHasBeenSet(false),
    m_sourceFileSystemArnHasBeenSet(false),
    m_originalSourceFileSystemArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationConfigurationDescription& ReplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceFileSystemId"))
  {
    m_sourceFileSystemId = jsonValue.GetString("SourceFileSystemId");

    m_sourceFileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileSystemRegion"))
  {
    m_sourceFileSystemRegion = jsonValue.GetString("SourceFileSystemRegion");

    m_sourceFileSystemRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileSystemArn"))
  {
    m_sourceFileSystemArn = jsonValue.GetString("SourceFileSystemArn");

    m_sourceFileSystemArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalSourceFileSystemArn"))
  {
    m_originalSourceFileSystemArn = jsonValue.GetString("OriginalSourceFileSystemArn");

    m_originalSourceFileSystemArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_sourceFileSystemIdHasBeenSet)
  {
   payload.WithString("SourceFileSystemId", m_sourceFileSystemId);

  }

  if(m_sourceFileSystemRegionHasBeenSet)
  {
   payload.WithString("SourceFileSystemRegion", m_sourceFileSystemRegion);

  }

  if(m_sourceFileSystemArnHasBeenSet)
  {
   payload.WithString("SourceFileSystemArn", m_sourceFileSystemArn);

  }

  if(m_originalSourceFileSystemArnHasBeenSet)
  {
   payload.WithString("OriginalSourceFileSystemArn", m_originalSourceFileSystemArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
