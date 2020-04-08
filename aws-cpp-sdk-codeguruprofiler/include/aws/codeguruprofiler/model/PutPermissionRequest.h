/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The structure representing the putPermissionRequest.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/PutPermissionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUPROFILER_API PutPermissionRequest : public CodeGuruProfilerRequest
  {
  public:
    PutPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPermission"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of actions that the users and roles can perform on the profiling
     * group.</p>
     */
    inline const ActionGroup& GetActionGroup() const{ return m_actionGroup; }

    /**
     * <p>The list of actions that the users and roles can perform on the profiling
     * group.</p>
     */
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }

    /**
     * <p>The list of actions that the users and roles can perform on the profiling
     * group.</p>
     */
    inline void SetActionGroup(const ActionGroup& value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }

    /**
     * <p>The list of actions that the users and roles can perform on the profiling
     * group.</p>
     */
    inline void SetActionGroup(ActionGroup&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::move(value); }

    /**
     * <p>The list of actions that the users and roles can perform on the profiling
     * group.</p>
     */
    inline PutPermissionRequest& WithActionGroup(const ActionGroup& value) { SetActionGroup(value); return *this;}

    /**
     * <p>The list of actions that the users and roles can perform on the profiling
     * group.</p>
     */
    inline PutPermissionRequest& WithActionGroup(ActionGroup&& value) { SetActionGroup(std::move(value)); return *this;}


    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline PutPermissionRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline PutPermissionRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline PutPermissionRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline PutPermissionRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of role and user ARNs or the accountId that needs access (wildcards
     * are not allowed).</p>
     */
    inline PutPermissionRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


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
    inline PutPermissionRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline PutPermissionRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline PutPermissionRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline PutPermissionRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline PutPermissionRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the current revision of the policy. This is required,
     * if a policy exists for the profiling group. This is not required when creating
     * the policy for the first time.</p>
     */
    inline PutPermissionRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}

  private:

    ActionGroup m_actionGroup;
    bool m_actionGroupHasBeenSet;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
