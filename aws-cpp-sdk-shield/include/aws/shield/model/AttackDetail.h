/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/shield/model/SubResourceSummary.h>
#include <aws/shield/model/SummarizedCounter.h>
#include <aws/shield/model/AttackProperty.h>
#include <aws/shield/model/Mitigation.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>The details of a DDoS attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API AttackDetail
  {
  public:
    AttackDetail();
    AttackDetail(Aws::Utils::Json::JsonView jsonValue);
    AttackDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline const Aws::String& GetAttackId() const{ return m_attackId; }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline bool AttackIdHasBeenSet() const { return m_attackIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline void SetAttackId(const Aws::String& value) { m_attackIdHasBeenSet = true; m_attackId = value; }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline void SetAttackId(Aws::String&& value) { m_attackIdHasBeenSet = true; m_attackId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline void SetAttackId(const char* value) { m_attackIdHasBeenSet = true; m_attackId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline AttackDetail& WithAttackId(const Aws::String& value) { SetAttackId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline AttackDetail& WithAttackId(Aws::String&& value) { SetAttackId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline AttackDetail& WithAttackId(const char* value) { SetAttackId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline AttackDetail& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline AttackDetail& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline AttackDetail& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline const Aws::Vector<SubResourceSummary>& GetSubResources() const{ return m_subResources; }

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline bool SubResourcesHasBeenSet() const { return m_subResourcesHasBeenSet; }

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline void SetSubResources(const Aws::Vector<SubResourceSummary>& value) { m_subResourcesHasBeenSet = true; m_subResources = value; }

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline void SetSubResources(Aws::Vector<SubResourceSummary>&& value) { m_subResourcesHasBeenSet = true; m_subResources = std::move(value); }

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline AttackDetail& WithSubResources(const Aws::Vector<SubResourceSummary>& value) { SetSubResources(value); return *this;}

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline AttackDetail& WithSubResources(Aws::Vector<SubResourceSummary>&& value) { SetSubResources(std::move(value)); return *this;}

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline AttackDetail& AddSubResources(const SubResourceSummary& value) { m_subResourcesHasBeenSet = true; m_subResources.push_back(value); return *this; }

    /**
     * <p>If applicable, additional detail about the resource being attacked, for
     * example, IP address or URL.</p>
     */
    inline AttackDetail& AddSubResources(SubResourceSummary&& value) { m_subResourcesHasBeenSet = true; m_subResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The time the attack started, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the attack started, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the attack started, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the attack started, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the attack started, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackDetail& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the attack started, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackDetail& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the attack ended, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time the attack ended, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time the attack ended, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time the attack ended, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time the attack ended, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackDetail& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time the attack ended, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackDetail& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline const Aws::Vector<SummarizedCounter>& GetAttackCounters() const{ return m_attackCounters; }

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline bool AttackCountersHasBeenSet() const { return m_attackCountersHasBeenSet; }

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline void SetAttackCounters(const Aws::Vector<SummarizedCounter>& value) { m_attackCountersHasBeenSet = true; m_attackCounters = value; }

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline void SetAttackCounters(Aws::Vector<SummarizedCounter>&& value) { m_attackCountersHasBeenSet = true; m_attackCounters = std::move(value); }

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline AttackDetail& WithAttackCounters(const Aws::Vector<SummarizedCounter>& value) { SetAttackCounters(value); return *this;}

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline AttackDetail& WithAttackCounters(Aws::Vector<SummarizedCounter>&& value) { SetAttackCounters(std::move(value)); return *this;}

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline AttackDetail& AddAttackCounters(const SummarizedCounter& value) { m_attackCountersHasBeenSet = true; m_attackCounters.push_back(value); return *this; }

    /**
     * <p>List of counters that describe the attack for the specified time period.</p>
     */
    inline AttackDetail& AddAttackCounters(SummarizedCounter&& value) { m_attackCountersHasBeenSet = true; m_attackCounters.push_back(std::move(value)); return *this; }


    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline const Aws::Vector<AttackProperty>& GetAttackProperties() const{ return m_attackProperties; }

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline bool AttackPropertiesHasBeenSet() const { return m_attackPropertiesHasBeenSet; }

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline void SetAttackProperties(const Aws::Vector<AttackProperty>& value) { m_attackPropertiesHasBeenSet = true; m_attackProperties = value; }

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline void SetAttackProperties(Aws::Vector<AttackProperty>&& value) { m_attackPropertiesHasBeenSet = true; m_attackProperties = std::move(value); }

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline AttackDetail& WithAttackProperties(const Aws::Vector<AttackProperty>& value) { SetAttackProperties(value); return *this;}

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline AttackDetail& WithAttackProperties(Aws::Vector<AttackProperty>&& value) { SetAttackProperties(std::move(value)); return *this;}

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline AttackDetail& AddAttackProperties(const AttackProperty& value) { m_attackPropertiesHasBeenSet = true; m_attackProperties.push_back(value); return *this; }

    /**
     * <p>The array of <a>AttackProperty</a> objects.</p>
     */
    inline AttackDetail& AddAttackProperties(AttackProperty&& value) { m_attackPropertiesHasBeenSet = true; m_attackProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline const Aws::Vector<Mitigation>& GetMitigations() const{ return m_mitigations; }

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline bool MitigationsHasBeenSet() const { return m_mitigationsHasBeenSet; }

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline void SetMitigations(const Aws::Vector<Mitigation>& value) { m_mitigationsHasBeenSet = true; m_mitigations = value; }

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline void SetMitigations(Aws::Vector<Mitigation>&& value) { m_mitigationsHasBeenSet = true; m_mitigations = std::move(value); }

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline AttackDetail& WithMitigations(const Aws::Vector<Mitigation>& value) { SetMitigations(value); return *this;}

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline AttackDetail& WithMitigations(Aws::Vector<Mitigation>&& value) { SetMitigations(std::move(value)); return *this;}

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline AttackDetail& AddMitigations(const Mitigation& value) { m_mitigationsHasBeenSet = true; m_mitigations.push_back(value); return *this; }

    /**
     * <p>List of mitigation actions taken for the attack.</p>
     */
    inline AttackDetail& AddMitigations(Mitigation&& value) { m_mitigationsHasBeenSet = true; m_mitigations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_attackId;
    bool m_attackIdHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<SubResourceSummary> m_subResources;
    bool m_subResourcesHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Vector<SummarizedCounter> m_attackCounters;
    bool m_attackCountersHasBeenSet;

    Aws::Vector<AttackProperty> m_attackProperties;
    bool m_attackPropertiesHasBeenSet;

    Aws::Vector<Mitigation> m_mitigations;
    bool m_mitigationsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
