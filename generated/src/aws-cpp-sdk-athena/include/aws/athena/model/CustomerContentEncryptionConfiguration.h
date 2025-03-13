/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Specifies the customer managed KMS key that is used to encrypt the user's
   * data stores in Athena. When an Amazon Web Services managed key is used, this
   * value is null. This setting does not apply to Athena SQL
   * workgroups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CustomerContentEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomerContentEncryptionConfiguration
  {
  public:
    AWS_ATHENA_API CustomerContentEncryptionConfiguration() = default;
    AWS_ATHENA_API CustomerContentEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CustomerContentEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer managed KMS key that is used to encrypt the user's data stores
     * in Athena.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    CustomerContentEncryptionConfiguration& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
