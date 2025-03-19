/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackState.h>
#include <aws/core/utils/DateTime.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Status details of a conformance pack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConformancePackStatusDetail">AWS
   * API Reference</a></p>
   */
  class ConformancePackStatusDetail
  {
  public:
    AWS_CONFIGSERVICE_API ConformancePackStatusDetail() = default;
    AWS_CONFIGSERVICE_API ConformancePackStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    ConformancePackStatusDetail& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackId() const { return m_conformancePackId; }
    inline bool ConformancePackIdHasBeenSet() const { return m_conformancePackIdHasBeenSet; }
    template<typename ConformancePackIdT = Aws::String>
    void SetConformancePackId(ConformancePackIdT&& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = std::forward<ConformancePackIdT>(value); }
    template<typename ConformancePackIdT = Aws::String>
    ConformancePackStatusDetail& WithConformancePackId(ConformancePackIdT&& value) { SetConformancePackId(std::forward<ConformancePackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const { return m_conformancePackArn; }
    inline bool ConformancePackArnHasBeenSet() const { return m_conformancePackArnHasBeenSet; }
    template<typename ConformancePackArnT = Aws::String>
    void SetConformancePackArn(ConformancePackArnT&& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = std::forward<ConformancePackArnT>(value); }
    template<typename ConformancePackArnT = Aws::String>
    ConformancePackStatusDetail& WithConformancePackArn(ConformancePackArnT&& value) { SetConformancePackArn(std::forward<ConformancePackArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status of conformance pack.</p> <p>Config sets the state
     * of the conformance pack to:</p> <ul> <li> <p>CREATE_IN_PROGRESS when a
     * conformance pack creation is in progress for an account.</p> </li> <li>
     * <p>CREATE_COMPLETE when a conformance pack has been successfully created in your
     * account.</p> </li> <li> <p>CREATE_FAILED when a conformance pack creation failed
     * in your account.</p> </li> <li> <p>DELETE_IN_PROGRESS when a conformance pack
     * deletion is in progress. </p> </li> <li> <p>DELETE_FAILED when a conformance
     * pack deletion failed in your account.</p> </li> </ul>
     */
    inline ConformancePackState GetConformancePackState() const { return m_conformancePackState; }
    inline bool ConformancePackStateHasBeenSet() const { return m_conformancePackStateHasBeenSet; }
    inline void SetConformancePackState(ConformancePackState value) { m_conformancePackStateHasBeenSet = true; m_conformancePackState = value; }
    inline ConformancePackStatusDetail& WithConformancePackState(ConformancePackState value) { SetConformancePackState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline const Aws::String& GetStackArn() const { return m_stackArn; }
    inline bool StackArnHasBeenSet() const { return m_stackArnHasBeenSet; }
    template<typename StackArnT = Aws::String>
    void SetStackArn(StackArnT&& value) { m_stackArnHasBeenSet = true; m_stackArn = std::forward<StackArnT>(value); }
    template<typename StackArnT = Aws::String>
    ConformancePackStatusDetail& WithStackArn(StackArnT&& value) { SetStackArn(std::forward<StackArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline const Aws::String& GetConformancePackStatusReason() const { return m_conformancePackStatusReason; }
    inline bool ConformancePackStatusReasonHasBeenSet() const { return m_conformancePackStatusReasonHasBeenSet; }
    template<typename ConformancePackStatusReasonT = Aws::String>
    void SetConformancePackStatusReason(ConformancePackStatusReasonT&& value) { m_conformancePackStatusReasonHasBeenSet = true; m_conformancePackStatusReason = std::forward<ConformancePackStatusReasonT>(value); }
    template<typename ConformancePackStatusReasonT = Aws::String>
    ConformancePackStatusDetail& WithConformancePackStatusReason(ConformancePackStatusReasonT&& value) { SetConformancePackStatusReason(std::forward<ConformancePackStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateRequestedTime() const { return m_lastUpdateRequestedTime; }
    inline bool LastUpdateRequestedTimeHasBeenSet() const { return m_lastUpdateRequestedTimeHasBeenSet; }
    template<typename LastUpdateRequestedTimeT = Aws::Utils::DateTime>
    void SetLastUpdateRequestedTime(LastUpdateRequestedTimeT&& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = std::forward<LastUpdateRequestedTimeT>(value); }
    template<typename LastUpdateRequestedTimeT = Aws::Utils::DateTime>
    ConformancePackStatusDetail& WithLastUpdateRequestedTime(LastUpdateRequestedTimeT&& value) { SetLastUpdateRequestedTime(std::forward<LastUpdateRequestedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateCompletedTime() const { return m_lastUpdateCompletedTime; }
    inline bool LastUpdateCompletedTimeHasBeenSet() const { return m_lastUpdateCompletedTimeHasBeenSet; }
    template<typename LastUpdateCompletedTimeT = Aws::Utils::DateTime>
    void SetLastUpdateCompletedTime(LastUpdateCompletedTimeT&& value) { m_lastUpdateCompletedTimeHasBeenSet = true; m_lastUpdateCompletedTime = std::forward<LastUpdateCompletedTimeT>(value); }
    template<typename LastUpdateCompletedTimeT = Aws::Utils::DateTime>
    ConformancePackStatusDetail& WithLastUpdateCompletedTime(LastUpdateCompletedTimeT&& value) { SetLastUpdateCompletedTime(std::forward<LastUpdateCompletedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::String m_conformancePackId;
    bool m_conformancePackIdHasBeenSet = false;

    Aws::String m_conformancePackArn;
    bool m_conformancePackArnHasBeenSet = false;

    ConformancePackState m_conformancePackState{ConformancePackState::NOT_SET};
    bool m_conformancePackStateHasBeenSet = false;

    Aws::String m_stackArn;
    bool m_stackArnHasBeenSet = false;

    Aws::String m_conformancePackStatusReason;
    bool m_conformancePackStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateRequestedTime{};
    bool m_lastUpdateRequestedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateCompletedTime{};
    bool m_lastUpdateCompletedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
