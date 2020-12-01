/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/InsightTimeRange.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/devops-guru/model/InsightStatus.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API ReactiveInsight
  {
  public:
    ReactiveInsight();
    ReactiveInsight(Aws::Utils::Json::JsonView jsonValue);
    ReactiveInsight& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline ReactiveInsight& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline ReactiveInsight& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline ReactiveInsight& WithId(const char* value) { SetId(value); return *this;}


    
    inline const InsightTimeRange& GetInsightTimeRange() const{ return m_insightTimeRange; }

    
    inline bool InsightTimeRangeHasBeenSet() const { return m_insightTimeRangeHasBeenSet; }

    
    inline void SetInsightTimeRange(const InsightTimeRange& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = value; }

    
    inline void SetInsightTimeRange(InsightTimeRange&& value) { m_insightTimeRangeHasBeenSet = true; m_insightTimeRange = std::move(value); }

    
    inline ReactiveInsight& WithInsightTimeRange(const InsightTimeRange& value) { SetInsightTimeRange(value); return *this;}

    
    inline ReactiveInsight& WithInsightTimeRange(InsightTimeRange&& value) { SetInsightTimeRange(std::move(value)); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline ReactiveInsight& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline ReactiveInsight& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline ReactiveInsight& WithName(const char* value) { SetName(value); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ReactiveInsight& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ReactiveInsight& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}


    
    inline const InsightSeverity& GetSeverity() const{ return m_severity; }

    
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    
    inline void SetSeverity(const InsightSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    
    inline void SetSeverity(InsightSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    
    inline ReactiveInsight& WithSeverity(const InsightSeverity& value) { SetSeverity(value); return *this;}

    
    inline ReactiveInsight& WithSeverity(InsightSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    
    inline const Aws::String& GetSsmOpsItemId() const{ return m_ssmOpsItemId; }

    
    inline bool SsmOpsItemIdHasBeenSet() const { return m_ssmOpsItemIdHasBeenSet; }

    
    inline void SetSsmOpsItemId(const Aws::String& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = value; }

    
    inline void SetSsmOpsItemId(Aws::String&& value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId = std::move(value); }

    
    inline void SetSsmOpsItemId(const char* value) { m_ssmOpsItemIdHasBeenSet = true; m_ssmOpsItemId.assign(value); }

    
    inline ReactiveInsight& WithSsmOpsItemId(const Aws::String& value) { SetSsmOpsItemId(value); return *this;}

    
    inline ReactiveInsight& WithSsmOpsItemId(Aws::String&& value) { SetSsmOpsItemId(std::move(value)); return *this;}

    
    inline ReactiveInsight& WithSsmOpsItemId(const char* value) { SetSsmOpsItemId(value); return *this;}


    
    inline const InsightStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const InsightStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(InsightStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ReactiveInsight& WithStatus(const InsightStatus& value) { SetStatus(value); return *this;}

    
    inline ReactiveInsight& WithStatus(InsightStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    InsightTimeRange m_insightTimeRange;
    bool m_insightTimeRangeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet;

    InsightSeverity m_severity;
    bool m_severityHasBeenSet;

    Aws::String m_ssmOpsItemId;
    bool m_ssmOpsItemIdHasBeenSet;

    InsightStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
