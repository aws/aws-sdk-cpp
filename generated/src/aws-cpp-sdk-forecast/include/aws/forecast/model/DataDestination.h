/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/S3Config.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>The destination for an export job. Provide an S3 path, an AWS Identity and
   * Access Management (IAM) role that allows Amazon Forecast to access the location,
   * and an AWS Key Management Service (KMS) key (optional). </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DataDestination">AWS
   * API Reference</a></p>
   */
  class DataDestination
  {
  public:
    AWS_FORECASTSERVICE_API DataDestination();
    AWS_FORECASTSERVICE_API DataDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DataDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline DataDestination& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket along with
     * the credentials to access the bucket.</p>
     */
    inline DataDestination& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}

  private:

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
