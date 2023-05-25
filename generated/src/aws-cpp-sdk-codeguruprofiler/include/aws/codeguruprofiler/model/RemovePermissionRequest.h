/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/codeguruprofiler/model/ActionGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> <pre><code> The structure representing the
   * &lt;code&gt;removePermissionRequest&lt;/code&gt;.&lt;/p&gt;
   * </code></pre><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/RemovePermissionRequest">AWS
   * API Reference</a></p>
   */
  class RemovePermissionRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API RemovePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemovePermission"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Specifies an action group that contains the permissions to remove from a
     * profiling group's resource-based policy. One action group is supported,
     * <code>agentPermissions</code>, which grants <code>ConfigureAgent</code> and
     * <code>PostAgentProfile</code> permissions. </p>
     */
    inline const ActionGroup& GetActionGroup() const{ return m_actionGroup; }

    /**
     * <p> Specifies an action group that contains the permissions to remove from a
     * profiling group's resource-based policy. One action group is supported,
     * <code>agentPermissions</code>, which grants <code>ConfigureAgent</code> and
     * <code>PostAgentProfile</code> permissions. </p>
     */
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }

    /**
     * <p> Specifies an action group that contains the permissions to remove from a
     * profiling group's resource-based policy. One action group is supported,
     * <code>agentPermissions</code>, which grants <code>ConfigureAgent</code> and
     * <code>PostAgentProfile</code> permissions. </p>
     */
    inline void SetActionGroup(const ActionGroup& value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }

    /**
     * <p> Specifies an action group that contains the permissions to remove from a
     * profiling group's resource-based policy. One action group is supported,
     * <code>agentPermissions</code>, which grants <code>ConfigureAgent</code> and
     * <code>PostAgentProfile</code> permissions. </p>
     */
    inline void SetActionGroup(ActionGroup&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::move(value); }

    /**
     * <p> Specifies an action group that contains the permissions to remove from a
     * profiling group's resource-based policy. One action group is supported,
     * <code>agentPermissions</code>, which grants <code>ConfigureAgent</code> and
     * <code>PostAgentProfile</code> permissions. </p>
     */
    inline RemovePermissionRequest& WithActionGroup(const ActionGroup& value) { SetActionGroup(value); return *this;}

    /**
     * <p> Specifies an action group that contains the permissions to remove from a
     * profiling group's resource-based policy. One action group is supported,
     * <code>agentPermissions</code>, which grants <code>ConfigureAgent</code> and
     * <code>PostAgentProfile</code> permissions. </p>
     */
    inline RemovePermissionRequest& WithActionGroup(ActionGroup&& value) { SetActionGroup(std::move(value)); return *this;}


    /**
     * <p>The name of the profiling group.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline RemovePermissionRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline RemovePermissionRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline RemovePermissionRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline RemovePermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline RemovePermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p> A universally unique identifier (UUID) for the revision of the
     * resource-based policy from which you want to remove permissions. </p>
     */
    inline RemovePermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    ActionGroup m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
