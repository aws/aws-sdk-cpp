/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/BatchRestrictions.h>
#include <aws/codebuild/model/BatchReportModeType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains configuration information about a batch build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectBuildBatchConfig">AWS
   * API Reference</a></p>
   */
  class ProjectBuildBatchConfig
  {
  public:
    AWS_CODEBUILD_API ProjectBuildBatchConfig() = default;
    AWS_CODEBUILD_API ProjectBuildBatchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectBuildBatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    ProjectBuildBatchConfig& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the build artifacts for the batch build should be combined into
     * a single artifact location.</p>
     */
    inline bool GetCombineArtifacts() const { return m_combineArtifacts; }
    inline bool CombineArtifactsHasBeenSet() const { return m_combineArtifactsHasBeenSet; }
    inline void SetCombineArtifacts(bool value) { m_combineArtifactsHasBeenSet = true; m_combineArtifacts = value; }
    inline ProjectBuildBatchConfig& WithCombineArtifacts(bool value) { SetCombineArtifacts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline const BatchRestrictions& GetRestrictions() const { return m_restrictions; }
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }
    template<typename RestrictionsT = BatchRestrictions>
    void SetRestrictions(RestrictionsT&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::forward<RestrictionsT>(value); }
    template<typename RestrictionsT = BatchRestrictions>
    ProjectBuildBatchConfig& WithRestrictions(RestrictionsT&& value) { SetRestrictions(std::forward<RestrictionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum amount of time, in minutes, that the batch build must
     * be completed in.</p>
     */
    inline int GetTimeoutInMins() const { return m_timeoutInMins; }
    inline bool TimeoutInMinsHasBeenSet() const { return m_timeoutInMinsHasBeenSet; }
    inline void SetTimeoutInMins(int value) { m_timeoutInMinsHasBeenSet = true; m_timeoutInMins = value; }
    inline ProjectBuildBatchConfig& WithTimeoutInMins(int value) { SetTimeoutInMins(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how build status reports are sent to the source provider for the
     * batch build. This property is only used when the source provider for your
     * project is Bitbucket, GitHub, or GitHub Enterprise, and your project is
     * configured to report build statuses to the source provider.</p> <dl>
     * <dt>REPORT_AGGREGATED_BATCH</dt> <dd> <p>(Default) Aggregate all of the build
     * statuses into a single status report.</p> </dd>
     * <dt>REPORT_INDIVIDUAL_BUILDS</dt> <dd> <p>Send a separate status report for each
     * individual build.</p> </dd> </dl>
     */
    inline BatchReportModeType GetBatchReportMode() const { return m_batchReportMode; }
    inline bool BatchReportModeHasBeenSet() const { return m_batchReportModeHasBeenSet; }
    inline void SetBatchReportMode(BatchReportModeType value) { m_batchReportModeHasBeenSet = true; m_batchReportMode = value; }
    inline ProjectBuildBatchConfig& WithBatchReportMode(BatchReportModeType value) { SetBatchReportMode(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    bool m_combineArtifacts{false};
    bool m_combineArtifactsHasBeenSet = false;

    BatchRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    int m_timeoutInMins{0};
    bool m_timeoutInMinsHasBeenSet = false;

    BatchReportModeType m_batchReportMode{BatchReportModeType::NOT_SET};
    bool m_batchReportModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
