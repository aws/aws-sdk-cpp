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
   * <p> The configuration of the S3 bucket for either an import or export job. This
   * includes assigning permissions for access. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/S3Configuration">AWS
   * API Reference</a></p>
   */
  class S3Configuration
  {
  public:
    AWS_HEALTHLAKE_API S3Configuration();
    AWS_HEALTHLAKE_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline S3Configuration& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline S3Configuration& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p> The S3Uri is the user specified S3 location of the FHIR data to be imported
     * into Amazon HealthLake. </p>
     */
    inline S3Configuration& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline S3Configuration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline S3Configuration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The KMS key ID used to access the S3 bucket. </p>
     */
    inline S3Configuration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
