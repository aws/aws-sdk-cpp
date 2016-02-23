/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ArtifactLocationType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int S3_HASH = HashingUtils::HashString("S3");

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
namespace ArtifactLocationTypeMapper
{


ArtifactLocationType GetArtifactLocationTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3_HASH)
  {
     return ArtifactLocationType::S3;
  }
  return ArtifactLocationType::NOT_SET;
}

Aws::String GetNameForArtifactLocationType(ArtifactLocationType enumValue)
{
  switch(value)
  {
  case ArtifactLocationType::S3:
    return "S3";
  default:
    return "";
  }
}

} // namespace ArtifactLocationTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
