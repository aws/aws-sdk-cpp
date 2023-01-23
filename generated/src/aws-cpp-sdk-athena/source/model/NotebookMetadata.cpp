/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/NotebookMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

NotebookMetadata::NotebookMetadata() : 
    m_notebookIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_type(NotebookType::NOT_SET),
    m_typeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

NotebookMetadata::NotebookMetadata(JsonView jsonValue) : 
    m_notebookIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_workGroupHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_type(NotebookType::NOT_SET),
    m_typeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

NotebookMetadata& NotebookMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotebookId"))
  {
    m_notebookId = jsonValue.GetString("NotebookId");

    m_notebookIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkGroup"))
  {
    m_workGroup = jsonValue.GetString("WorkGroup");

    m_workGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = NotebookTypeMapper::GetNotebookTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotebookMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_notebookIdHasBeenSet)
  {
   payload.WithString("NotebookId", m_notebookId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", NotebookTypeMapper::GetNameForNotebookType(m_type));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
