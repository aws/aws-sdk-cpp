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


    ///@{
    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline const FaqStatistics& GetFaqStatistics() const{ return m_faqStatistics; }
    inline bool FaqStatisticsHasBeenSet() const { return m_faqStatisticsHasBeenSet; }
    inline void SetFaqStatistics(const FaqStatistics& value) { m_faqStatisticsHasBeenSet = true; m_faqStatistics = value; }
    inline void SetFaqStatistics(FaqStatistics&& value) { m_faqStatisticsHasBeenSet = true; m_faqStatistics = std::move(value); }
    inline IndexStatistics& WithFaqStatistics(const FaqStatistics& value) { SetFaqStatistics(value); return *this;}
    inline IndexStatistics& WithFaqStatistics(FaqStatistics&& value) { SetFaqStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of text documents indexed.</p>
     */
    inline const TextDocumentStatistics& GetTextDocumentStatistics() const{ return m_textDocumentStatistics; }
    inline bool TextDocumentStatisticsHasBeenSet() const { return m_textDocumentStatisticsHasBeenSet; }
    inline void SetTextDocumentStatistics(const TextDocumentStatistics& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = value; }
    inline void SetTextDocumentStatistics(TextDocumentStatistics&& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = std::move(value); }
    inline IndexStatistics& WithTextDocumentStatistics(const TextDocumentStatistics& value) { SetTextDocumentStatistics(value); return *this;}
    inline IndexStatistics& WithTextDocumentStatistics(TextDocumentStatistics&& value) { SetTextDocumentStatistics(std::move(value)); return *this;}
    ///@}
  private:

    FaqStatistics m_faqStatistics;
    bool m_faqStatisticsHasBeenSet = false;

    TextDocumentStatistics m_textDocumentStatistics;
    bool m_textDocumentStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
