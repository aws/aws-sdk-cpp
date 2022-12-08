/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/S3Destination.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies where to store data classification results, and the encryption
   * settings to use when storing results in that location. The location must be an
   * S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationExportConfiguration">AWS
   * API Reference</a></p>
   */
  class ClassificationExportConfiguration
  {
  public:
    AWS_MACIE2_API ClassificationExportConfiguration();
    AWS_MACIE2_API ClassificationExportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ClassificationExportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket to store data classification results in, and the encryption
     * settings to use when storing results in that bucket.</p>
     */
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>The S3 bucket to store data classification results in, and the encryption
     * settings to use when storing results in that bucket.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>The S3 bucket to store data classification results in, and the encryption
     * settings to use when storing results in that bucket.</p>
     */
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>The S3 bucket to store data classification results in, and the encryption
     * settings to use when storing results in that bucket.</p>
     */
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>The S3 bucket to store data classification results in, and the encryption
     * settings to use when storing results in that bucket.</p>
     */
    inline ClassificationExportConfiguration& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>The S3 bucket to store data classification results in, and the encryption
     * settings to use when storing results in that bucket.</p>
     */
    inline ClassificationExportConfiguration& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
