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
    AWS_KENDRA_API IndexStatistics() = default;
    AWS_KENDRA_API IndexStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API IndexStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of question and answer topics in the index.</p>
     */
    inline const FaqStatistics& GetFaqStatistics() const { return m_faqStatistics; }
    inline bool FaqStatisticsHasBeenSet() const { return m_faqStatisticsHasBeenSet; }
    template<typename FaqStatisticsT = FaqStatistics>
    void SetFaqStatistics(FaqStatisticsT&& value) { m_faqStatisticsHasBeenSet = true; m_faqStatistics = std::forward<FaqStatisticsT>(value); }
    template<typename FaqStatisticsT = FaqStatistics>
    IndexStatistics& WithFaqStatistics(FaqStatisticsT&& value) { SetFaqStatistics(std::forward<FaqStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of text documents indexed.</p>
     */
    inline const TextDocumentStatistics& GetTextDocumentStatistics() const { return m_textDocumentStatistics; }
    inline bool TextDocumentStatisticsHasBeenSet() const { return m_textDocumentStatisticsHasBeenSet; }
    template<typename TextDocumentStatisticsT = TextDocumentStatistics>
    void SetTextDocumentStatistics(TextDocumentStatisticsT&& value) { m_textDocumentStatisticsHasBeenSet = true; m_textDocumentStatistics = std::forward<TextDocumentStatisticsT>(value); }
    template<typename TextDocumentStatisticsT = TextDocumentStatistics>
    IndexStatistics& WithTextDocumentStatistics(TextDocumentStatisticsT&& value) { SetTextDocumentStatistics(std::forward<TextDocumentStatisticsT>(value)); return *this;}
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
