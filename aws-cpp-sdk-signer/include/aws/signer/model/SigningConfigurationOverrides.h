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
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/EncryptionAlgorithm.h>
#include <aws/signer/model/HashAlgorithm.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>A signing configuration that overrides the default encryption or hash
   * algorithm of a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningConfigurationOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningConfigurationOverrides
  {
  public:
    SigningConfigurationOverrides();
    SigningConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
    SigningConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A specified override of the default encryption algorithm that is used in an
     * AWS Signer job.</p>
     */
    inline const EncryptionAlgorithm& GetEncryptionAlgorithm() const{ return m_encryptionAlgorithm; }

    /**
     * <p>A specified override of the default encryption algorithm that is used in an
     * AWS Signer job.</p>
     */
    inline bool EncryptionAlgorithmHasBeenSet() const { return m_encryptionAlgorithmHasBeenSet; }

    /**
     * <p>A specified override of the default encryption algorithm that is used in an
     * AWS Signer job.</p>
     */
    inline void SetEncryptionAlgorithm(const EncryptionAlgorithm& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = value; }

    /**
     * <p>A specified override of the default encryption algorithm that is used in an
     * AWS Signer job.</p>
     */
    inline void SetEncryptionAlgorithm(EncryptionAlgorithm&& value) { m_encryptionAlgorithmHasBeenSet = true; m_encryptionAlgorithm = std::move(value); }

    /**
     * <p>A specified override of the default encryption algorithm that is used in an
     * AWS Signer job.</p>
     */
    inline SigningConfigurationOverrides& WithEncryptionAlgorithm(const EncryptionAlgorithm& value) { SetEncryptionAlgorithm(value); return *this;}

    /**
     * <p>A specified override of the default encryption algorithm that is used in an
     * AWS Signer job.</p>
     */
    inline SigningConfigurationOverrides& WithEncryptionAlgorithm(EncryptionAlgorithm&& value) { SetEncryptionAlgorithm(std::move(value)); return *this;}


    /**
     * <p>A specified override of the default hash algorithm that is used in an AWS
     * Signer job.</p>
     */
    inline const HashAlgorithm& GetHashAlgorithm() const{ return m_hashAlgorithm; }

    /**
     * <p>A specified override of the default hash algorithm that is used in an AWS
     * Signer job.</p>
     */
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }

    /**
     * <p>A specified override of the default hash algorithm that is used in an AWS
     * Signer job.</p>
     */
    inline void SetHashAlgorithm(const HashAlgorithm& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }

    /**
     * <p>A specified override of the default hash algorithm that is used in an AWS
     * Signer job.</p>
     */
    inline void SetHashAlgorithm(HashAlgorithm&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::move(value); }

    /**
     * <p>A specified override of the default hash algorithm that is used in an AWS
     * Signer job.</p>
     */
    inline SigningConfigurationOverrides& WithHashAlgorithm(const HashAlgorithm& value) { SetHashAlgorithm(value); return *this;}

    /**
     * <p>A specified override of the default hash algorithm that is used in an AWS
     * Signer job.</p>
     */
    inline SigningConfigurationOverrides& WithHashAlgorithm(HashAlgorithm&& value) { SetHashAlgorithm(std::move(value)); return *this;}

  private:

    EncryptionAlgorithm m_encryptionAlgorithm;
    bool m_encryptionAlgorithmHasBeenSet;

    HashAlgorithm m_hashAlgorithm;
    bool m_hashAlgorithmHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
