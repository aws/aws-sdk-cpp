/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>The tags used to organize, track, or control access for this resource. For
   * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/Tag">AWS API
   * Reference</a></p>
   */
  class Tag
  {
  public:
    AWS_VOICEID_API Tag();
    AWS_VOICEID_API Tag(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The first part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the key is 'Department'.
     * </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The second part of a key:value pair that forms a tag associated with a given
     * resource. For example, in the tag 'Department':'Sales', the value is 'Sales'.
     * </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
