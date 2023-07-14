/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StudioLifecycleConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

StudioLifecycleConfigDetails::StudioLifecycleConfigDetails() : 
    m_studioLifecycleConfigArnHasBeenSet(false),
    m_studioLifecycleConfigNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_studioLifecycleConfigAppType(StudioLifecycleConfigAppType::NOT_SET),
    m_studioLifecycleConfigAppTypeHasBeenSet(false)
{
}

StudioLifecycleConfigDetails::StudioLifecycleConfigDetails(JsonView jsonValue) : 
    m_studioLifecycleConfigArnHasBeenSet(false),
    m_studioLifecycleConfigNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_studioLifecycleConfigAppType(StudioLifecycleConfigAppType::NOT_SET),
    m_studioLifecycleConfigAppTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StudioLifecycleConfigDetails& StudioLifecycleConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StudioLifecycleConfigArn"))
  {
    m_studioLifecycleConfigArn = jsonValue.GetString("StudioLifecycleConfigArn");

    m_studioLifecycleConfigArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StudioLifecycleConfigName"))
  {
    m_studioLifecycleConfigName = jsonValue.GetString("StudioLifecycleConfigName");

    m_studioLifecycleConfigNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StudioLifecycleConfigAppType"))
  {
    m_studioLifecycleConfigAppType = StudioLifecycleConfigAppTypeMapper::GetStudioLifecycleConfigAppTypeForName(jsonValue.GetString("StudioLifecycleConfigAppType"));

    m_studioLifecycleConfigAppTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioLifecycleConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_studioLifecycleConfigArnHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigArn", m_studioLifecycleConfigArn);

  }

  if(m_studioLifecycleConfigNameHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigName", m_studioLifecycleConfigName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_studioLifecycleConfigAppTypeHasBeenSet)
  {
   payload.WithString("StudioLifecycleConfigAppType", StudioLifecycleConfigAppTypeMapper::GetNameForStudioLifecycleConfigAppType(m_studioLifecycleConfigAppType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
