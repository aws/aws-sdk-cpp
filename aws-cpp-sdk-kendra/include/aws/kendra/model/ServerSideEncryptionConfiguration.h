/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the identifier of the AWS KMS customer master key (CMK) used to
   * encrypt data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
   * CMKs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ServerSideEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ServerSideEncryptionConfiguration
  {
  public:
    ServerSideEncryptionConfiguration();
    ServerSideEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ServerSideEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS KMS customer master key (CMK). Amazon Kendra
     * doesn't support asymmetric CMKs.</p>
     */
    inline ServerSideEncryptionConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
