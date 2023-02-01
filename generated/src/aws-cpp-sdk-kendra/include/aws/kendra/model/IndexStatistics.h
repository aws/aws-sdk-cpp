/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/FaqStatistics.h>
#include <aws/kendra/model/TextDocumentStatistics.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about the number of documents and the number of
   * questions and answers in an index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/IndexStatistics">AWS
   * API Reference</a></p>
   */
  class IndexStatistics
  {
  public:
    AWS_KENDRA_API IndexStatistics();
    AWS_KENDRA_API IndexStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API IndexStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline const FaqStatistics& GetFaqStatistics() const{ return m_faqStatistics; }

    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline bool FaqStatisticsHasBeenSet() const { return m_faqStatisticsHasBeenSet; }

    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline void SetFaqStatistics(const FaqStatistics& value) { m_faqStatisticsHasBeenSet = true; m_faqStatistics = value; }

    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline void SetFaqStatistics(FaqStatistics&& value) { m_faqStatisticsHasBeenSet = true; m_faqStatistics = std::move(value); }

    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline IndexStatistics& WithFaqStatistics(const FaqStatistics& value) { SetFaqStatistics(value); return *this;}

    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline IndexStatistics& WithFaqStatistics(FaqStatistics&& value) { SetFaqStatistics(std::move(value)); return *this;}


    /**
     * <p>The number of text documents indexed.</p>
     */
    inline const TextDocumentStatistics& GetTextDocumentStatistics() const{ return m_textDocumentStatistics; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline bool TextDocumentStatisticsHasBeenSet() const { return m_textDocumentStatisticsHasBeenSet; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline void SetTextDocumentStatistics(const TextDocumentStatistics& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = value; }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline void SetTextDocumentStatistics(TextDocumentStatistics&& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = std::move(value); }

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline IndexStatistics& WithTextDocumentStatistics(const TextDocumentStatistics& value) { SetTextDocumentStatistics(value); return *this;}

    /**
     * <p>The number of text documents indexed.</p>
     */
    inline IndexStatistics& WithTextDocumentStatistics(TextDocumentStatistics&& value) { SetTextDocumentStatistics(std::move(value)); return *this;}

  private:

    FaqStatistics m_faqStatistics;
    bool m_faqStatisticsHasBeenSet = false;

    TextDocumentStatistics m_textDocumentStatistics;
    bool m_textDocumentStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
