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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchComplianceDataState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about the state of a patch on a particular instance as it relates
   * to the patch baseline used to patch the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchComplianceData">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API PatchComplianceData
  {
  public:
    PatchComplianceData();
    PatchComplianceData(const Aws::Utils::Json::JsonValue& jsonValue);
    PatchComplianceData& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The title of the patch.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the patch.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the patch.</p>
     */
    inline PatchComplianceData& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the patch.</p>
     */
    inline PatchComplianceData& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the patch.</p>
     */
    inline PatchComplianceData& WithTitle(const char* value) { SetTitle(value); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline const Aws::String& GetKBId() const{ return m_kBId; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline void SetKBId(const Aws::String& value) { m_kBIdHasBeenSet = true; m_kBId = value; }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline void SetKBId(Aws::String&& value) { m_kBIdHasBeenSet = true; m_kBId = std::move(value); }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline void SetKBId(const char* value) { m_kBIdHasBeenSet = true; m_kBId.assign(value); }

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline PatchComplianceData& WithKBId(const Aws::String& value) { SetKBId(value); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline PatchComplianceData& WithKBId(Aws::String&& value) { SetKBId(std::move(value)); return *this;}

    /**
     * <p>The Microsoft Knowledge Base ID of the patch.</p>
     */
    inline PatchComplianceData& WithKBId(const char* value) { SetKBId(value); return *this;}

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline PatchComplianceData& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline PatchComplianceData& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>The classification of the patch (for example, SecurityUpdates, Updates,
     * CriticalUpdates).</p>
     */
    inline PatchComplianceData& WithClassification(const char* value) { SetClassification(value); return *this;}

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline PatchComplianceData& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline PatchComplianceData& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>The severity of the patch (for example, Critical, Important, Moderate).</p>
     */
    inline PatchComplianceData& WithSeverity(const char* value) { SetSeverity(value); return *this;}

    /**
     * <p>The state of the patch on the instance (INSTALLED, INSTALLED_OTHER, MISSING,
     * NOT_APPLICABLE or FAILED).</p>
     */
    inline const PatchComplianceDataState& GetState() const{ return m_state; }

    /**
     * <p>The state of the patch on the instance (INSTALLED, INSTALLED_OTHER, MISSING,
     * NOT_APPLICABLE or FAILED).</p>
     */
    inline void SetState(const PatchComplianceDataState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the patch on the instance (INSTALLED, INSTALLED_OTHER, MISSING,
     * NOT_APPLICABLE or FAILED).</p>
     */
    inline void SetState(PatchComplianceDataState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the patch on the instance (INSTALLED, INSTALLED_OTHER, MISSING,
     * NOT_APPLICABLE or FAILED).</p>
     */
    inline PatchComplianceData& WithState(const PatchComplianceDataState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the patch on the instance (INSTALLED, INSTALLED_OTHER, MISSING,
     * NOT_APPLICABLE or FAILED).</p>
     */
    inline PatchComplianceData& WithState(PatchComplianceDataState&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The date/time the patch was installed on the instance.</p>
     */
    inline const Aws::Utils::DateTime& GetInstalledTime() const{ return m_installedTime; }

    /**
     * <p>The date/time the patch was installed on the instance.</p>
     */
    inline void SetInstalledTime(const Aws::Utils::DateTime& value) { m_installedTimeHasBeenSet = true; m_installedTime = value; }

    /**
     * <p>The date/time the patch was installed on the instance.</p>
     */
    inline void SetInstalledTime(Aws::Utils::DateTime&& value) { m_installedTimeHasBeenSet = true; m_installedTime = std::move(value); }

    /**
     * <p>The date/time the patch was installed on the instance.</p>
     */
    inline PatchComplianceData& WithInstalledTime(const Aws::Utils::DateTime& value) { SetInstalledTime(value); return *this;}

    /**
     * <p>The date/time the patch was installed on the instance.</p>
     */
    inline PatchComplianceData& WithInstalledTime(Aws::Utils::DateTime&& value) { SetInstalledTime(std::move(value)); return *this;}

  private:
    Aws::String m_title;
    bool m_titleHasBeenSet;
    Aws::String m_kBId;
    bool m_kBIdHasBeenSet;
    Aws::String m_classification;
    bool m_classificationHasBeenSet;
    Aws::String m_severity;
    bool m_severityHasBeenSet;
    PatchComplianceDataState m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_installedTime;
    bool m_installedTimeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
