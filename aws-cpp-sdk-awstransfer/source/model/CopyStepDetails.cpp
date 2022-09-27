/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CopyStepDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

CopyStepDetails::CopyStepDetails() : 
    m_nameHasBeenSet(false),
    m_destinationFileLocationHasBeenSet(false),
    m_overwriteExisting(OverwriteExisting::NOT_SET),
    m_overwriteExistingHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
}

CopyStepDetails::CopyStepDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_destinationFileLocationHasBeenSet(false),
    m_overwriteExisting(OverwriteExisting::NOT_SET),
    m_overwriteExistingHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

CopyStepDetails& CopyStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationFileLocation"))
  {
    m_destinationFileLocation = jsonValue.GetObject("DestinationFileLocation");

    m_destinationFileLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverwriteExisting"))
  {
    m_overwriteExisting = OverwriteExistingMapper::GetOverwriteExistingForName(jsonValue.GetString("OverwriteExisting"));

    m_overwriteExistingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileLocation"))
  {
    m_sourceFileLocation = jsonValue.GetString("SourceFileLocation");

    m_sourceFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue CopyStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_destinationFileLocationHasBeenSet)
  {
   payload.WithObject("DestinationFileLocation", m_destinationFileLocation.Jsonize());

  }

  if(m_overwriteExistingHasBeenSet)
  {
   payload.WithString("OverwriteExisting", OverwriteExistingMapper::GetNameForOverwriteExisting(m_overwriteExisting));
  }

  if(m_sourceFileLocationHasBeenSet)
  {
   payload.WithString("SourceFileLocation", m_sourceFileLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
