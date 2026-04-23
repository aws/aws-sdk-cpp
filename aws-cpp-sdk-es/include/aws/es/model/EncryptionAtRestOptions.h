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
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the Encryption At Rest Options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/EncryptionAtRestOptions">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API EncryptionAtRestOptions
  {
  public:
    EncryptionAtRestOptions();
    EncryptionAtRestOptions(Aws::Utils::Json::JsonView jsonValue);
    EncryptionAtRestOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the option to enable Encryption At Rest.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies the option to enable Encryption At Rest.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies the option to enable Encryption At Rest.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies the option to enable Encryption At Rest.</p>
     */
    inline EncryptionAtRestOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline EncryptionAtRestOptions& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline EncryptionAtRestOptions& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> Specifies the KMS Key ID for Encryption At Rest options.</p>
     */
    inline EncryptionAtRestOptions& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
