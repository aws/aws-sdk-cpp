/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains the Amazon Resource Name (ARN) of the resource to publish to, such
   * as an S3 bucket, and the ARN of the KMS key to use to encrypt published
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DestinationProperties">AWS
   * API Reference</a></p>
   */
  class DestinationProperties
  {
  public:
    AWS_GUARDDUTY_API DestinationProperties();
    AWS_GUARDDUTY_API DestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline DestinationProperties& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline DestinationProperties& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource to publish to.</p> <p>To specify an S3 bucket folder
     * use the following format: <code>arn:aws:s3:::DOC-EXAMPLE-BUCKET/myFolder/</code>
     * </p>
     */
    inline DestinationProperties& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline DestinationProperties& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline DestinationProperties& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key to use for encryption.</p>
     */
    inline DestinationProperties& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
