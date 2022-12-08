/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Used for filtering by a specific topic preference.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TopicFilter">AWS
   * API Reference</a></p>
   */
  class TopicFilter
  {
  public:
    AWS_SESV2_API TopicFilter();
    AWS_SESV2_API TopicFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API TopicFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline TopicFilter& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline TopicFilter& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of a topic on which you wish to apply the filter.</p>
     */
    inline TopicFilter& WithTopicName(const char* value) { SetTopicName(value); return *this;}


    /**
     * <p>Notes that the default subscription status should be applied to a contact
     * because the contact has not noted their preference for subscribing to a
     * topic.</p>
     */
    inline bool GetUseDefaultIfPreferenceUnavailable() const{ return m_useDefaultIfPreferenceUnavailable; }

    /**
     * <p>Notes that the default subscription status should be applied to a contact
     * because the contact has not noted their preference for subscribing to a
     * topic.</p>
     */
    inline bool UseDefaultIfPreferenceUnavailableHasBeenSet() const { return m_useDefaultIfPreferenceUnavailableHasBeenSet; }

    /**
     * <p>Notes that the default subscription status should be applied to a contact
     * because the contact has not noted their preference for subscribing to a
     * topic.</p>
     */
    inline void SetUseDefaultIfPreferenceUnavailable(bool value) { m_useDefaultIfPreferenceUnavailableHasBeenSet = true; m_useDefaultIfPreferenceUnavailable = value; }

    /**
     * <p>Notes that the default subscription status should be applied to a contact
     * because the contact has not noted their preference for subscribing to a
     * topic.</p>
     */
    inline TopicFilter& WithUseDefaultIfPreferenceUnavailable(bool value) { SetUseDefaultIfPreferenceUnavailable(value); return *this;}

  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    bool m_useDefaultIfPreferenceUnavailable;
    bool m_useDefaultIfPreferenceUnavailableHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
