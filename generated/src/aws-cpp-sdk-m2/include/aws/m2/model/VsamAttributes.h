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
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/VsamAttributes">AWS
   * API Reference</a></p>
   */
  class VsamAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API VsamAttributes() = default;
    AWS_MAINFRAMEMODERNIZATION_API VsamAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API VsamAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    VsamAttributes& WithAlternateKeys(AlternateKeysT&& value) { SetAlternateKeys(std::forward<AlternateKeysT>(value)); return *this;}
    template<typename AlternateKeysT = AlternateKey>
    VsamAttributes& AddAlternateKeys(AlternateKeysT&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys.emplace_back(std::forward<AlternateKeysT>(value)); return *this; }
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
    inline VsamAttributes& WithCompressed(bool value) { SetCompressed(value); return *this;}
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
    VsamAttributes& WithEncoding(EncodingT&& value) { SetEncoding(std::forward<EncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record format of the data set.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    VsamAttributes& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
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
    VsamAttributes& WithPrimaryKey(PrimaryKeyT&& value) { SetPrimaryKey(std::forward<PrimaryKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlternateKey> m_alternateKeys;
    bool m_alternateKeysHasBeenSet = false;

    bool m_compressed{false};
    bool m_compressedHasBeenSet = false;

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    PrimaryKey m_primaryKey;
    bool m_primaryKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
