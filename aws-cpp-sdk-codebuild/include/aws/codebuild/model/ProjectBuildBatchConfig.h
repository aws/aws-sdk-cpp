/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/BatchRestrictions.h>
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
  class AWS_CODEBUILD_API ProjectBuildBatchConfig
  {
  public:
    ProjectBuildBatchConfig();
    ProjectBuildBatchConfig(Aws::Utils::Json::JsonView jsonValue);
    ProjectBuildBatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    bool m_combineArtifacts;
    bool m_combineArtifactsHasBeenSet;

    BatchRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet;

    int m_timeoutInMins;
    bool m_timeoutInMinsHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
