/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DataSet::DataSet() : 
    m_datasetNameHasBeenSet(false),
    m_datasetOrgHasBeenSet(false),
    m_recordLengthHasBeenSet(false),
    m_relativePathHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

DataSet::DataSet(JsonView jsonValue) : 
    m_datasetNameHasBeenSet(false),
    m_datasetOrgHasBeenSet(false),
    m_recordLengthHasBeenSet(false),
    m_relativePathHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DataSet& DataSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetName"))
  {
    m_datasetName = jsonValue.GetString("datasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetOrg"))
  {
    m_datasetOrg = jsonValue.GetObject("datasetOrg");

    m_datasetOrgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordLength"))
  {
    m_recordLength = jsonValue.GetObject("recordLength");

    m_recordLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relativePath"))
  {
    m_relativePath = jsonValue.GetString("relativePath");

    m_relativePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = jsonValue.GetString("storageType");

    m_storageTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSet::Jsonize() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("datasetName", m_datasetName);

  }

  if(m_datasetOrgHasBeenSet)
  {
   payload.WithObject("datasetOrg", m_datasetOrg.Jsonize());

  }

  if(m_recordLengthHasBeenSet)
  {
   payload.WithObject("recordLength", m_recordLength.Jsonize());

  }

  if(m_relativePathHasBeenSet)
  {
   payload.WithString("relativePath", m_relativePath);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", m_storageType);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
