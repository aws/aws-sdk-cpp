/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/S3LocationDescription.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Information about the location of a custom plugin.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPluginLocationDescription">AWS
   * API Reference</a></p>
   */
  class CustomPluginLocationDescription
  {
  public:
    AWS_KAFKACONNECT_API CustomPluginLocationDescription();
    AWS_KAFKACONNECT_API CustomPluginLocationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginLocationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline const S3LocationDescription& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline void SetS3Location(const S3LocationDescription& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline void SetS3Location(S3LocationDescription&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline CustomPluginLocationDescription& WithS3Location(const S3LocationDescription& value) { SetS3Location(value); return *this;}

    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline CustomPluginLocationDescription& WithS3Location(S3LocationDescription&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3LocationDescription m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
