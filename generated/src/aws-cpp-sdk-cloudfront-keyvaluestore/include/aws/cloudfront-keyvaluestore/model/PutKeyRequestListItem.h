/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
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
namespace CloudFrontKeyValueStore
{
namespace Model
{

  /**
   * <p>List item for key value pair to put.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/PutKeyRequestListItem">AWS
   * API Reference</a></p>
   */
  class PutKeyRequestListItem
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyRequestListItem();
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyRequestListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDFRONTKEYVALUESTORE_API PutKeyRequestListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline PutKeyRequestListItem& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline PutKeyRequestListItem& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the key value pair list item to put.</p>
     */
    inline PutKeyRequestListItem& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline PutKeyRequestListItem& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline PutKeyRequestListItem& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the key value pair to put.</p>
     */
    inline PutKeyRequestListItem& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
