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
    AWS_CONFIGSERVICE_API ConformancePackStatusDetail();
    AWS_CONFIGSERVICE_API ConformancePackStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConformancePackStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline bool ConformancePackNameHasBeenSet() const { return m_conformancePackNameHasBeenSet; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = value; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::move(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName.assign(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>ID of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackId() const{ return m_conformancePackId; }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline bool ConformancePackIdHasBeenSet() const { return m_conformancePackIdHasBeenSet; }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline void SetConformancePackId(const Aws::String& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = value; }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline void SetConformancePackId(Aws::String&& value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId = std::move(value); }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline void SetConformancePackId(const char* value) { m_conformancePackIdHasBeenSet = true; m_conformancePackId.assign(value); }

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackId(const Aws::String& value) { SetConformancePackId(value); return *this;}

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackId(Aws::String&& value) { SetConformancePackId(std::move(value)); return *this;}

    /**
     * <p>ID of the conformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackId(const char* value) { SetConformancePackId(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const{ return m_conformancePackArn; }

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline bool ConformancePackArnHasBeenSet() const { return m_conformancePackArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline void SetConformancePackArn(const Aws::String& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline void SetConformancePackArn(Aws::String&& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline void SetConformancePackArn(const char* value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackArn(const Aws::String& value) { SetConformancePackArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackArn(Aws::String&& value) { SetConformancePackArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of comformance pack.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackArn(const char* value) { SetConformancePackArn(value); return *this;}


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
    inline const ConformancePackState& GetConformancePackState() const{ return m_conformancePackState; }

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
    inline bool ConformancePackStateHasBeenSet() const { return m_conformancePackStateHasBeenSet; }

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
    inline void SetConformancePackState(const ConformancePackState& value) { m_conformancePackStateHasBeenSet = true; m_conformancePackState = value; }

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
    inline void SetConformancePackState(ConformancePackState&& value) { m_conformancePackStateHasBeenSet = true; m_conformancePackState = std::move(value); }

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
    inline ConformancePackStatusDetail& WithConformancePackState(const ConformancePackState& value) { SetConformancePackState(value); return *this;}

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
    inline ConformancePackStatusDetail& WithConformancePackState(ConformancePackState&& value) { SetConformancePackState(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline const Aws::String& GetStackArn() const{ return m_stackArn; }

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline bool StackArnHasBeenSet() const { return m_stackArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline void SetStackArn(const Aws::String& value) { m_stackArnHasBeenSet = true; m_stackArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline void SetStackArn(Aws::String&& value) { m_stackArnHasBeenSet = true; m_stackArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline void SetStackArn(const char* value) { m_stackArnHasBeenSet = true; m_stackArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline ConformancePackStatusDetail& WithStackArn(const Aws::String& value) { SetStackArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline ConformancePackStatusDetail& WithStackArn(Aws::String&& value) { SetStackArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of CloudFormation stack. </p>
     */
    inline ConformancePackStatusDetail& WithStackArn(const char* value) { SetStackArn(value); return *this;}


    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline const Aws::String& GetConformancePackStatusReason() const{ return m_conformancePackStatusReason; }

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline bool ConformancePackStatusReasonHasBeenSet() const { return m_conformancePackStatusReasonHasBeenSet; }

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline void SetConformancePackStatusReason(const Aws::String& value) { m_conformancePackStatusReasonHasBeenSet = true; m_conformancePackStatusReason = value; }

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline void SetConformancePackStatusReason(Aws::String&& value) { m_conformancePackStatusReasonHasBeenSet = true; m_conformancePackStatusReason = std::move(value); }

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline void SetConformancePackStatusReason(const char* value) { m_conformancePackStatusReasonHasBeenSet = true; m_conformancePackStatusReason.assign(value); }

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackStatusReason(const Aws::String& value) { SetConformancePackStatusReason(value); return *this;}

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackStatusReason(Aws::String&& value) { SetConformancePackStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason of conformance pack creation failure.</p>
     */
    inline ConformancePackStatusDetail& WithConformancePackStatusReason(const char* value) { SetConformancePackStatusReason(value); return *this;}


    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateRequestedTime() const{ return m_lastUpdateRequestedTime; }

    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline bool LastUpdateRequestedTimeHasBeenSet() const { return m_lastUpdateRequestedTimeHasBeenSet; }

    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline void SetLastUpdateRequestedTime(const Aws::Utils::DateTime& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = value; }

    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline void SetLastUpdateRequestedTime(Aws::Utils::DateTime&& value) { m_lastUpdateRequestedTimeHasBeenSet = true; m_lastUpdateRequestedTime = std::move(value); }

    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline ConformancePackStatusDetail& WithLastUpdateRequestedTime(const Aws::Utils::DateTime& value) { SetLastUpdateRequestedTime(value); return *this;}

    /**
     * <p>Last time when conformation pack creation and update was requested.</p>
     */
    inline ConformancePackStatusDetail& WithLastUpdateRequestedTime(Aws::Utils::DateTime&& value) { SetLastUpdateRequestedTime(std::move(value)); return *this;}


    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateCompletedTime() const{ return m_lastUpdateCompletedTime; }

    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline bool LastUpdateCompletedTimeHasBeenSet() const { return m_lastUpdateCompletedTimeHasBeenSet; }

    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline void SetLastUpdateCompletedTime(const Aws::Utils::DateTime& value) { m_lastUpdateCompletedTimeHasBeenSet = true; m_lastUpdateCompletedTime = value; }

    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline void SetLastUpdateCompletedTime(Aws::Utils::DateTime&& value) { m_lastUpdateCompletedTimeHasBeenSet = true; m_lastUpdateCompletedTime = std::move(value); }

    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline ConformancePackStatusDetail& WithLastUpdateCompletedTime(const Aws::Utils::DateTime& value) { SetLastUpdateCompletedTime(value); return *this;}

    /**
     * <p>Last time when conformation pack creation and update was successful.</p>
     */
    inline ConformancePackStatusDetail& WithLastUpdateCompletedTime(Aws::Utils::DateTime&& value) { SetLastUpdateCompletedTime(std::move(value)); return *this;}

  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::String m_conformancePackId;
    bool m_conformancePackIdHasBeenSet = false;

    Aws::String m_conformancePackArn;
    bool m_conformancePackArnHasBeenSet = false;

    ConformancePackState m_conformancePackState;
    bool m_conformancePackStateHasBeenSet = false;

    Aws::String m_stackArn;
    bool m_stackArnHasBeenSet = false;

    Aws::String m_conformancePackStatusReason;
    bool m_conformancePackStatusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateRequestedTime;
    bool m_lastUpdateRequestedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateCompletedTime;
    bool m_lastUpdateCompletedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
