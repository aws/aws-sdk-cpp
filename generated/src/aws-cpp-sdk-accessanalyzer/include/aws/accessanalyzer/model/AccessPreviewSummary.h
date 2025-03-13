/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/AccessPreviewStatus.h>
#include <aws/accessanalyzer/model/AccessPreviewStatusReason.h>
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
   * <p>Contains a summary of information about an access preview.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/AccessPreviewSummary">AWS
   * API Reference</a></p>
   */
  class AccessPreviewSummary
  {
  public:
    AWS_ACCESSANALYZER_API AccessPreviewSummary() = default;
    AWS_ACCESSANALYZER_API AccessPreviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API AccessPreviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the access preview.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AccessPreviewSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the analyzer used to generate the access preview.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const { return m_analyzerArn; }
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }
    template<typename AnalyzerArnT = Aws::String>
    void SetAnalyzerArn(AnalyzerArnT&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::forward<AnalyzerArnT>(value); }
    template<typename AnalyzerArnT = Aws::String>
    AccessPreviewSummary& WithAnalyzerArn(AnalyzerArnT&& value) { SetAnalyzerArn(std::forward<AnalyzerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the access preview was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AccessPreviewSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the access preview.</p> <ul> <li> <p> <code>Creating</code> -
     * The access preview creation is in progress.</p> </li> <li> <p>
     * <code>Completed</code> - The access preview is complete and previews the
     * findings for external access to the resource.</p> </li> <li> <p>
     * <code>Failed</code> - The access preview creation has failed.</p> </li> </ul>
     */
    inline AccessPreviewStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AccessPreviewStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AccessPreviewSummary& WithStatus(AccessPreviewStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const AccessPreviewStatusReason& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = AccessPreviewStatusReason>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = AccessPreviewStatusReason>
    AccessPreviewSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    AccessPreviewStatus m_status{AccessPreviewStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AccessPreviewStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
