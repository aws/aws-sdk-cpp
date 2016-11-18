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

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of an update repository description operation.</p>
   */
  class AWS_CODECOMMIT_API UpdateRepositoryNameRequest : public CodeCommitRequest
  {
  public:
    UpdateRepositoryNameRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The existing name of the repository.</p>
     */
    inline const Aws::String& GetOldName() const{ return m_oldName; }

    /**
     * <p>The existing name of the repository.</p>
     */
    inline void SetOldName(const Aws::String& value) { m_oldNameHasBeenSet = true; m_oldName = value; }

    /**
     * <p>The existing name of the repository.</p>
     */
    inline void SetOldName(Aws::String&& value) { m_oldNameHasBeenSet = true; m_oldName = value; }

    /**
     * <p>The existing name of the repository.</p>
     */
    inline void SetOldName(const char* value) { m_oldNameHasBeenSet = true; m_oldName.assign(value); }

    /**
     * <p>The existing name of the repository.</p>
     */
    inline UpdateRepositoryNameRequest& WithOldName(const Aws::String& value) { SetOldName(value); return *this;}

    /**
     * <p>The existing name of the repository.</p>
     */
    inline UpdateRepositoryNameRequest& WithOldName(Aws::String&& value) { SetOldName(value); return *this;}

    /**
     * <p>The existing name of the repository.</p>
     */
    inline UpdateRepositoryNameRequest& WithOldName(const char* value) { SetOldName(value); return *this;}

    /**
     * <p>The new name for the repository.</p>
     */
    inline const Aws::String& GetNewName() const{ return m_newName; }

    /**
     * <p>The new name for the repository.</p>
     */
    inline void SetNewName(const Aws::String& value) { m_newNameHasBeenSet = true; m_newName = value; }

    /**
     * <p>The new name for the repository.</p>
     */
    inline void SetNewName(Aws::String&& value) { m_newNameHasBeenSet = true; m_newName = value; }

    /**
     * <p>The new name for the repository.</p>
     */
    inline void SetNewName(const char* value) { m_newNameHasBeenSet = true; m_newName.assign(value); }

    /**
     * <p>The new name for the repository.</p>
     */
    inline UpdateRepositoryNameRequest& WithNewName(const Aws::String& value) { SetNewName(value); return *this;}

    /**
     * <p>The new name for the repository.</p>
     */
    inline UpdateRepositoryNameRequest& WithNewName(Aws::String&& value) { SetNewName(value); return *this;}

    /**
     * <p>The new name for the repository.</p>
     */
    inline UpdateRepositoryNameRequest& WithNewName(const char* value) { SetNewName(value); return *this;}

  private:
    Aws::String m_oldName;
    bool m_oldNameHasBeenSet;
    Aws::String m_newName;
    bool m_newNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
