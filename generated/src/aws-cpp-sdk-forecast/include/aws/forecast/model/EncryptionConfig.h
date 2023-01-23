/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>An AWS Key Management Service (KMS) key and an AWS Identity and Access
   * Management (IAM) role that Amazon Forecast can assume to access the key. You can
   * specify this optional object in the <a>CreateDataset</a> and
   * <a>CreatePredictor</a> requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class EncryptionConfig
  {
  public:
    AWS_FORECASTSERVICE_API EncryptionConfig();
    AWS_FORECASTSERVICE_API EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline EncryptionConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline EncryptionConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that Amazon Forecast can assume to access the AWS KMS
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline EncryptionConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline EncryptionConfig& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline EncryptionConfig& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key.</p>
     */
    inline EncryptionConfig& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
