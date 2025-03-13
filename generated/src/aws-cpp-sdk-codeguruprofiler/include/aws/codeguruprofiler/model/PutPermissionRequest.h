/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/codeguruprofiler/model/ActionGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the
   * <code>putPermissionRequest</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PutPermissionRequest">AWS
   * API Reference</a></p>
   */
  class PutPermissionRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API PutPermissionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPermission"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specifies an action group that contains permissions to add to a profiling
     * group resource. One action group is supported, <code>agentPermissions</code>,
     * which grants permission to perform actions required by the profiling agent,
     * <code>ConfigureAgent</code> and <code>PostAgentProfile</code> permissions. </p>
     */
    inline ActionGroup GetActionGroup() const { return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    inline void SetActionGroup(ActionGroup value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }
    inline PutPermissionRequest& WithActionGroup(ActionGroup value) { SetActionGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list ARNs for the roles and users you want to grant access to the
     * profiling group. Wildcards are not are supported in the ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const { return m_principals; }
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    void SetPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals = std::forward<PrincipalsT>(value); }
    template<typename PrincipalsT = Aws::Vector<Aws::String>>
    PutPermissionRequest& WithPrincipals(PrincipalsT&& value) { SetPrincipals(std::forward<PrincipalsT>(value)); return *this;}
    template<typename PrincipalsT = Aws::String>
    PutPermissionRequest& AddPrincipals(PrincipalsT&& value) { m_principalsHasBeenSet = true; m_principals.emplace_back(std::forward<PrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group to grant access to.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    PutPermissionRequest& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A universally unique identifier (UUID) for the revision of the policy you
     * are adding to the profiling group. Do not specify this when you add permissions
     * to a profiling group for the first time. If a policy already exists on the
     * profiling group, you must specify the <code>revisionId</code>. </p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    PutPermissionRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}
  private:

    ActionGroup m_actionGroup{ActionGroup::NOT_SET};
    bool m_actionGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
