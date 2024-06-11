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
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusRequest();

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
    inline const Aws::String& GetStackDriftDetectionId() const{ return m_stackDriftDetectionId; }
    inline bool StackDriftDetectionIdHasBeenSet() const { return m_stackDriftDetectionIdHasBeenSet; }
    inline void SetStackDriftDetectionId(const Aws::String& value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId = value; }
    inline void SetStackDriftDetectionId(Aws::String&& value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId = std::move(value); }
    inline void SetStackDriftDetectionId(const char* value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId.assign(value); }
    inline DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(const Aws::String& value) { SetStackDriftDetectionId(value); return *this;}
    inline DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(Aws::String&& value) { SetStackDriftDetectionId(std::move(value)); return *this;}
    inline DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(const char* value) { SetStackDriftDetectionId(value); return *this;}
    ///@}
  private:

    Aws::String m_stackDriftDetectionId;
    bool m_stackDriftDetectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
