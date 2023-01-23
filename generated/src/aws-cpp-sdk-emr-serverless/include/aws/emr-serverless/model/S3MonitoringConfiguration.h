/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The Amazon S3 configuration for monitoring log publishing. You can configure
   * your jobs to send log information to Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/S3MonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class S3MonitoringConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API S3MonitoringConfiguration();
    AWS_EMRSERVERLESS_API S3MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API S3MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline S3MonitoringConfiguration& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline S3MonitoringConfiguration& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 destination URI for log publishing.</p>
     */
    inline S3MonitoringConfiguration& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline S3MonitoringConfiguration& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline S3MonitoringConfiguration& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
     * destination.</p>
     */
    inline S3MonitoringConfiguration& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}

  private:

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
