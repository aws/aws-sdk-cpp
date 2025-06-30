/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class GetServiceLinkedRoleDeletionStatusRequest : public IAMRequest
  {
  public:
    AWS_IAM_API GetServiceLinkedRoleDeletionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceLinkedRoleDeletionStatus"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The deletion task identifier. This identifier is returned by the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_DeleteServiceLinkedRole.html">DeleteServiceLinkedRole</a>
     * operation in the format
     * <code>task/aws-service-role/&lt;service-principal-name&gt;/&lt;role-name&gt;/&lt;task-uuid&gt;</code>.</p>
     */
    inline const Aws::String& GetDeletionTaskId() const { return m_deletionTaskId; }
    inline bool DeletionTaskIdHasBeenSet() const { return m_deletionTaskIdHasBeenSet; }
    template<typename DeletionTaskIdT = Aws::String>
    void SetDeletionTaskId(DeletionTaskIdT&& value) { m_deletionTaskIdHasBeenSet = true; m_deletionTaskId = std::forward<DeletionTaskIdT>(value); }
    template<typename DeletionTaskIdT = Aws::String>
    GetServiceLinkedRoleDeletionStatusRequest& WithDeletionTaskId(DeletionTaskIdT&& value) { SetDeletionTaskId(std::forward<DeletionTaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deletionTaskId;
    bool m_deletionTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
