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
   * <p>Provides information for filtering a list of entity recognizers. You can only
   * specify one filtering parameter in a request. For more information, see the
   * <code>ListEntityRecognizers</code> operation./&gt;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityRecognizerFilter">AWS
   * API Reference</a></p>
   */
  class EntityRecognizerFilter
  {
  public:
    AWS_COMPREHEND_API EntityRecognizerFilter();
    AWS_COMPREHEND_API EntityRecognizerFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EntityRecognizerFilter& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}
    inline EntityRecognizerFilter& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned the entity recognizer.</p>
     */
    inline const Aws::String& GetRecognizerName() const{ return m_recognizerName; }
    inline bool RecognizerNameHasBeenSet() const { return m_recognizerNameHasBeenSet; }
    inline void SetRecognizerName(const Aws::String& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = value; }
    inline void SetRecognizerName(Aws::String&& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = std::move(value); }
    inline void SetRecognizerName(const char* value) { m_recognizerNameHasBeenSet = true; m_recognizerName.assign(value); }
    inline EntityRecognizerFilter& WithRecognizerName(const Aws::String& value) { SetRecognizerName(value); return *this;}
    inline EntityRecognizerFilter& WithRecognizerName(Aws::String&& value) { SetRecognizerName(std::move(value)); return *this;}
    inline EntityRecognizerFilter& WithRecognizerName(const char* value) { SetRecognizerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const{ return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    inline void SetSubmitTimeBefore(const Aws::Utils::DateTime& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = value; }
    inline void SetSubmitTimeBefore(Aws::Utils::DateTime&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::move(value); }
    inline EntityRecognizerFilter& WithSubmitTimeBefore(const Aws::Utils::DateTime& value) { SetSubmitTimeBefore(value); return *this;}
    inline EntityRecognizerFilter& WithSubmitTimeBefore(Aws::Utils::DateTime&& value) { SetSubmitTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const{ return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    inline void SetSubmitTimeAfter(const Aws::Utils::DateTime& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = value; }
    inline void SetSubmitTimeAfter(Aws::Utils::DateTime&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::move(value); }
    inline EntityRecognizerFilter& WithSubmitTimeAfter(const Aws::Utils::DateTime& value) { SetSubmitTimeAfter(value); return *this;}
    inline EntityRecognizerFilter& WithSubmitTimeAfter(Aws::Utils::DateTime&& value) { SetSubmitTimeAfter(std::move(value)); return *this;}
    ///@}
  private:

    ModelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_recognizerName;
    bool m_recognizerNameHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore;
    bool m_submitTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeAfter;
    bool m_submitTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
