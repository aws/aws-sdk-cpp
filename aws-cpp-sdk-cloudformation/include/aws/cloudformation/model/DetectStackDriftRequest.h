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
    AWS_CLOUDFORMATION_API DetectStackDriftRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectStackDrift"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline DetectStackDriftRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline DetectStackDriftRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack for which you want to detect drift.</p>
     */
    inline DetectStackDriftRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogicalResourceIds() const{ return m_logicalResourceIds; }

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline bool LogicalResourceIdsHasBeenSet() const { return m_logicalResourceIdsHasBeenSet; }

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline void SetLogicalResourceIds(const Aws::Vector<Aws::String>& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds = value; }

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline void SetLogicalResourceIds(Aws::Vector<Aws::String>&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds = std::move(value); }

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline DetectStackDriftRequest& WithLogicalResourceIds(const Aws::Vector<Aws::String>& value) { SetLogicalResourceIds(value); return *this;}

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline DetectStackDriftRequest& WithLogicalResourceIds(Aws::Vector<Aws::String>&& value) { SetLogicalResourceIds(std::move(value)); return *this;}

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline DetectStackDriftRequest& AddLogicalResourceIds(const Aws::String& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.push_back(value); return *this; }

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline DetectStackDriftRequest& AddLogicalResourceIds(Aws::String&& value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The logical names of any resources you want to use as filters.</p>
     */
    inline DetectStackDriftRequest& AddLogicalResourceIds(const char* value) { m_logicalResourceIdsHasBeenSet = true; m_logicalResourceIds.push_back(value); return *this; }

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_logicalResourceIds;
    bool m_logicalResourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
