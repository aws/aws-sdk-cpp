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
   * <p>The path to the file(s) in an Amazon Simple Storage Service (Amazon S3)
   * bucket, and an AWS Identity and Access Management (IAM) role that Amazon
   * Forecast can assume to access the file(s). Optionally, includes an AWS Key
   * Management Service (KMS) key. This object is part of the <a>DataSource</a>
   * object that is submitted in the <a>CreateDatasetImportJob</a> request, and part
   * of the <a>DataDestination</a> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/S3Config">AWS
   * API Reference</a></p>
   */
  class S3Config
  {
  public:
    AWS_FORECASTSERVICE_API S3Config();
    AWS_FORECASTSERVICE_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline S3Config& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline S3Config& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to an Amazon Simple Storage Service (Amazon S3) bucket or file(s) in
     * an Amazon S3 bucket.</p>
     */
    inline S3Config& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline S3Config& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline S3Config& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that Amazon
     * Forecast can assume to access the Amazon S3 bucket or files. If you provide a
     * value for the <code>KMSKeyArn</code> key, the role must allow access to the
     * key.</p> <p>Passing a role across AWS accounts is not allowed. If you pass a
     * role that isn't in your account, you get an <code>InvalidInputException</code>
     * error.</p>
     */
    inline S3Config& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const{ return m_kMSKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline void SetKMSKeyArn(const Aws::String& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline void SetKMSKeyArn(Aws::String&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline void SetKMSKeyArn(const char* value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline S3Config& WithKMSKeyArn(const Aws::String& value) { SetKMSKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline S3Config& WithKMSKeyArn(Aws::String&& value) { SetKMSKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Key Management Service (KMS)
     * key.</p>
     */
    inline S3Config& WithKMSKeyArn(const char* value) { SetKMSKeyArn(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
