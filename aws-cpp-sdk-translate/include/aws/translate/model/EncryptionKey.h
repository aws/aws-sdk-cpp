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
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/EncryptionKeyType.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The encryption key used to encrypt the custom terminologies used by Amazon
   * Translate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/EncryptionKey">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSLATE_API EncryptionKey
  {
  public:
    EncryptionKey();
    EncryptionKey(Aws::Utils::Json::JsonView jsonValue);
    EncryptionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt custom
     * terminologies.</p>
     */
    inline const EncryptionKeyType& GetType() const{ return m_type; }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt custom
     * terminologies.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt custom
     * terminologies.</p>
     */
    inline void SetType(const EncryptionKeyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt custom
     * terminologies.</p>
     */
    inline void SetType(EncryptionKeyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt custom
     * terminologies.</p>
     */
    inline EncryptionKey& WithType(const EncryptionKeyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of encryption key used by Amazon Translate to encrypt custom
     * terminologies.</p>
     */
    inline EncryptionKey& WithType(EncryptionKeyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline EncryptionKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline EncryptionKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the encryption key being used to encrypt
     * the custom terminology.</p>
     */
    inline EncryptionKey& WithId(const char* value) { SetId(value); return *this;}

  private:

    EncryptionKeyType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
