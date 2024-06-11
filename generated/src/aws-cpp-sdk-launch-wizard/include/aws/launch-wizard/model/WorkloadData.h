/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/WorkloadStatus.h>
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
namespace LaunchWizard
{
namespace Model
{

  /**
   * <p>Describes a workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/WorkloadData">AWS
   * API Reference</a></p>
   */
  class WorkloadData
  {
  public:
    AWS_LAUNCHWIZARD_API WorkloadData();
    AWS_LAUNCHWIZARD_API WorkloadData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of a workload.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkloadData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkloadData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkloadData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a workload.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline WorkloadData& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline WorkloadData& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline WorkloadData& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a workload document.</p>
     */
    inline const Aws::String& GetDocumentationUrl() const{ return m_documentationUrl; }
    inline bool DocumentationUrlHasBeenSet() const { return m_documentationUrlHasBeenSet; }
    inline void SetDocumentationUrl(const Aws::String& value) { m_documentationUrlHasBeenSet = true; m_documentationUrl = value; }
    inline void SetDocumentationUrl(Aws::String&& value) { m_documentationUrlHasBeenSet = true; m_documentationUrl = std::move(value); }
    inline void SetDocumentationUrl(const char* value) { m_documentationUrlHasBeenSet = true; m_documentationUrl.assign(value); }
    inline WorkloadData& WithDocumentationUrl(const Aws::String& value) { SetDocumentationUrl(value); return *this;}
    inline WorkloadData& WithDocumentationUrl(Aws::String&& value) { SetDocumentationUrl(std::move(value)); return *this;}
    inline WorkloadData& WithDocumentationUrl(const char* value) { SetDocumentationUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a workload icon.</p>
     */
    inline const Aws::String& GetIconUrl() const{ return m_iconUrl; }
    inline bool IconUrlHasBeenSet() const { return m_iconUrlHasBeenSet; }
    inline void SetIconUrl(const Aws::String& value) { m_iconUrlHasBeenSet = true; m_iconUrl = value; }
    inline void SetIconUrl(Aws::String&& value) { m_iconUrlHasBeenSet = true; m_iconUrl = std::move(value); }
    inline void SetIconUrl(const char* value) { m_iconUrlHasBeenSet = true; m_iconUrl.assign(value); }
    inline WorkloadData& WithIconUrl(const Aws::String& value) { SetIconUrl(value); return *this;}
    inline WorkloadData& WithIconUrl(Aws::String&& value) { SetIconUrl(std::move(value)); return *this;}
    inline WorkloadData& WithIconUrl(const char* value) { SetIconUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a workload.</p>
     */
    inline const WorkloadStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkloadStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkloadStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkloadData& WithStatus(const WorkloadStatus& value) { SetStatus(value); return *this;}
    inline WorkloadData& WithStatus(WorkloadStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message about a workload's status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline WorkloadData& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline WorkloadData& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline WorkloadData& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline WorkloadData& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline WorkloadData& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline WorkloadData& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_documentationUrl;
    bool m_documentationUrlHasBeenSet = false;

    Aws::String m_iconUrl;
    bool m_iconUrlHasBeenSet = false;

    WorkloadStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
