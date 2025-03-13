/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/S3Location.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPluginLocation">AWS
   * API Reference</a></p>
   */
  class CustomPluginLocation
  {
  public:
    AWS_KAFKACONNECT_API CustomPluginLocation() = default;
    AWS_KAFKACONNECT_API CustomPluginLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket Amazon Resource Name (ARN), file key, and object version of the
     * plugin file stored in Amazon S3.</p>
     */
    inline const S3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3Location>
    CustomPluginLocation& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}
  private:

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
