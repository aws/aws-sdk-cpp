/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains information about each entry in the key list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/KeyListEntry">AWS
   * API Reference</a></p>
   */
  class KeyListEntry
  {
  public:
    AWS_KMS_API KeyListEntry();
    AWS_KMS_API KeyListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API KeyListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier of the key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline KeyListEntry& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline KeyListEntry& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the key.</p>
     */
    inline KeyListEntry& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>ARN of the key.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>ARN of the key.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>ARN of the key.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>ARN of the key.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>ARN of the key.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>ARN of the key.</p>
     */
    inline KeyListEntry& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>ARN of the key.</p>
     */
    inline KeyListEntry& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the key.</p>
     */
    inline KeyListEntry& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
