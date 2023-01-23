/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The settings that determine how Amazon AppFlow handles an error when placing
   * data in the destination. For example, this setting would determine if the flow
   * should fail after one insertion error, or continue and attempt to insert every
   * record regardless of the initial failure. <code>ErrorHandlingConfig</code> is a
   * part of the destination connector details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ErrorHandlingConfig">AWS
   * API Reference</a></p>
   */
  class ErrorHandlingConfig
  {
  public:
    AWS_APPFLOW_API ErrorHandlingConfig();
    AWS_APPFLOW_API ErrorHandlingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ErrorHandlingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies if the flow should fail after the first instance of a failure when
     * attempting to place data in the destination. </p>
     */
    inline bool GetFailOnFirstDestinationError() const{ return m_failOnFirstDestinationError; }

    /**
     * <p> Specifies if the flow should fail after the first instance of a failure when
     * attempting to place data in the destination. </p>
     */
    inline bool FailOnFirstDestinationErrorHasBeenSet() const { return m_failOnFirstDestinationErrorHasBeenSet; }

    /**
     * <p> Specifies if the flow should fail after the first instance of a failure when
     * attempting to place data in the destination. </p>
     */
    inline void SetFailOnFirstDestinationError(bool value) { m_failOnFirstDestinationErrorHasBeenSet = true; m_failOnFirstDestinationError = value; }

    /**
     * <p> Specifies if the flow should fail after the first instance of a failure when
     * attempting to place data in the destination. </p>
     */
    inline ErrorHandlingConfig& WithFailOnFirstDestinationError(bool value) { SetFailOnFirstDestinationError(value); return *this;}


    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline const Aws::String& GetBucketPrefix() const{ return m_bucketPrefix; }

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline bool BucketPrefixHasBeenSet() const { return m_bucketPrefixHasBeenSet; }

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline void SetBucketPrefix(const Aws::String& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = value; }

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline void SetBucketPrefix(Aws::String&& value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix = std::move(value); }

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline void SetBucketPrefix(const char* value) { m_bucketPrefixHasBeenSet = true; m_bucketPrefix.assign(value); }

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline ErrorHandlingConfig& WithBucketPrefix(const Aws::String& value) { SetBucketPrefix(value); return *this;}

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline ErrorHandlingConfig& WithBucketPrefix(Aws::String&& value) { SetBucketPrefix(std::move(value)); return *this;}

    /**
     * <p> Specifies the Amazon S3 bucket prefix. </p>
     */
    inline ErrorHandlingConfig& WithBucketPrefix(const char* value) { SetBucketPrefix(value); return *this;}


    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline ErrorHandlingConfig& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline ErrorHandlingConfig& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p> Specifies the name of the Amazon S3 bucket. </p>
     */
    inline ErrorHandlingConfig& WithBucketName(const char* value) { SetBucketName(value); return *this;}

  private:

    bool m_failOnFirstDestinationError;
    bool m_failOnFirstDestinationErrorHasBeenSet = false;

    Aws::String m_bucketPrefix;
    bool m_bucketPrefixHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
