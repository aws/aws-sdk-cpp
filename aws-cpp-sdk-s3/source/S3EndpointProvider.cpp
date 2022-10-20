/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/S3EndpointProvider.h>

namespace Aws
{
namespace S3
{
namespace Endpoint
{
  void S3ClientContextParameters::SetForcePathStyle(bool value)
  {
    return SetBooleanParameter(Aws::String("ForcePathStyle"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetForcePathStyle() const
  {
    return GetParameter("ForcePathStyle");
  }
  void S3ClientContextParameters::SetDisableMultiRegionAccessPoints(bool value)
  {
    return SetBooleanParameter(Aws::String("DisableMultiRegionAccessPoints"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetDisableMultiRegionAccessPoints() const
  {
    return GetParameter("DisableMultiRegionAccessPoints");
  }
  void S3ClientContextParameters::SetUseArnRegion(bool value)
  {
    return SetBooleanParameter(Aws::String("UseArnRegion"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetUseArnRegion() const
  {
    return GetParameter("UseArnRegion");
  }
  void S3ClientContextParameters::SetAccelerate(bool value)
  {
    return SetBooleanParameter(Aws::String("Accelerate"), value);
  }
  const S3ClientContextParameters::ClientContextParameters::EndpointParameter& S3ClientContextParameters::GetAccelerate() const
  {
    return GetParameter("Accelerate");
  }
} // namespace Endpoint
} // namespace S3
} // namespace Aws
