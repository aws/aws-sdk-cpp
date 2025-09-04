/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/ListHookResultsTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/HookStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListHookResultsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListHookResultsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHookResults"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Filters results by target type. Currently, only <code>CHANGE_SET</code> and
     * <code>CLOUD_CONTROL</code> are supported filter options.</p> <p>Required when
     * <code>TargetId</code> is specified and cannot be used otherwise.</p>
     */
    inline ListHookResultsTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(ListHookResultsTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline ListHookResultsRequest& WithTargetType(ListHookResultsTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results by the unique identifier of the target the Hook was invoked
     * against.</p> <p>For change sets, this is the change set ARN. When the target is
     * a Cloud Control API operation, this value must be the
     * <code>HookRequestToken</code> returned by the Cloud Control API request. For
     * more information on the <code>HookRequestToken</code>, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_ProgressEvent.html">ProgressEvent</a>.</p>
     * <p>Required when <code>TargetType</code> is specified and cannot be used
     * otherwise.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    ListHookResultsRequest& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results by the ARN of the Hook. Can be used alone or in combination
     * with <code>Status</code>.</p>
     */
    inline const Aws::String& GetTypeArn() const { return m_typeArn; }
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }
    template<typename TypeArnT = Aws::String>
    void SetTypeArn(TypeArnT&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::forward<TypeArnT>(value); }
    template<typename TypeArnT = Aws::String>
    ListHookResultsRequest& WithTypeArn(TypeArnT&& value) { SetTypeArn(std::forward<TypeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters results by the status of Hook invocations. Can only be used in
     * combination with <code>TypeArn</code>. Valid values are:</p> <ul> <li> <p>
     * <code>HOOK_IN_PROGRESS</code>: The Hook is currently running.</p> </li> <li> <p>
     * <code>HOOK_COMPLETE_SUCCEEDED</code>: The Hook completed successfully.</p> </li>
     * <li> <p> <code>HOOK_COMPLETE_FAILED</code>: The Hook completed but failed
     * validation.</p> </li> <li> <p> <code>HOOK_FAILED</code>: The Hook encountered an
     * error during execution.</p> </li> </ul>
     */
    inline HookStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(HookStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListHookResultsRequest& WithStatus(HookStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies the next page of events that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHookResultsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    ListHookResultsTargetType m_targetType{ListHookResultsTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    HookStatus m_status{HookStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
