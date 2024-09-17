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
    AWS_MAINFRAMEMODERNIZATION_API VsamAttributes();
    AWS_MAINFRAMEMODERNIZATION_API VsamAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API VsamAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alternate key definitions, if any. A legacy dataset might not have any
     * alternate key defined, but if those alternate keys definitions exist, provide
     * them as some applications will make use of them.</p>
     */
    inline const Aws::Vector<AlternateKey>& GetAlternateKeys() const{ return m_alternateKeys; }
    inline bool AlternateKeysHasBeenSet() const { return m_alternateKeysHasBeenSet; }
    inline void SetAlternateKeys(const Aws::Vector<AlternateKey>& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys = value; }
    inline void SetAlternateKeys(Aws::Vector<AlternateKey>&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys = std::move(value); }
    inline VsamAttributes& WithAlternateKeys(const Aws::Vector<AlternateKey>& value) { SetAlternateKeys(value); return *this;}
    inline VsamAttributes& WithAlternateKeys(Aws::Vector<AlternateKey>&& value) { SetAlternateKeys(std::move(value)); return *this;}
    inline VsamAttributes& AddAlternateKeys(const AlternateKey& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys.push_back(value); return *this; }
    inline VsamAttributes& AddAlternateKeys(AlternateKey&& value) { m_alternateKeysHasBeenSet = true; m_alternateKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether indexes for this dataset are stored as compressed values.
     * If you have a large data set (typically &gt; 100 Mb), consider setting this flag
     * to True.</p>
     */
    inline bool GetCompressed() const{ return m_compressed; }
    inline bool CompressedHasBeenSet() const { return m_compressedHasBeenSet; }
    inline void SetCompressed(bool value) { m_compressedHasBeenSet = true; m_compressed = value; }
    inline VsamAttributes& WithCompressed(bool value) { SetCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set used by the data set. Can be ASCII, EBCDIC, or unknown.</p>
     */
    inline const Aws::String& GetEncoding() const{ return m_encoding; }
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }
    inline void SetEncoding(const Aws::String& value) { m_encodingHasBeenSet = true; m_encoding = value; }
    inline void SetEncoding(Aws::String&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }
    inline void SetEncoding(const char* value) { m_encodingHasBeenSet = true; m_encoding.assign(value); }
    inline VsamAttributes& WithEncoding(const Aws::String& value) { SetEncoding(value); return *this;}
    inline VsamAttributes& WithEncoding(Aws::String&& value) { SetEncoding(std::move(value)); return *this;}
    inline VsamAttributes& WithEncoding(const char* value) { SetEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record format of the data set.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const Aws::String& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_formatHasBeenSet = true; m_format.assign(value); }
    inline VsamAttributes& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline VsamAttributes& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline VsamAttributes& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key of the data set.</p>
     */
    inline const PrimaryKey& GetPrimaryKey() const{ return m_primaryKey; }
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }
    inline void SetPrimaryKey(const PrimaryKey& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = value; }
    inline void SetPrimaryKey(PrimaryKey&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::move(value); }
    inline VsamAttributes& WithPrimaryKey(const PrimaryKey& value) { SetPrimaryKey(value); return *this;}
    inline VsamAttributes& WithPrimaryKey(PrimaryKey&& value) { SetPrimaryKey(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlternateKey> m_alternateKeys;
    bool m_alternateKeysHasBeenSet = false;

    bool m_compressed;
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
