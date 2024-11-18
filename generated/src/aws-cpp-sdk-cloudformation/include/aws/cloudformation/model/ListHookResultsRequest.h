/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/ListHookResultsTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_CLOUDFORMATION_API ListHookResultsRequest();

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
     * <p>The type of operation being targeted by the Hook.</p>
     */
    inline const ListHookResultsTargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const ListHookResultsTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(ListHookResultsTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline ListHookResultsRequest& WithTargetType(const ListHookResultsTargetType& value) { SetTargetType(value); return *this;}
    inline ListHookResultsRequest& WithTargetType(ListHookResultsTargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical ID of the target the operation is acting on by the Hook. If the
     * target is a change set, it's the ARN of the change set.</p> <p>If the target is
     * a Cloud Control API operation, this will be the <code>HookRequestToken</code>
     * returned by the Cloud Control API operation request. For more information on the
     * <code>HookRequestToken</code>, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/APIReference/API_ProgressEvent.html">ProgressEvent</a>.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }
    inline ListHookResultsRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}
    inline ListHookResultsRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}
    inline ListHookResultsRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies the next page of events that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListHookResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHookResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHookResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ListHookResultsTargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
