/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/EventIngestion.h>
#include <aws/frauddetector/model/IngestedEventStatistics.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The event type details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EventType">AWS
   * API Reference</a></p>
   */
  class EventType
  {
  public:
    AWS_FRAUDDETECTOR_API EventType();
    AWS_FRAUDDETECTOR_API EventType(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EventType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event type name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The event type name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The event type name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The event type name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The event type name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The event type name.</p>
     */
    inline EventType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The event type name.</p>
     */
    inline EventType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The event type name.</p>
     */
    inline EventType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The event type description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The event type description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The event type description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The event type description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The event type description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The event type description.</p>
     */
    inline EventType& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The event type description.</p>
     */
    inline EventType& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The event type description.</p>
     */
    inline EventType& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The event type event variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariables() const{ return m_eventVariables; }

    /**
     * <p>The event type event variables.</p>
     */
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }

    /**
     * <p>The event type event variables.</p>
     */
    inline void SetEventVariables(const Aws::Vector<Aws::String>& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = value; }

    /**
     * <p>The event type event variables.</p>
     */
    inline void SetEventVariables(Aws::Vector<Aws::String>&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::move(value); }

    /**
     * <p>The event type event variables.</p>
     */
    inline EventType& WithEventVariables(const Aws::Vector<Aws::String>& value) { SetEventVariables(value); return *this;}

    /**
     * <p>The event type event variables.</p>
     */
    inline EventType& WithEventVariables(Aws::Vector<Aws::String>&& value) { SetEventVariables(std::move(value)); return *this;}

    /**
     * <p>The event type event variables.</p>
     */
    inline EventType& AddEventVariables(const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(value); return *this; }

    /**
     * <p>The event type event variables.</p>
     */
    inline EventType& AddEventVariables(Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(std::move(value)); return *this; }

    /**
     * <p>The event type event variables.</p>
     */
    inline EventType& AddEventVariables(const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(value); return *this; }


    /**
     * <p>The event type labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>The event type labels.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>The event type labels.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>The event type labels.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>The event type labels.</p>
     */
    inline EventType& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>The event type labels.</p>
     */
    inline EventType& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The event type labels.</p>
     */
    inline EventType& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>The event type labels.</p>
     */
    inline EventType& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>The event type labels.</p>
     */
    inline EventType& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>The event type entity types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>The event type entity types.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>The event type entity types.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<Aws::String>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>The event type entity types.</p>
     */
    inline void SetEntityTypes(Aws::Vector<Aws::String>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>The event type entity types.</p>
     */
    inline EventType& WithEntityTypes(const Aws::Vector<Aws::String>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>The event type entity types.</p>
     */
    inline EventType& WithEntityTypes(Aws::Vector<Aws::String>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>The event type entity types.</p>
     */
    inline EventType& AddEntityTypes(const Aws::String& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>The event type entity types.</p>
     */
    inline EventType& AddEntityTypes(Aws::String&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The event type entity types.</p>
     */
    inline EventType& AddEntityTypes(const char* value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }


    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline const EventIngestion& GetEventIngestion() const{ return m_eventIngestion; }

    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline bool EventIngestionHasBeenSet() const { return m_eventIngestionHasBeenSet; }

    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline void SetEventIngestion(const EventIngestion& value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = value; }

    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline void SetEventIngestion(EventIngestion&& value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = std::move(value); }

    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline EventType& WithEventIngestion(const EventIngestion& value) { SetEventIngestion(value); return *this;}

    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline EventType& WithEventIngestion(EventIngestion&& value) { SetEventIngestion(std::move(value)); return *this;}


    /**
     * <p>Data about the stored events.</p>
     */
    inline const IngestedEventStatistics& GetIngestedEventStatistics() const{ return m_ingestedEventStatistics; }

    /**
     * <p>Data about the stored events.</p>
     */
    inline bool IngestedEventStatisticsHasBeenSet() const { return m_ingestedEventStatisticsHasBeenSet; }

    /**
     * <p>Data about the stored events.</p>
     */
    inline void SetIngestedEventStatistics(const IngestedEventStatistics& value) { m_ingestedEventStatisticsHasBeenSet = true; m_ingestedEventStatistics = value; }

    /**
     * <p>Data about the stored events.</p>
     */
    inline void SetIngestedEventStatistics(IngestedEventStatistics&& value) { m_ingestedEventStatisticsHasBeenSet = true; m_ingestedEventStatistics = std::move(value); }

    /**
     * <p>Data about the stored events.</p>
     */
    inline EventType& WithIngestedEventStatistics(const IngestedEventStatistics& value) { SetIngestedEventStatistics(value); return *this;}

    /**
     * <p>Data about the stored events.</p>
     */
    inline EventType& WithIngestedEventStatistics(IngestedEventStatistics&& value) { SetIngestedEventStatistics(std::move(value)); return *this;}


    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline EventType& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline EventType& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline EventType& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline EventType& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline EventType& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline EventType& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The entity type ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The entity type ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The entity type ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The entity type ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The entity type ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The entity type ARN.</p>
     */
    inline EventType& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The entity type ARN.</p>
     */
    inline EventType& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The entity type ARN.</p>
     */
    inline EventType& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventVariables;
    bool m_eventVariablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;

    EventIngestion m_eventIngestion;
    bool m_eventIngestionHasBeenSet = false;

    IngestedEventStatistics m_ingestedEventStatistics;
    bool m_ingestedEventStatisticsHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
