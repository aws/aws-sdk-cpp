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
    AWS_CODEBUILD_API ProjectBuildBatchConfig();
    AWS_CODEBUILD_API ProjectBuildBatchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectBuildBatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline ProjectBuildBatchConfig& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline ProjectBuildBatchConfig& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the service role ARN for the batch build project.</p>
     */
    inline ProjectBuildBatchConfig& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>Specifies if the build artifacts for the batch build should be combined into
     * a single artifact location.</p>
     */
    inline bool GetCombineArtifacts() const{ return m_combineArtifacts; }

    /**
     * <p>Specifies if the build artifacts for the batch build should be combined into
     * a single artifact location.</p>
     */
    inline bool CombineArtifactsHasBeenSet() const { return m_combineArtifactsHasBeenSet; }

    /**
     * <p>Specifies if the build artifacts for the batch build should be combined into
     * a single artifact location.</p>
     */
    inline void SetCombineArtifacts(bool value) { m_combineArtifactsHasBeenSet = true; m_combineArtifacts = value; }

    /**
     * <p>Specifies if the build artifacts for the batch build should be combined into
     * a single artifact location.</p>
     */
    inline ProjectBuildBatchConfig& WithCombineArtifacts(bool value) { SetCombineArtifacts(value); return *this;}


    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline const BatchRestrictions& GetRestrictions() const{ return m_restrictions; }

    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }

    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline void SetRestrictions(const BatchRestrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline void SetRestrictions(BatchRestrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }

    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline ProjectBuildBatchConfig& WithRestrictions(const BatchRestrictions& value) { SetRestrictions(value); return *this;}

    /**
     * <p>A <code>BatchRestrictions</code> object that specifies the restrictions for
     * the batch build.</p>
     */
    inline ProjectBuildBatchConfig& WithRestrictions(BatchRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}


    /**
     * <p>Specifies the maximum amount of time, in minutes, that the batch build must
     * be completed in.</p>
     */
    inline int GetTimeoutInMins() const{ return m_timeoutInMins; }

    /**
     * <p>Specifies the maximum amount of time, in minutes, that the batch build must
     * be completed in.</p>
     */
    inline bool TimeoutInMinsHasBeenSet() const { return m_timeoutInMinsHasBeenSet; }

    /**
     * <p>Specifies the maximum amount of time, in minutes, that the batch build must
     * be completed in.</p>
     */
    inline void SetTimeoutInMins(int value) { m_timeoutInMinsHasBeenSet = true; m_timeoutInMins = value; }

    /**
     * <p>Specifies the maximum amount of time, in minutes, that the batch build must
     * be completed in.</p>
     */
    inline ProjectBuildBatchConfig& WithTimeoutInMins(int value) { SetTimeoutInMins(value); return *this;}


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
    inline const BatchReportModeType& GetBatchReportMode() const{ return m_batchReportMode; }

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
    inline bool BatchReportModeHasBeenSet() const { return m_batchReportModeHasBeenSet; }

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
    inline void SetBatchReportMode(const BatchReportModeType& value) { m_batchReportModeHasBeenSet = true; m_batchReportMode = value; }

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
    inline void SetBatchReportMode(BatchReportModeType&& value) { m_batchReportModeHasBeenSet = true; m_batchReportMode = std::move(value); }

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
    inline ProjectBuildBatchConfig& WithBatchReportMode(const BatchReportModeType& value) { SetBatchReportMode(value); return *this;}

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
    inline ProjectBuildBatchConfig& WithBatchReportMode(BatchReportModeType&& value) { SetBatchReportMode(std::move(value)); return *this;}

  private:

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    bool m_combineArtifacts;
    bool m_combineArtifactsHasBeenSet = false;

    BatchRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;

    int m_timeoutInMins;
    bool m_timeoutInMinsHasBeenSet = false;

    BatchReportModeType m_batchReportMode;
    bool m_batchReportModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
