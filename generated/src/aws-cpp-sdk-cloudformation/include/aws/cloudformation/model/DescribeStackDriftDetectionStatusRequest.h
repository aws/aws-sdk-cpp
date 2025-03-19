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
  class DescribeStackDriftDetectionStatusRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackDriftDetectionStatus"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the drift detection results of this operation.</p>
     * <p>CloudFormation generates new results, with a new drift detection ID, each
     * time this operation is run. However, the number of drift results CloudFormation
     * retains for any given stack, and for how long, may vary.</p>
     */
    inline const Aws::String& GetStackDriftDetectionId() const { return m_stackDriftDetectionId; }
    inline bool StackDriftDetectionIdHasBeenSet() const { return m_stackDriftDetectionIdHasBeenSet; }
    template<typename StackDriftDetectionIdT = Aws::String>
    void SetStackDriftDetectionId(StackDriftDetectionIdT&& value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId = std::forward<StackDriftDetectionIdT>(value); }
    template<typename StackDriftDetectionIdT = Aws::String>
    DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(StackDriftDetectionIdT&& value) { SetStackDriftDetectionId(std::forward<StackDriftDetectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackDriftDetectionId;
    bool m_stackDriftDetectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
