/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about text documents indexed in an index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/TextDocumentStatistics">AWS
   * API Reference</a></p>
   */
  class TextDocumentStatistics
  {
  public:
    AWS_KENDRA_API TextDocumentStatistics() = default;
    AWS_KENDRA_API TextDocumentStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TextDocumentStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of text documents indexed.</p>
     */
    inline int GetIndexedTextDocumentsCount() const { return m_indexedTextDocumentsCount; }
    inline bool IndexedTextDocumentsCountHasBeenSet() const { return m_indexedTextDocumentsCountHasBeenSet; }
    inline void SetIndexedTextDocumentsCount(int value) { m_indexedTextDocumentsCountHasBeenSet = true; m_indexedTextDocumentsCount = value; }
    inline TextDocumentStatistics& WithIndexedTextDocumentsCount(int value) { SetIndexedTextDocumentsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline long long GetIndexedTextBytes() const { return m_indexedTextBytes; }
    inline bool IndexedTextBytesHasBeenSet() const { return m_indexedTextBytesHasBeenSet; }
    inline void SetIndexedTextBytes(long long value) { m_indexedTextBytesHasBeenSet = true; m_indexedTextBytes = value; }
    inline TextDocumentStatistics& WithIndexedTextBytes(long long value) { SetIndexedTextBytes(value); return *this;}
    ///@}
  private:

    int m_indexedTextDocumentsCount{0};
    bool m_indexedTextDocumentsCountHasBeenSet = false;

    long long m_indexedTextBytes{0};
    bool m_indexedTextBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
