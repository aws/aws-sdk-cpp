/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ModelStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information for filtering a list of document classifiers. You can
   * only specify one filtering parameter in a request. For more information, see the
   * <code>ListDocumentClassifiers</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierFilter">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierFilter
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierFilter() = default;
    AWS_COMPREHEND_API DocumentClassifierFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DocumentClassifierFilter& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline const Aws::String& GetDocumentClassifierName() const { return m_documentClassifierName; }
    inline bool DocumentClassifierNameHasBeenSet() const { return m_documentClassifierNameHasBeenSet; }
    template<typename DocumentClassifierNameT = Aws::String>
    void SetDocumentClassifierName(DocumentClassifierNameT&& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = std::forward<DocumentClassifierNameT>(value); }
    template<typename DocumentClassifierNameT = Aws::String>
    DocumentClassifierFilter& WithDocumentClassifierName(DocumentClassifierNameT&& value) { SetDocumentClassifierName(std::forward<DocumentClassifierNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const { return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    void SetSubmitTimeBefore(SubmitTimeBeforeT&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::forward<SubmitTimeBeforeT>(value); }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    DocumentClassifierFilter& WithSubmitTimeBefore(SubmitTimeBeforeT&& value) { SetSubmitTimeBefore(std::forward<SubmitTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const { return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    void SetSubmitTimeAfter(SubmitTimeAfterT&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::forward<SubmitTimeAfterT>(value); }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    DocumentClassifierFilter& WithSubmitTimeAfter(SubmitTimeAfterT&& value) { SetSubmitTimeAfter(std::forward<SubmitTimeAfterT>(value)); return *this;}
    ///@}
  private:

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_documentClassifierName;
    bool m_documentClassifierNameHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore{};
    bool m_submitTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeAfter{};
    bool m_submitTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
