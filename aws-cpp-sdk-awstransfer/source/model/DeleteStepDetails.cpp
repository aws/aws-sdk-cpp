/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteStepDetails.h>
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

DeleteStepDetails::DeleteStepDetails() : 
    m_nameHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
}

DeleteStepDetails::DeleteStepDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteStepDetails& DeleteStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileLocation"))
  {
    m_sourceFileLocation = jsonValue.GetString("SourceFileLocation");

    m_sourceFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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
