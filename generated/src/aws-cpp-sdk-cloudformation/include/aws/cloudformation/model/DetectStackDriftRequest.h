/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class DetectStackDriftRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DetectStackDriftRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectStackDrift"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    DetectStackDriftRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogicalResourceIds() const { return m_logicalResourceIds; }
    inline bool LogicalResourceIdsHasBeenSet() const { return m_logicalResourceIdsHasBeenSet; }
    template<typename LogicalResourceIdsT = Aws::Vector<Aws::String>>
    void SetLogicalResourceIds(LogicalResourceIdsT&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds = std::forward<LogicalResourceIdsT>(value); }
    template<typename LogicalResourceIdsT = Aws::Vector<Aws::String>>
    DetectStackDriftRequest& WithLogicalResourceIds(LogicalResourceIdsT&& value) { SetLogicalResourceIds(std::forward<LogicalResourceIdsT>(value)); return *this;}
    template<typename LogicalResourceIdsT = Aws::String>
    DetectStackDriftRequest& AddLogicalResourceIds(LogicalResourceIdsT&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.emplace_back(std::forward<LogicalResourceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_logicalResourceIds;
    bool m_logicalResourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
