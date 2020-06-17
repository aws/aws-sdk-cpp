/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * settings to use when storing results in that location. Currently, you can store
   * classification results only in an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationExportConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ClassificationExportConfiguration
  {
  public:
    ClassificationExportConfiguration();
    ClassificationExportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ClassificationExportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_s3DestinationHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
