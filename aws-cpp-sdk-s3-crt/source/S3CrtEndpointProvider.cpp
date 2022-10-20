/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/S3CrtEndpointProvider.h>

namespace Aws
{
namespace S3Crt
{
namespace Endpoint
{
  void S3CrtClientContextParameters::SetForcePathStyle(bool value)
  {
    return SetBooleanParameter(Aws::String("ForcePathStyle"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetForcePathStyle() const
  {
    return GetParameter("ForcePathStyle");
  }
  void S3CrtClientContextParameters::SetDisableMultiRegionAccessPoints(bool value)
  {
    return SetBooleanParameter(Aws::String("DisableMultiRegionAccessPoints"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetDisableMultiRegionAccessPoints() const
  {
    return GetParameter("DisableMultiRegionAccessPoints");
  }
  void S3CrtClientContextParameters::SetUseArnRegion(bool value)
  {
    return SetBooleanParameter(Aws::String("UseArnRegion"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetUseArnRegion() const
  {
    return GetParameter("UseArnRegion");
  }
  void S3CrtClientContextParameters::SetAccelerate(bool value)
  {
    return SetBooleanParameter(Aws::String("Accelerate"), value);
  }
  const S3CrtClientContextParameters::ClientContextParameters::EndpointParameter& S3CrtClientContextParameters::GetAccelerate() const
  {
    return GetParameter("Accelerate");
  }
} // namespace Endpoint
} // namespace S3Crt
} // namespace Aws
