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

#include <aws/devicefarm/model/TestGridSessionArtifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

TestGridSessionArtifact::TestGridSessionArtifact() : 
    m_filenameHasBeenSet(false),
    m_type(TestGridSessionArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

TestGridSessionArtifact::TestGridSessionArtifact(JsonView jsonValue) : 
    m_filenameHasBeenSet(false),
    m_type(TestGridSessionArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

TestGridSessionArtifact& TestGridSessionArtifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filename"))
  {
    m_filename = jsonValue.GetString("filename");

    m_filenameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TestGridSessionArtifactTypeMapper::GetTestGridSessionArtifactTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue TestGridSessionArtifact::Jsonize() const
{
  JsonValue payload;

  if(m_filenameHasBeenSet)
  {
   payload.WithString("filename", m_filename);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TestGridSessionArtifactTypeMapper::GetNameForTestGridSessionArtifactType(m_type));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
