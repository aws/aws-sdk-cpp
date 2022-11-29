/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PackageFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

PackageFilter::PackageFilter() : 
    m_architectureHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_sourceLambdaLayerArnHasBeenSet(false),
    m_sourceLayerHashHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

PackageFilter::PackageFilter(JsonView jsonValue) : 
    m_architectureHasBeenSet(false),
    m_epochHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_sourceLambdaLayerArnHasBeenSet(false),
    m_sourceLayerHashHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

PackageFilter& PackageFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetObject("architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("epoch"))
  {
    m_epoch = jsonValue.GetObject("epoch");

    m_epochHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetObject("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("release"))
  {
    m_release = jsonValue.GetObject("release");

    m_releaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceLambdaLayerArn"))
  {
    m_sourceLambdaLayerArn = jsonValue.GetObject("sourceLambdaLayerArn");

    m_sourceLambdaLayerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceLayerHash"))
  {
    m_sourceLayerHash = jsonValue.GetObject("sourceLayerHash");

    m_sourceLayerHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetObject("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageFilter::Jsonize() const
{
  JsonValue payload;

  if(m_architectureHasBeenSet)
  {
   payload.WithObject("architecture", m_architecture.Jsonize());

  }

  if(m_epochHasBeenSet)
  {
   payload.WithObject("epoch", m_epoch.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithObject("name", m_name.Jsonize());

  }

  if(m_releaseHasBeenSet)
  {
   payload.WithObject("release", m_release.Jsonize());

  }

  if(m_sourceLambdaLayerArnHasBeenSet)
  {
   payload.WithObject("sourceLambdaLayerArn", m_sourceLambdaLayerArn.Jsonize());

  }

  if(m_sourceLayerHashHasBeenSet)
  {
   payload.WithObject("sourceLayerHash", m_sourceLayerHash.Jsonize());

  }

  if(m_versionHasBeenSet)
  {
   payload.WithObject("version", m_version.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
