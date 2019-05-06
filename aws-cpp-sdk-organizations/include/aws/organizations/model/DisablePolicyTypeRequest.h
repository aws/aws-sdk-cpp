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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/PolicyType.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API DisablePolicyTypeRequest : public OrganizationsRequest
  {
  public:
    DisablePolicyTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisablePolicyType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline const Aws::String& GetRootId() const{ return m_rootId; }

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline void SetRootId(const Aws::String& value) { m_rootIdHasBeenSet = true; m_rootId = value; }

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline void SetRootId(Aws::String&& value) { m_rootIdHasBeenSet = true; m_rootId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline void SetRootId(const char* value) { m_rootIdHasBeenSet = true; m_rootId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline DisablePolicyTypeRequest& WithRootId(const Aws::String& value) { SetRootId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline DisablePolicyTypeRequest& WithRootId(Aws::String&& value) { SetRootId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the root in which you want to disable a policy
     * type. You can get the ID from the <a>ListRoots</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a root ID string
     * requires "r-" followed by from 4 to 32 lower-case letters or digits.</p>
     */
    inline DisablePolicyTypeRequest& WithRootId(const char* value) { SetRootId(value); return *this;}


    /**
     * <p>The policy type that you want to disable in this root.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The policy type that you want to disable in this root.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The policy type that you want to disable in this root.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The policy type that you want to disable in this root.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The policy type that you want to disable in this root.</p>
     */
    inline DisablePolicyTypeRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The policy type that you want to disable in this root.</p>
     */
    inline DisablePolicyTypeRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}

  private:

    Aws::String m_rootId;
    bool m_rootIdHasBeenSet;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
