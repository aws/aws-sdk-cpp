﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AttachmentHashType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A structure that includes attributes that describe a document
   * attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AttachmentContent">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AttachmentContent
  {
  public:
    AttachmentContent();
    AttachmentContent(Aws::Utils::Json::JsonView jsonValue);
    AttachmentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an attachment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an attachment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an attachment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an attachment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an attachment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an attachment.</p>
     */
    inline AttachmentContent& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an attachment.</p>
     */
    inline AttachmentContent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an attachment.</p>
     */
    inline AttachmentContent& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The size of an attachment in bytes.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size of an attachment in bytes.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of an attachment in bytes.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of an attachment in bytes.</p>
     */
    inline AttachmentContent& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline AttachmentContent& WithHash(const Aws::String& value) { SetHash(value); return *this;}

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline AttachmentContent& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}

    /**
     * <p>The cryptographic hash value of the document content.</p>
     */
    inline AttachmentContent& WithHash(const char* value) { SetHash(value); return *this;}


    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline const AttachmentHashType& GetHashType() const{ return m_hashType; }

    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline bool HashTypeHasBeenSet() const { return m_hashTypeHasBeenSet; }

    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline void SetHashType(const AttachmentHashType& value) { m_hashTypeHasBeenSet = true; m_hashType = value; }

    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline void SetHashType(AttachmentHashType&& value) { m_hashTypeHasBeenSet = true; m_hashType = std::move(value); }

    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline AttachmentContent& WithHashType(const AttachmentHashType& value) { SetHashType(value); return *this;}

    /**
     * <p>The hash algorithm used to calculate the hash value.</p>
     */
    inline AttachmentContent& WithHashType(AttachmentHashType&& value) { SetHashType(std::move(value)); return *this;}


    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline AttachmentContent& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline AttachmentContent& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL location of the attachment content.</p>
     */
    inline AttachmentContent& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    long long m_size;
    bool m_sizeHasBeenSet;

    Aws::String m_hash;
    bool m_hashHasBeenSet;

    AttachmentHashType m_hashType;
    bool m_hashTypeHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
