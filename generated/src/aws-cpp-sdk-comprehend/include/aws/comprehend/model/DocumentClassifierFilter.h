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
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DocumentClassifierFilter">AWS
   * API Reference</a></p>
   */
  class DocumentClassifierFilter
  {
  public:
    AWS_COMPREHEND_API DocumentClassifierFilter();
    AWS_COMPREHEND_API DocumentClassifierFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DocumentClassifierFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline DocumentClassifierFilter& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Filters the list of classifiers based on status.</p>
     */
    inline DocumentClassifierFilter& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline const Aws::String& GetDocumentClassifierName() const{ return m_documentClassifierName; }

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline bool DocumentClassifierNameHasBeenSet() const { return m_documentClassifierNameHasBeenSet; }

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline void SetDocumentClassifierName(const Aws::String& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = value; }

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline void SetDocumentClassifierName(Aws::String&& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = std::move(value); }

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline void SetDocumentClassifierName(const char* value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName.assign(value); }

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline DocumentClassifierFilter& WithDocumentClassifierName(const Aws::String& value) { SetDocumentClassifierName(value); return *this;}

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline DocumentClassifierFilter& WithDocumentClassifierName(Aws::String&& value) { SetDocumentClassifierName(std::move(value)); return *this;}

    /**
     * <p>The name that you assigned to the document classifier</p>
     */
    inline DocumentClassifierFilter& WithDocumentClassifierName(const char* value) { SetDocumentClassifierName(value); return *this;}


    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const{ return m_submitTimeBefore; }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline void SetSubmitTimeBefore(const Aws::Utils::DateTime& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = value; }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline void SetSubmitTimeBefore(Aws::Utils::DateTime&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::move(value); }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline DocumentClassifierFilter& WithSubmitTimeBefore(const Aws::Utils::DateTime& value) { SetSubmitTimeBefore(value); return *this;}

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted before the
     * specified time. Classifiers are returned in ascending order, oldest to
     * newest.</p>
     */
    inline DocumentClassifierFilter& WithSubmitTimeBefore(Aws::Utils::DateTime&& value) { SetSubmitTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const{ return m_submitTimeAfter; }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmitTimeAfter(const Aws::Utils::DateTime& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = value; }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmitTimeAfter(Aws::Utils::DateTime&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::move(value); }

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline DocumentClassifierFilter& WithSubmitTimeAfter(const Aws::Utils::DateTime& value) { SetSubmitTimeAfter(value); return *this;}

    /**
     * <p>Filters the list of classifiers based on the time that the classifier was
     * submitted for processing. Returns only classifiers submitted after the specified
     * time. Classifiers are returned in descending order, newest to oldest.</p>
     */
    inline DocumentClassifierFilter& WithSubmitTimeAfter(Aws::Utils::DateTime&& value) { SetSubmitTimeAfter(std::move(value)); return *this;}

  private:

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_documentClassifierName;
    bool m_documentClassifierNameHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore;
    bool m_submitTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeAfter;
    bool m_submitTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
