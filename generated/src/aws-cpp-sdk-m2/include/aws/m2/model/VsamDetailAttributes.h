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
    AWS_MAINFRAMEMODERNIZATION_API VsamDetailAttributes() = default;
    AWS_MAINFRAMEMODERNIZATION_API VsamDetailAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API VsamDetailAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline const Aws::Vector<AlternateKey>& GetAlternateKeys() const { return m_alternateKeys; }
    inline bool AlternateKeysHasBeenSet() const { return m_alternateKeysHasBeenSet; }
    template<typename AlternateKeysT = Aws::Vector<AlternateKey>>
    void SetAlternateKeys(AlternateKeysT&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys = std::forward<AlternateKeysT>(value); }
    template<typename AlternateKeysT = Aws::Vector<AlternateKey>>
    VsamDetailAttributes& WithAlternateKeys(AlternateKeysT&& value) { SetAlternateKeys(std::forward<AlternateKeysT>(value)); return *this;}
    template<typename AlternateKeysT = AlternateKey>
    VsamDetailAttributes& AddAlternateKeys(AlternateKeysT&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys.emplace_back(std::forward<AlternateKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to True, enforces loading the data set into cache before it’s used by
     * the application.</p>
     */
    inline bool GetCacheAtStartup() const { return m_cacheAtStartup; }
    inline bool CacheAtStartupHasBeenSet() const { return m_cacheAtStartupHasBeenSet; }
    inline void SetCacheAtStartup(bool value) { m_cacheAtStartupHasBeenSet = true; m_cacheAtStartup = value; }
    inline VsamDetailAttributes& WithCacheAtStartup(bool value) { SetCacheAtStartup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether indexes for this dataset are stored as compressed values.
     * If you have a large data set (typically &gt; 100 Mb), consider setting this flag
     * to True.</p>
     */
    inline bool GetCompressed() const { return m_compressed; }
    inline bool CompressedHasBeenSet() const { return m_compressedHasBeenSet; }
    inline void SetCompressed(bool value) { m_compressedHasBeenSet = true; m_compressed = value; }
    inline VsamDetailAttributes& WithCompressed(bool value) { SetCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline const Aws::String& GetEncoding() const { return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    template<typename EncodingT = Aws::String>
    void SetEncoding(EncodingT&& value) { m_encodingHasBeenSet = true; m_encoding = std::forward<EncodingT>(value); }
    template<typename EncodingT = Aws::String>
    VsamDetailAttributes& WithEncoding(EncodingT&& value) { SetEncoding(std::forward<EncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key of the data set.</p>
     */
    inline const PrimaryKey& GetPrimaryKey() const { return m_primaryKey; }
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }
    template<typename PrimaryKeyT = PrimaryKey>
    void SetPrimaryKey(PrimaryKeyT&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::forward<PrimaryKeyT>(value); }
    template<typename PrimaryKeyT = PrimaryKey>
    VsamDetailAttributes& WithPrimaryKey(PrimaryKeyT&& value) { SetPrimaryKey(std::forward<PrimaryKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record format of the data set.</p>
     */
    inline const Aws::String& GetRecordFormat() const { return m_recordFormat; }
    inline bool RecordFormatHasBeenSet() const { return m_recordFormatHasBeenSet; }
    template<typename RecordFormatT = Aws::String>
    void SetRecordFormat(RecordFormatT&& value) { m_recordFormatHasBeenSet = true; m_recordFormat = std::forward<RecordFormatT>(value); }
    template<typename RecordFormatT = Aws::String>
    VsamDetailAttributes& WithRecordFormat(RecordFormatT&& value) { SetRecordFormat(std::forward<RecordFormatT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlternateKey> m_alternateKeys;
    bool m_alternateKeysHasBeenSet = false;

    bool m_cacheAtStartup{false};
    bool m_cacheAtStartupHasBeenSet = false;

    bool m_compressed{false};
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
