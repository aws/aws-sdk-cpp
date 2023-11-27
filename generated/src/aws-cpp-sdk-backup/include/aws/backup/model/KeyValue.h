/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Pair of two related strings. Allowed characters are letters, white space, and
   * numbers that can be represented in UTF-8 and the following characters: <code> +
   * - = . _ : /</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/KeyValue">AWS API
   * Reference</a></p>
   */
  class KeyValue
  {
  public:
    AWS_BACKUP_API KeyValue();
    AWS_BACKUP_API KeyValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API KeyValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline KeyValue& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline KeyValue& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The tag key (String). The key can't start with <code>aws:</code>.</p>
     * <p>Length Constraints: Minimum length of 1. Maximum length of 128.</p>
     * <p>Pattern:
     * <code>^(?![aA]{1}[wW]{1}[sS]{1}:)([\p{L}\p{Z}\p{N}_.:/=+\-@]+)$</code> </p>
     */
    inline KeyValue& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline KeyValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline KeyValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key.</p> <p>Length Constraints: Maximum length of 256.</p>
     * <p>Pattern: <code>^([\p{L}\p{Z}\p{N}_.:/=+\-@]*)$</code> </p>
     */
    inline KeyValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
