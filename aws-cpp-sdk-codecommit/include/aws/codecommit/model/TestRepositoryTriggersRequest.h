/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryTrigger.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a test repository triggers operation.</p>
   */
  class AWS_CODECOMMIT_API TestRepositoryTriggersRequest : public CodeCommitRequest
  {
  public:
    TestRepositoryTriggersRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline TestRepositoryTriggersRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline TestRepositoryTriggersRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository in which to test the triggers.</p>
     */
    inline TestRepositoryTriggersRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The list of triggers to test.</p>
     */
    inline const Aws::Vector<RepositoryTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>The list of triggers to test.</p>
     */
    inline void SetTriggers(const Aws::Vector<RepositoryTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>The list of triggers to test.</p>
     */
    inline void SetTriggers(Aws::Vector<RepositoryTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>The list of triggers to test.</p>
     */
    inline TestRepositoryTriggersRequest& WithTriggers(const Aws::Vector<RepositoryTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The list of triggers to test.</p>
     */
    inline TestRepositoryTriggersRequest& WithTriggers(Aws::Vector<RepositoryTrigger>&& value) { SetTriggers(value); return *this;}

    /**
     * <p>The list of triggers to test.</p>
     */
    inline TestRepositoryTriggersRequest& AddTriggers(const RepositoryTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>The list of triggers to test.</p>
     */
    inline TestRepositoryTriggersRequest& AddTriggers(RepositoryTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

  private:
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    Aws::Vector<RepositoryTrigger> m_triggers;
    bool m_triggersHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
