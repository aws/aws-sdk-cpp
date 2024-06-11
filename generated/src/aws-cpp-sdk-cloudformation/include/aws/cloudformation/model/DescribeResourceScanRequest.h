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
  class DescribeResourceScanRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeResourceScanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceScan"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource scan.</p>
     */
    inline const Aws::String& GetResourceScanId() const{ return m_resourceScanId; }
    inline bool ResourceScanIdHasBeenSet() const { return m_resourceScanIdHasBeenSet; }
    inline void SetResourceScanId(const Aws::String& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = value; }
    inline void SetResourceScanId(Aws::String&& value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId = std::move(value); }
    inline void SetResourceScanId(const char* value) { m_resourceScanIdHasBeenSet = true; m_resourceScanId.assign(value); }
    inline DescribeResourceScanRequest& WithResourceScanId(const Aws::String& value) { SetResourceScanId(value); return *this;}
    inline DescribeResourceScanRequest& WithResourceScanId(Aws::String&& value) { SetResourceScanId(std::move(value)); return *this;}
    inline DescribeResourceScanRequest& WithResourceScanId(const char* value) { SetResourceScanId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceScanId;
    bool m_resourceScanIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
