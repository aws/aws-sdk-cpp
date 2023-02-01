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
    AWS_KENDRA_API TextDocumentStatistics();
    AWS_KENDRA_API TextDocumentStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API TextDocumentStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of text documents indexed.</p>
     */
    inline int GetIndexedTextDocumentsCount() const{ return m_indexedTextDocumentsCount; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline bool IndexedTextDocumentsCountHasBeenSet() const { return m_indexedTextDocumentsCountHasBeenSet; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline void SetIndexedTextDocumentsCount(int value) { m_indexedTextDocumentsCountHasBeenSet = true; m_indexedTextDocumentsCount = value; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline TextDocumentStatistics& WithIndexedTextDocumentsCount(int value) { SetIndexedTextDocumentsCount(value); return *this;}


    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline long long GetIndexedTextBytes() const{ return m_indexedTextBytes; }

    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline bool IndexedTextBytesHasBeenSet() const { return m_indexedTextBytesHasBeenSet; }

    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline void SetIndexedTextBytes(long long value) { m_indexedTextBytesHasBeenSet = true; m_indexedTextBytes = value; }

    /**
     * <p>The total size, in bytes, of the indexed documents.</p>
     */
    inline TextDocumentStatistics& WithIndexedTextBytes(long long value) { SetIndexedTextBytes(value); return *this;}

  private:

    int m_indexedTextDocumentsCount;
    bool m_indexedTextDocumentsCountHasBeenSet = false;

    long long m_indexedTextBytes;
    bool m_indexedTextBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
