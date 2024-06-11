/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of an update repository description
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryNameInput">AWS
   * API Reference</a></p>
   */
  class UpdateRepositoryNameRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateRepositoryNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRepositoryName"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The current name of the repository.</p>
     */
    inline const Aws::String& GetOldName() const{ return m_oldName; }
    inline bool OldNameHasBeenSet() const { return m_oldNameHasBeenSet; }
    inline void SetOldName(const Aws::String& value) { m_oldNameHasBeenSet = true; m_oldName = value; }
    inline void SetOldName(Aws::String&& value) { m_oldNameHasBeenSet = true; m_oldName = std::move(value); }
    inline void SetOldName(const char* value) { m_oldNameHasBeenSet = true; m_oldName.assign(value); }
    inline UpdateRepositoryNameRequest& WithOldName(const Aws::String& value) { SetOldName(value); return *this;}
    inline UpdateRepositoryNameRequest& WithOldName(Aws::String&& value) { SetOldName(std::move(value)); return *this;}
    inline UpdateRepositoryNameRequest& WithOldName(const char* value) { SetOldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the repository.</p>
     */
    inline const Aws::String& GetNewName() const{ return m_newName; }
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }
    inline void SetNewName(const Aws::String& value) { m_newNameHasBeenSet = true; m_newName = value; }
    inline void SetNewName(Aws::String&& value) { m_newNameHasBeenSet = true; m_newName = std::move(value); }
    inline void SetNewName(const char* value) { m_newNameHasBeenSet = true; m_newName.assign(value); }
    inline UpdateRepositoryNameRequest& WithNewName(const Aws::String& value) { SetNewName(value); return *this;}
    inline UpdateRepositoryNameRequest& WithNewName(Aws::String&& value) { SetNewName(std::move(value)); return *this;}
    inline UpdateRepositoryNameRequest& WithNewName(const char* value) { SetNewName(value); return *this;}
    ///@}
  private:

    Aws::String m_oldName;
    bool m_oldNameHasBeenSet = false;

    Aws::String m_newName;
    bool m_newNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
