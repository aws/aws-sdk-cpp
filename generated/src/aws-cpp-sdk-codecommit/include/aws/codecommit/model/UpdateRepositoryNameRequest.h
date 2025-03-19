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
    AWS_CODECOMMIT_API UpdateRepositoryNameRequest() = default;

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
    inline const Aws::String& GetOldName() const { return m_oldName; }
    inline bool OldNameHasBeenSet() const { return m_oldNameHasBeenSet; }
    template<typename OldNameT = Aws::String>
    void SetOldName(OldNameT&& value) { m_oldNameHasBeenSet = true; m_oldName = std::forward<OldNameT>(value); }
    template<typename OldNameT = Aws::String>
    UpdateRepositoryNameRequest& WithOldName(OldNameT&& value) { SetOldName(std::forward<OldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the repository.</p>
     */
    inline const Aws::String& GetNewName() const { return m_newName; }
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }
    template<typename NewNameT = Aws::String>
    void SetNewName(NewNameT&& value) { m_newNameHasBeenSet = true; m_newName = std::forward<NewNameT>(value); }
    template<typename NewNameT = Aws::String>
    UpdateRepositoryNameRequest& WithNewName(NewNameT&& value) { SetNewName(std::forward<NewNameT>(value)); return *this;}
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
