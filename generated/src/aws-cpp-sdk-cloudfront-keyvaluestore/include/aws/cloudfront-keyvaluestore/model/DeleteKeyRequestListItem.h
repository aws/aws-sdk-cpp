﻿/**
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
   * <p>List item for keys to delete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-keyvaluestore-2022-07-26/DeleteKeyRequestListItem">AWS
   * API Reference</a></p>
   */
  class DeleteKeyRequestListItem
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API DeleteKeyRequestListItem() = default;
    AWS_CLOUDFRONTKEYVALUESTORE_API DeleteKeyRequestListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDFRONTKEYVALUESTORE_API DeleteKeyRequestListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the key value pair to be deleted.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DeleteKeyRequestListItem& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
