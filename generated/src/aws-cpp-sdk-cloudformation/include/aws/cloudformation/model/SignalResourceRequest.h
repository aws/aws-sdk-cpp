/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResourceSignalStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>SignalResource</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/SignalResourceInput">AWS
   * API Reference</a></p>
   */
  class SignalResourceRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API SignalResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignalResource"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The stack name or unique stack ID that includes the resource that you want to
     * signal.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    SignalResourceRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical ID of the resource that you want to signal. The logical ID is the
     * name of the resource that given in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    SignalResourceRequest& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID of the signal. When you signal Amazon EC2 instances or Auto
     * Scaling groups, specify the instance ID that you are signaling as the unique ID.
     * If you send multiple signals to a single resource (such as signaling a wait
     * condition), each signal requires a different unique ID.</p>
     */
    inline const Aws::String& GetUniqueId() const { return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    template<typename UniqueIdT = Aws::String>
    void SetUniqueId(UniqueIdT&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::forward<UniqueIdT>(value); }
    template<typename UniqueIdT = Aws::String>
    SignalResourceRequest& WithUniqueId(UniqueIdT&& value) { SetUniqueId(std::forward<UniqueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the signal, which is either success or failure. A failure
     * signal causes CloudFormation to immediately fail the stack creation or
     * update.</p>
     */
    inline ResourceSignalStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceSignalStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SignalResourceRequest& WithStatus(ResourceSignalStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;

    ResourceSignalStatus m_status{ResourceSignalStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
