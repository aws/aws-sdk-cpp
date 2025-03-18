/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
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
  class ExecuteStackRefactorRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ExecuteStackRefactorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteStackRefactor"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID associated with the stack refactor created from the
     * <a>CreateStackRefactor</a> action.</p>
     */
    inline const Aws::String& GetStackRefactorId() const { return m_stackRefactorId; }
    inline bool StackRefactorIdHasBeenSet() const { return m_stackRefactorIdHasBeenSet; }
    template<typename StackRefactorIdT = Aws::String>
    void SetStackRefactorId(StackRefactorIdT&& value) { m_stackRefactorIdHasBeenSet = true; m_stackRefactorId = std::forward<StackRefactorIdT>(value); }
    template<typename StackRefactorIdT = Aws::String>
    ExecuteStackRefactorRequest& WithStackRefactorId(StackRefactorIdT&& value) { SetStackRefactorId(std::forward<StackRefactorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackRefactorId;
    bool m_stackRefactorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
