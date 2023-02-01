/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/PrimaryKey.h>
#include <aws/m2/model/AlternateKey.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>The attributes of a VSAM type data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/VsamDetailAttributes">AWS
   * API Reference</a></p>
   */
  class VsamDetailAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API VsamDetailAttributes();
    AWS_MAINFRAMEMODERNIZATION_API VsamDetailAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API VsamDetailAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline const Aws::Vector<AlternateKey>& GetAlternateKeys() const{ return m_alternateKeys; }

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline bool AlternateKeysHasBeenSet() const { return m_alternateKeysHasBeenSet; }

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline void SetAlternateKeys(const Aws::Vector<AlternateKey>& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys = value; }

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline void SetAlternateKeys(Aws::Vector<AlternateKey>&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys = std::move(value); }

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline VsamDetailAttributes& WithAlternateKeys(const Aws::Vector<AlternateKey>& value) { SetAlternateKeys(value); return *this;}

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline VsamDetailAttributes& WithAlternateKeys(Aws::Vector<AlternateKey>&& value) { SetAlternateKeys(std::move(value)); return *this;}

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline VsamDetailAttributes& AddAlternateKeys(const AlternateKey& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys.push_back(value); return *this; }

    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline VsamDetailAttributes& AddAlternateKeys(AlternateKey&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>If set to True, enforces loading the data set into cache before it’s used by
     * the application.</p>
     */
    inline bool GetCacheAtStartup() const{ return m_cacheAtStartup; }

    /**
     * <p>If set to True, enforces loading the data set into cache before it’s used by
     * the application.</p>
     */
    inline bool CacheAtStartupHasBeenSet() const { return m_cacheAtStartupHasBeenSet; }

    /**
     * <p>If set to True, enforces loading the data set into cache before it’s used by
     * the application.</p>
     */
    inline void SetCacheAtStartup(bool value) { m_cacheAtStartupHasBeenSet = true; m_cacheAtStartup = value; }

    /**
     * <p>If set to True, enforces loading the data set into cache before it’s used by
     * the application.</p>
     */
    inline VsamDetailAttributes& WithCacheAtStartup(bool value) { SetCacheAtStartup(value); return *this;}


    /**
     * <p>Indicates whether indexes for this dataset are stored as compressed values.
     * If you have a large data set (typically &gt; 100 Mb), consider setting this flag
     * to True.</p>
     */
    inline bool GetCompressed() const{ return m_compressed; }

    /**
     * <p>Indicates whether indexes for this dataset are stored as compressed values.
     * If you have a large data set (typically &gt; 100 Mb), consider setting this flag
     * to True.</p>
     */
    inline bool CompressedHasBeenSet() const { return m_compressedHasBeenSet; }

    /**
     * <p>Indicates whether indexes for this dataset are stored as compressed values.
     * If you have a large data set (typically &gt; 100 Mb), consider setting this flag
     * to True.</p>
     */
    inline void SetCompressed(bool value) { m_compressedHasBeenSet = true; m_compressed = value; }

    /**
     * <p>Indicates whether indexes for this dataset are stored as compressed values.
     * If you have a large data set (typically &gt; 100 Mb), consider setting this flag
     * to True.</p>
     */
    inline VsamDetailAttributes& WithCompressed(bool value) { SetCompressed(value); return *this;}


    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline const Aws::String& GetEncoding() const{ return m_encoding; }

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline void SetEncoding(const Aws::String& value) { m_encodingHasBeenSet = true; m_encoding = value; }

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline void SetEncoding(Aws::String&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline void SetEncoding(const char* value) { m_encodingHasBeenSet = true; m_encoding.assign(value); }

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline VsamDetailAttributes& WithEncoding(const Aws::String& value) { SetEncoding(value); return *this;}

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline VsamDetailAttributes& WithEncoding(Aws::String&& value) { SetEncoding(std::move(value)); return *this;}

    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline VsamDetailAttributes& WithEncoding(const char* value) { SetEncoding(value); return *this;}


    /**
     * <p>The primary key of the data set.</p>
     */
    inline const PrimaryKey& GetPrimaryKey() const{ return m_primaryKey; }

    /**
     * <p>The primary key of the data set.</p>
     */
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }

    /**
     * <p>The primary key of the data set.</p>
     */
    inline void SetPrimaryKey(const PrimaryKey& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = value; }

    /**
     * <p>The primary key of the data set.</p>
     */
    inline void SetPrimaryKey(PrimaryKey&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::move(value); }

    /**
     * <p>The primary key of the data set.</p>
     */
    inline VsamDetailAttributes& WithPrimaryKey(const PrimaryKey& value) { SetPrimaryKey(value); return *this;}

    /**
     * <p>The primary key of the data set.</p>
     */
    inline VsamDetailAttributes& WithPrimaryKey(PrimaryKey&& value) { SetPrimaryKey(std::move(value)); return *this;}


    /**
     * <p>The record format of the data set.</p>
     */
    inline const Aws::String& GetRecordFormat() const{ return m_recordFormat; }

    /**
     * <p>The record format of the data set.</p>
     */
    inline bool RecordFormatHasBeenSet() const { return m_recordFormatHasBeenSet; }

    /**
     * <p>The record format of the data set.</p>
     */
    inline void SetRecordFormat(const Aws::String& value) { m_recordFormatHasBeenSet = true; m_recordFormat = value; }

    /**
     * <p>The record format of the data set.</p>
     */
    inline void SetRecordFormat(Aws::String&& value) { m_recordFormatHasBeenSet = true; m_recordFormat = std::move(value); }

    /**
     * <p>The record format of the data set.</p>
     */
    inline void SetRecordFormat(const char* value) { m_recordFormatHasBeenSet = true; m_recordFormat.assign(value); }

    /**
     * <p>The record format of the data set.</p>
     */
    inline VsamDetailAttributes& WithRecordFormat(const Aws::String& value) { SetRecordFormat(value); return *this;}

    /**
     * <p>The record format of the data set.</p>
     */
    inline VsamDetailAttributes& WithRecordFormat(Aws::String&& value) { SetRecordFormat(std::move(value)); return *this;}

    /**
     * <p>The record format of the data set.</p>
     */
    inline VsamDetailAttributes& WithRecordFormat(const char* value) { SetRecordFormat(value); return *this;}

  private:

    Aws::Vector<AlternateKey> m_alternateKeys;
    bool m_alternateKeysHasBeenSet = false;

    bool m_cacheAtStartup;
    bool m_cacheAtStartupHasBeenSet = false;

    bool m_compressed;
    bool m_compressedHasBeenSet = false;

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    PrimaryKey m_primaryKey;
    bool m_primaryKeyHasBeenSet = false;

    Aws::String m_recordFormat;
    bool m_recordFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
