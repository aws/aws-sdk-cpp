/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes an encryption key for a destination in Amazon S3.</p>
   */
  class AWS_FIREHOSE_API KMSEncryptionConfig
  {
  public:
    KMSEncryptionConfig();
    KMSEncryptionConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    KMSEncryptionConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetAWSKMSKeyARN() const{ return m_aWSKMSKeyARN; }

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline void SetAWSKMSKeyARN(const Aws::String& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = value; }

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline void SetAWSKMSKeyARN(Aws::String&& value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN = value; }

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline void SetAWSKMSKeyARN(const char* value) { m_aWSKMSKeyARNHasBeenSet = true; m_aWSKMSKeyARN.assign(value); }

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline KMSEncryptionConfig& WithAWSKMSKeyARN(const Aws::String& value) { SetAWSKMSKeyARN(value); return *this;}

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline KMSEncryptionConfig& WithAWSKMSKeyARN(Aws::String&& value) { SetAWSKMSKeyARN(value); return *this;}

    /**
     * <p>The ARN of the encryption key. Must belong to the same region as the
     * destination Amazon S3 bucket.</p>
     */
    inline KMSEncryptionConfig& WithAWSKMSKeyARN(const char* value) { SetAWSKMSKeyARN(value); return *this;}

  private:
    Aws::String m_aWSKMSKeyARN;
    bool m_aWSKMSKeyARNHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
