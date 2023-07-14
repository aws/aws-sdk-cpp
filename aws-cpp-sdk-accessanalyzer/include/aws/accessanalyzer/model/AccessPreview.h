/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/AccessPreviewStatus.h>
#include <aws/accessanalyzer/model/AccessPreviewStatusReason.h>
#include <aws/accessanalyzer/model/Configuration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about an access preview.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AccessPreview">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API AccessPreview
  {
  public:
    AccessPreview();
    AccessPreview(Aws::Utils::Json::JsonView jsonValue);
    AccessPreview& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline AccessPreview& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline AccessPreview& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline AccessPreview& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}


    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline const Aws::Map<Aws::String, Configuration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline void SetConfigurations(const Aws::Map<Aws::String, Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline void SetConfigurations(Aws::Map<Aws::String, Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& WithConfigurations(const Aws::Map<Aws::String, Configuration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& WithConfigurations(Aws::Map<Aws::String, Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& AddConfigurations(const Aws::String& key, const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, value); return *this; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& AddConfigurations(Aws::String&& key, const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& AddConfigurations(const Aws::String& key, Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& AddConfigurations(Aws::String&& key, Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& AddConfigurations(const char* key, Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of resource ARNs for the proposed resource configuration.</p>
     */
    inline AccessPreview& AddConfigurations(const char* key, const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.emplace(key, value); return *this; }


    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline AccessPreview& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline AccessPreview& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline AccessPreview& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline AccessPreview& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline AccessPreview& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete. You can preview
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline const AccessPreviewStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete. You can preview
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete. You can preview
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline void SetStatus(const AccessPreviewStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete. You can preview
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline void SetStatus(AccessPreviewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete. You can preview
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline AccessPreview& WithStatus(const AccessPreviewStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete. You can preview
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline AccessPreview& WithStatus(AccessPreviewStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides more details about the current status of the access preview.</p>
     * <p>For example, if the creation of the access preview fails, a
     * <code>Failed</code> status is returned. This failure can be due to an internal
     * issue with the analysis or due to an invalid resource configuration.</p>
     */
    inline const AccessPreviewStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Provides more details about the current status of the access preview.</p>
     * <p>For example, if the creation of the access preview fails, a
     * <code>Failed</code> status is returned. This failure can be due to an internal
     * issue with the analysis or due to an invalid resource configuration.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Provides more details about the current status of the access preview.</p>
     * <p>For example, if the creation of the access preview fails, a
     * <code>Failed</code> status is returned. This failure can be due to an internal
     * issue with the analysis or due to an invalid resource configuration.</p>
     */
    inline void SetStatusReason(const AccessPreviewStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Provides more details about the current status of the access preview.</p>
     * <p>For example, if the creation of the access preview fails, a
     * <code>Failed</code> status is returned. This failure can be due to an internal
     * issue with the analysis or due to an invalid resource configuration.</p>
     */
    inline void SetStatusReason(AccessPreviewStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Provides more details about the current status of the access preview.</p>
     * <p>For example, if the creation of the access preview fails, a
     * <code>Failed</code> status is returned. This failure can be due to an internal
     * issue with the analysis or due to an invalid resource configuration.</p>
     */
    inline AccessPreview& WithStatusReason(const AccessPreviewStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Provides more details about the current status of the access preview.</p>
     * <p>For example, if the creation of the access preview fails, a
     * <code>Failed</code> status is returned. This failure can be due to an internal
     * issue with the analysis or due to an invalid resource configuration.</p>
     */
    inline AccessPreview& WithStatusReason(AccessPreviewStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}

  private:

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet;

    Aws::Map<Aws::String, Configuration> m_configurations;
    bool m_configurationsHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    AccessPreviewStatus m_status;
    bool m_statusHasBeenSet;

    AccessPreviewStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
