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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/TrustedAdvisorResourcesSummary.h>
#include <aws/support/model/TrustedAdvisorCategorySpecificSummary.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>A summary of a Trusted Advisor check result, including the alert status, last
   * refresh, and number of resources examined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorCheckSummary
  {
  public:
    TrustedAdvisorCheckSummary();
    TrustedAdvisorCheckSummary(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorCheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckSummary& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckSummary& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline TrustedAdvisorCheckSummary& WithCheckId(const char* value) { SetCheckId(value); return *this;}


    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline TrustedAdvisorCheckSummary& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline TrustedAdvisorCheckSummary& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The time of the last refresh of the check.</p>
     */
    inline TrustedAdvisorCheckSummary& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}


    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline TrustedAdvisorCheckSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline TrustedAdvisorCheckSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The alert status of the check: "ok" (green), "warning" (yellow), "error"
     * (red), or "not_available".</p>
     */
    inline TrustedAdvisorCheckSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Specifies whether the Trusted Advisor check has flagged resources.</p>
     */
    inline bool GetHasFlaggedResources() const{ return m_hasFlaggedResources; }

    /**
     * <p>Specifies whether the Trusted Advisor check has flagged resources.</p>
     */
    inline bool HasFlaggedResourcesHasBeenSet() const { return m_hasFlaggedResourcesHasBeenSet; }

    /**
     * <p>Specifies whether the Trusted Advisor check has flagged resources.</p>
     */
    inline void SetHasFlaggedResources(bool value) { m_hasFlaggedResourcesHasBeenSet = true; m_hasFlaggedResources = value; }

    /**
     * <p>Specifies whether the Trusted Advisor check has flagged resources.</p>
     */
    inline TrustedAdvisorCheckSummary& WithHasFlaggedResources(bool value) { SetHasFlaggedResources(value); return *this;}


    
    inline const TrustedAdvisorResourcesSummary& GetResourcesSummary() const{ return m_resourcesSummary; }

    
    inline bool ResourcesSummaryHasBeenSet() const { return m_resourcesSummaryHasBeenSet; }

    
    inline void SetResourcesSummary(const TrustedAdvisorResourcesSummary& value) { m_resourcesSummaryHasBeenSet = true; m_resourcesSummary = value; }

    
    inline void SetResourcesSummary(TrustedAdvisorResourcesSummary&& value) { m_resourcesSummaryHasBeenSet = true; m_resourcesSummary = std::move(value); }

    
    inline TrustedAdvisorCheckSummary& WithResourcesSummary(const TrustedAdvisorResourcesSummary& value) { SetResourcesSummary(value); return *this;}

    
    inline TrustedAdvisorCheckSummary& WithResourcesSummary(TrustedAdvisorResourcesSummary&& value) { SetResourcesSummary(std::move(value)); return *this;}


    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline const TrustedAdvisorCategorySpecificSummary& GetCategorySpecificSummary() const{ return m_categorySpecificSummary; }

    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline bool CategorySpecificSummaryHasBeenSet() const { return m_categorySpecificSummaryHasBeenSet; }

    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline void SetCategorySpecificSummary(const TrustedAdvisorCategorySpecificSummary& value) { m_categorySpecificSummaryHasBeenSet = true; m_categorySpecificSummary = value; }

    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline void SetCategorySpecificSummary(TrustedAdvisorCategorySpecificSummary&& value) { m_categorySpecificSummaryHasBeenSet = true; m_categorySpecificSummary = std::move(value); }

    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline TrustedAdvisorCheckSummary& WithCategorySpecificSummary(const TrustedAdvisorCategorySpecificSummary& value) { SetCategorySpecificSummary(value); return *this;}

    /**
     * <p>Summary information that relates to the category of the check. Cost
     * Optimizing is the only category that is currently supported.</p>
     */
    inline TrustedAdvisorCheckSummary& WithCategorySpecificSummary(TrustedAdvisorCategorySpecificSummary&& value) { SetCategorySpecificSummary(std::move(value)); return *this;}

  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    bool m_hasFlaggedResources;
    bool m_hasFlaggedResourcesHasBeenSet;

    TrustedAdvisorResourcesSummary m_resourcesSummary;
    bool m_resourcesSummaryHasBeenSet;

    TrustedAdvisorCategorySpecificSummary m_categorySpecificSummary;
    bool m_categorySpecificSummaryHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
