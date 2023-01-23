/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>A key-value pair representing a single tag that's been applied to an Amazon
   * Web Services resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TagListEntry">AWS
   * API Reference</a></p>
   */
  class TagListEntry
  {
  public:
    AWS_DATASYNC_API TagListEntry();
    AWS_DATASYNC_API TagListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TagListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline TagListEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline TagListEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for an Amazon Web Services resource tag.</p>
     */
    inline TagListEntry& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline TagListEntry& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline TagListEntry& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for an Amazon Web Services resource tag.</p>
     */
    inline TagListEntry& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
