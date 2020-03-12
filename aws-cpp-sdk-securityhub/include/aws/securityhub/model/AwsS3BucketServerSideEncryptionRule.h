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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionByDefault.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An encryption rule to apply to the S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketServerSideEncryptionRule">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionRule
  {
  public:
    AwsS3BucketServerSideEncryptionRule();
    AwsS3BucketServerSideEncryptionRule(Aws::Utils::Json::JsonView jsonValue);
    AwsS3BucketServerSideEncryptionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> Object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline const AwsS3BucketServerSideEncryptionByDefault& GetApplyServerSideEncryptionByDefault() const{ return m_applyServerSideEncryptionByDefault; }

    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> Object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline bool ApplyServerSideEncryptionByDefaultHasBeenSet() const { return m_applyServerSideEncryptionByDefaultHasBeenSet; }

    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> Object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline void SetApplyServerSideEncryptionByDefault(const AwsS3BucketServerSideEncryptionByDefault& value) { m_applyServerSideEncryptionByDefaultHasBeenSet = true; m_applyServerSideEncryptionByDefault = value; }

    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> Object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline void SetApplyServerSideEncryptionByDefault(AwsS3BucketServerSideEncryptionByDefault&& value) { m_applyServerSideEncryptionByDefaultHasBeenSet = true; m_applyServerSideEncryptionByDefault = std::move(value); }

    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> Object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline AwsS3BucketServerSideEncryptionRule& WithApplyServerSideEncryptionByDefault(const AwsS3BucketServerSideEncryptionByDefault& value) { SetApplyServerSideEncryptionByDefault(value); return *this;}

    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> Object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline AwsS3BucketServerSideEncryptionRule& WithApplyServerSideEncryptionByDefault(AwsS3BucketServerSideEncryptionByDefault&& value) { SetApplyServerSideEncryptionByDefault(std::move(value)); return *this;}

  private:

    AwsS3BucketServerSideEncryptionByDefault m_applyServerSideEncryptionByDefault;
    bool m_applyServerSideEncryptionByDefaultHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
