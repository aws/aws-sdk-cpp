/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DecryptStepDetails.h>
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

DecryptStepDetails::DecryptStepDetails() : 
    m_nameHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false),
    m_overwriteExisting(OverwriteExisting::NOT_SET),
    m_overwriteExistingHasBeenSet(false),
    m_destinationFileLocationHasBeenSet(false)
{
}

DecryptStepDetails::DecryptStepDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(EncryptionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false),
    m_overwriteExisting(OverwriteExisting::NOT_SET),
    m_overwriteExistingHasBeenSet(false),
    m_destinationFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

DecryptStepDetails& DecryptStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileLocation"))
  {
    m_sourceFileLocation = jsonValue.GetString("SourceFileLocation");

    m_sourceFileLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverwriteExisting"))
  {
    m_overwriteExisting = OverwriteExistingMapper::GetOverwriteExistingForName(jsonValue.GetString("OverwriteExisting"));

    m_overwriteExistingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationFileLocation"))
  {
    m_destinationFileLocation = jsonValue.GetObject("DestinationFileLocation");

    m_destinationFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue DecryptStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EncryptionTypeMapper::GetNameForEncryptionType(m_type));
  }

  if(m_sourceFileLocationHasBeenSet)
  {
   payload.WithString("SourceFileLocation", m_sourceFileLocation);

  }

  if(m_overwriteExistingHasBeenSet)
  {
   payload.WithString("OverwriteExisting", OverwriteExistingMapper::GetNameForOverwriteExisting(m_overwriteExisting));
  }

  if(m_destinationFileLocationHasBeenSet)
  {
   payload.WithObject("DestinationFileLocation", m_destinationFileLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
