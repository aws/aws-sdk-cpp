/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class DeleteWorkGroupRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API DeleteWorkGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkGroup"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    DeleteWorkGroupRequest& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to delete the workgroup and its contents even if the workgroup
     * contains any named queries, query executions, or notebooks.</p>
     */
    inline bool GetRecursiveDeleteOption() const { return m_recursiveDeleteOption; }
    inline bool RecursiveDeleteOptionHasBeenSet() const { return m_recursiveDeleteOptionHasBeenSet; }
    inline void SetRecursiveDeleteOption(bool value) { m_recursiveDeleteOptionHasBeenSet = true; m_recursiveDeleteOption = value; }
    inline DeleteWorkGroupRequest& WithRecursiveDeleteOption(bool value) { SetRecursiveDeleteOption(value); return *this;}
    ///@}
  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    bool m_recursiveDeleteOption{false};
    bool m_recursiveDeleteOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
