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
    AWS_LAUNCHWIZARD_API WorkloadData() = default;
    AWS_LAUNCHWIZARD_API WorkloadData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API WorkloadData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of a workload.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkloadData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a workload.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    WorkloadData& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a workload document.</p>
     */
    inline const Aws::String& GetDocumentationUrl() const { return m_documentationUrl; }
    inline bool DocumentationUrlHasBeenSet() const { return m_documentationUrlHasBeenSet; }
    template<typename DocumentationUrlT = Aws::String>
    void SetDocumentationUrl(DocumentationUrlT&& value) { m_documentationUrlHasBeenSet = true; m_documentationUrl = std::forward<DocumentationUrlT>(value); }
    template<typename DocumentationUrlT = Aws::String>
    WorkloadData& WithDocumentationUrl(DocumentationUrlT&& value) { SetDocumentationUrl(std::forward<DocumentationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of a workload icon.</p>
     */
    inline const Aws::String& GetIconUrl() const { return m_iconUrl; }
    inline bool IconUrlHasBeenSet() const { return m_iconUrlHasBeenSet; }
    template<typename IconUrlT = Aws::String>
    void SetIconUrl(IconUrlT&& value) { m_iconUrlHasBeenSet = true; m_iconUrl = std::forward<IconUrlT>(value); }
    template<typename IconUrlT = Aws::String>
    WorkloadData& WithIconUrl(IconUrlT&& value) { SetIconUrl(std::forward<IconUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a workload.</p>
     */
    inline WorkloadStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkloadStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkloadData& WithStatus(WorkloadStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message about a workload's status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    WorkloadData& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    WorkloadData& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
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

    WorkloadStatus m_status{WorkloadStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
