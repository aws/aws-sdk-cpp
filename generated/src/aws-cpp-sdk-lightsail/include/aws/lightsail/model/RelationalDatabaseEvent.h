/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an event for a database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RelationalDatabaseEvent">AWS
   * API Reference</a></p>
   */
  class RelationalDatabaseEvent
  {
  public:
    AWS_LIGHTSAIL_API RelationalDatabaseEvent() = default;
    AWS_LIGHTSAIL_API RelationalDatabaseEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API RelationalDatabaseEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The database that the database event relates to.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    RelationalDatabaseEvent& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the database event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RelationalDatabaseEvent& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message of the database event.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RelationalDatabaseEvent& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category that the database event belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const { return m_eventCategories; }
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    void SetEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::forward<EventCategoriesT>(value); }
    template<typename EventCategoriesT = Aws::Vector<Aws::String>>
    RelationalDatabaseEvent& WithEventCategories(EventCategoriesT&& value) { SetEventCategories(std::forward<EventCategoriesT>(value)); return *this;}
    template<typename EventCategoriesT = Aws::String>
    RelationalDatabaseEvent& AddEventCategories(EventCategoriesT&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.emplace_back(std::forward<EventCategoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
