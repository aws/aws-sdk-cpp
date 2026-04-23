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
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/ItemType.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaStoreData
{
namespace Model
{

  /**
   * <p>A metadata entry for a folder or object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediastore-data-2017-09-01/Item">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIASTOREDATA_API Item
  {
  public:
    Item();
    Item(Aws::Utils::Json::JsonView jsonValue);
    Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the item.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the item.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the item.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the item.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the item.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the item.</p>
     */
    inline Item& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the item.</p>
     */
    inline Item& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the item.</p>
     */
    inline Item& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The item type (folder or object).</p>
     */
    inline const ItemType& GetType() const{ return m_type; }

    /**
     * <p>The item type (folder or object).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The item type (folder or object).</p>
     */
    inline void SetType(const ItemType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The item type (folder or object).</p>
     */
    inline void SetType(ItemType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The item type (folder or object).</p>
     */
    inline Item& WithType(const ItemType& value) { SetType(value); return *this;}

    /**
     * <p>The item type (folder or object).</p>
     */
    inline Item& WithType(ItemType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline Item& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline Item& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The ETag that represents a unique instance of the item.</p>
     */
    inline Item& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline Item& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that the item was last modified.</p>
     */
    inline Item& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The content type of the item.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the item.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the item.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the item.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the item.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content type of the item.</p>
     */
    inline Item& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the item.</p>
     */
    inline Item& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the item.</p>
     */
    inline Item& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The length of the item in bytes.</p>
     */
    inline long long GetContentLength() const{ return m_contentLength; }

    /**
     * <p>The length of the item in bytes.</p>
     */
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }

    /**
     * <p>The length of the item in bytes.</p>
     */
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }

    /**
     * <p>The length of the item in bytes.</p>
     */
    inline Item& WithContentLength(long long value) { SetContentLength(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ItemType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    long long m_contentLength;
    bool m_contentLengthHasBeenSet;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
