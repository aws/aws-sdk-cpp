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
    AWS_COMPREHEND_API EntityRecognizerFilter() = default;
    AWS_COMPREHEND_API EntityRecognizerFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API EntityRecognizerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an entity recognizer.</p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EntityRecognizerFilter& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned the entity recognizer.</p>
     */
    inline const Aws::String& GetRecognizerName() const { return m_recognizerName; }
    inline bool RecognizerNameHasBeenSet() const { return m_recognizerNameHasBeenSet; }
    template<typename RecognizerNameT = Aws::String>
    void SetRecognizerName(RecognizerNameT&& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = std::forward<RecognizerNameT>(value); }
    template<typename RecognizerNameT = Aws::String>
    EntityRecognizerFilter& WithRecognizerName(RecognizerNameT&& value) { SetRecognizerName(std::forward<RecognizerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const { return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    void SetSubmitTimeBefore(SubmitTimeBeforeT&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::forward<SubmitTimeBeforeT>(value); }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    EntityRecognizerFilter& WithSubmitTimeBefore(SubmitTimeBeforeT&& value) { SetSubmitTimeBefore(std::forward<SubmitTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of entities based on the time that the list was submitted
     * for processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const { return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    void SetSubmitTimeAfter(SubmitTimeAfterT&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::forward<SubmitTimeAfterT>(value); }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    EntityRecognizerFilter& WithSubmitTimeAfter(SubmitTimeAfterT&& value) { SetSubmitTimeAfter(std::forward<SubmitTimeAfterT>(value)); return *this;}
    ///@}
  private:

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_recognizerName;
    bool m_recognizerNameHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore{};
    bool m_submitTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeAfter{};
    bool m_submitTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
