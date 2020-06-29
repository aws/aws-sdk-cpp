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
  class AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusRequest : public CloudFormationRequest
  {
  public:
    DescribeStackDriftDetectionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackDriftDetectionStatus"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline const Aws::String& GetStackDriftDetectionId() const{ return m_stackDriftDetectionId; }

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline bool StackDriftDetectionIdHasBeenSet() const { return m_stackDriftDetectionIdHasBeenSet; }

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline void SetStackDriftDetectionId(const Aws::String& value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId = value; }

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline void SetStackDriftDetectionId(Aws::String&& value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId = std::move(value); }

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline void SetStackDriftDetectionId(const char* value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId.assign(value); }

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(const Aws::String& value) { SetStackDriftDetectionId(value); return *this;}

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(Aws::String&& value) { SetStackDriftDetectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the drift detection results of this operation. </p> <p>AWS
     * CloudFormation generates new results, with a new drift detection ID, each time
     * this operation is run. However, the number of drift results AWS CloudFormation
     * retains for any given stack, and for how long, may vary. </p>
     */
    inline DescribeStackDriftDetectionStatusRequest& WithStackDriftDetectionId(const char* value) { SetStackDriftDetectionId(value); return *this;}

  private:

    Aws::String m_stackDriftDetectionId;
    bool m_stackDriftDetectionIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
