/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The input properties for an import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_HEALTHLAKE_API InputDataConfig();
    AWS_HEALTHLAKE_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
