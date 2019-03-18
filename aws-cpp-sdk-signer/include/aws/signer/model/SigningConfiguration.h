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
#include <aws/signer/model/EncryptionAlgorithmOptions.h>
#include <aws/signer/model/HashAlgorithmOptions.h>
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
   * <p>The configuration of an AWS Signer operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningConfiguration
  {
  public:
    SigningConfiguration();
    SigningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SigningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption algorithm options that are available for an AWS Signer
     * job.</p>
     */
    inline const EncryptionAlgorithmOptions& GetEncryptionAlgorithmOptions() const{ return m_encryptionAlgorithmOptions; }

    /**
     * <p>The encryption algorithm options that are available for an AWS Signer
     * job.</p>
     */
    inline bool EncryptionAlgorithmOptionsHasBeenSet() const { return m_encryptionAlgorithmOptionsHasBeenSet; }

    /**
     * <p>The encryption algorithm options that are available for an AWS Signer
     * job.</p>
     */
    inline void SetEncryptionAlgorithmOptions(const EncryptionAlgorithmOptions& value) { m_encryptionAlgorithmOptionsHasBeenSet = true; m_encryptionAlgorithmOptions = value; }

    /**
     * <p>The encryption algorithm options that are available for an AWS Signer
     * job.</p>
     */
    inline void SetEncryptionAlgorithmOptions(EncryptionAlgorithmOptions&& value) { m_encryptionAlgorithmOptionsHasBeenSet = true; m_encryptionAlgorithmOptions = std::move(value); }

    /**
     * <p>The encryption algorithm options that are available for an AWS Signer
     * job.</p>
     */
    inline SigningConfiguration& WithEncryptionAlgorithmOptions(const EncryptionAlgorithmOptions& value) { SetEncryptionAlgorithmOptions(value); return *this;}

    /**
     * <p>The encryption algorithm options that are available for an AWS Signer
     * job.</p>
     */
    inline SigningConfiguration& WithEncryptionAlgorithmOptions(EncryptionAlgorithmOptions&& value) { SetEncryptionAlgorithmOptions(std::move(value)); return *this;}


    /**
     * <p>The hash algorithm options that are available for an AWS Signer job.</p>
     */
    inline const HashAlgorithmOptions& GetHashAlgorithmOptions() const{ return m_hashAlgorithmOptions; }

    /**
     * <p>The hash algorithm options that are available for an AWS Signer job.</p>
     */
    inline bool HashAlgorithmOptionsHasBeenSet() const { return m_hashAlgorithmOptionsHasBeenSet; }

    /**
     * <p>The hash algorithm options that are available for an AWS Signer job.</p>
     */
    inline void SetHashAlgorithmOptions(const HashAlgorithmOptions& value) { m_hashAlgorithmOptionsHasBeenSet = true; m_hashAlgorithmOptions = value; }

    /**
     * <p>The hash algorithm options that are available for an AWS Signer job.</p>
     */
    inline void SetHashAlgorithmOptions(HashAlgorithmOptions&& value) { m_hashAlgorithmOptionsHasBeenSet = true; m_hashAlgorithmOptions = std::move(value); }

    /**
     * <p>The hash algorithm options that are available for an AWS Signer job.</p>
     */
    inline SigningConfiguration& WithHashAlgorithmOptions(const HashAlgorithmOptions& value) { SetHashAlgorithmOptions(value); return *this;}

    /**
     * <p>The hash algorithm options that are available for an AWS Signer job.</p>
     */
    inline SigningConfiguration& WithHashAlgorithmOptions(HashAlgorithmOptions&& value) { SetHashAlgorithmOptions(std::move(value)); return *this;}

  private:

    EncryptionAlgorithmOptions m_encryptionAlgorithmOptions;
    bool m_encryptionAlgorithmOptionsHasBeenSet;

    HashAlgorithmOptions m_hashAlgorithmOptions;
    bool m_hashAlgorithmOptionsHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
