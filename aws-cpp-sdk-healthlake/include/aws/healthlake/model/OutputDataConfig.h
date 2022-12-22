/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/S3Configuration.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The output data configuration that was supplied when the export job was
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class OutputDataConfig
  {
  public:
    AWS_HEALTHLAKE_API OutputDataConfig();
    AWS_HEALTHLAKE_API OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The output data configuration that was supplied when the export job was
     * created. </p>
     */
    inline const S3Configuration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p> The output data configuration that was supplied when the export job was
     * created. </p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p> The output data configuration that was supplied when the export job was
     * created. </p>
     */
    inline void SetS3Configuration(const S3Configuration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p> The output data configuration that was supplied when the export job was
     * created. </p>
     */
    inline void SetS3Configuration(S3Configuration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p> The output data configuration that was supplied when the export job was
     * created. </p>
     */
    inline OutputDataConfig& WithS3Configuration(const S3Configuration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p> The output data configuration that was supplied when the export job was
     * created. </p>
     */
    inline OutputDataConfig& WithS3Configuration(S3Configuration&& value) { SetS3Configuration(std::move(value)); return *this;}

  private:

    S3Configuration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
