/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/S3Location.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{

  /**
   * <p>A package version input configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageVersionInputConfig">AWS
   * API Reference</a></p>
   */
  class PackageVersionInputConfig
  {
  public:
    AWS_PANORAMA_API PackageVersionInputConfig();
    AWS_PANORAMA_API PackageVersionInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API PackageVersionInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A location in Amazon S3.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>A location in Amazon S3.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>A location in Amazon S3.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>A location in Amazon S3.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>A location in Amazon S3.</p>
     */
    inline PackageVersionInputConfig& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>A location in Amazon S3.</p>
     */
    inline PackageVersionInputConfig& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
