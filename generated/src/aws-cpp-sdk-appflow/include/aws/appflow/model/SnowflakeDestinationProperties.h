/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ErrorHandlingConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Snowflake is being used as a
   * destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SnowflakeDestinationProperties">AWS
   * API Reference</a></p>
   */
  class SnowflakeDestinationProperties
  {
  public:
    AWS_APPFLOW_API SnowflakeDestinationProperties();
    AWS_APPFLOW_API SnowflakeDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SnowflakeDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline SnowflakeDestinationProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline SnowflakeDestinationProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p> The object specified in the Snowflake flow destination. </p>
     */
    inline SnowflakeDestinationProperties& WithObject(const char* value) { SetObject(value); return *this;}


    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline const Aws::String& GetIntermediateBucketName() const{ return m_intermediateBucketName; }

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline bool IntermediateBucketNameHasBeenSet() const { return m_intermediateBucketNameHasBeenSet; }

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline void SetIntermediateBucketName(const Aws::String& value) { m_intermediateBucketNameHasBeenSet = true; m_intermediateBucketName = value; }

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline void SetIntermediateBucketName(Aws::String&& value) { m_intermediateBucketNameHasBeenSet = true; m_intermediateBucketName = std::move(value); }

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline void SetIntermediateBucketName(const char* value) { m_intermediateBucketNameHasBeenSet = true; m_intermediateBucketName.assign(value); }

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline SnowflakeDestinationProperties& WithIntermediateBucketName(const Aws::String& value) { SetIntermediateBucketName(value); return *this;}

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline SnowflakeDestinationProperties& WithIntermediateBucketName(Aws::String&& value) { SetIntermediateBucketName(std::move(value)); return *this;}

    /**
     * <p> The intermediate bucket that Amazon AppFlow uses when moving data into
     * Snowflake. </p>
     */
    inline SnowflakeDestinationProperties& WithIntermediateBucketName(const char* value) { SetIntermediateBucketName(value); return *this;}


    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline SnowflakeDestinationProperties& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline SnowflakeDestinationProperties& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p> The object key for the destination bucket in which Amazon AppFlow places the
     * files. </p>
     */
    inline SnowflakeDestinationProperties& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Snowflake destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const{ return m_errorHandlingConfig; }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Snowflake destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Snowflake destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline void SetErrorHandlingConfig(const ErrorHandlingConfig& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = value; }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Snowflake destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline void SetErrorHandlingConfig(ErrorHandlingConfig&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::move(value); }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Snowflake destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline SnowflakeDestinationProperties& WithErrorHandlingConfig(const ErrorHandlingConfig& value) { SetErrorHandlingConfig(value); return *this;}

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Snowflake destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline SnowflakeDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfig&& value) { SetErrorHandlingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::String m_intermediateBucketName;
    bool m_intermediateBucketNameHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
