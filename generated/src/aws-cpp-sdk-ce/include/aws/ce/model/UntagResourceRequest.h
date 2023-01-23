/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource. For a list of supported
     * resources, see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_ResourceTag.html">ResourceTag</a>.
     * </p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTagKeys() const{ return m_resourceTagKeys; }

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline bool ResourceTagKeysHasBeenSet() const { return m_resourceTagKeysHasBeenSet; }

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline void SetResourceTagKeys(const Aws::Vector<Aws::String>& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys = value; }

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline void SetResourceTagKeys(Aws::Vector<Aws::String>&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys = std::move(value); }

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline UntagResourceRequest& WithResourceTagKeys(const Aws::Vector<Aws::String>& value) { SetResourceTagKeys(value); return *this;}

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline UntagResourceRequest& WithResourceTagKeys(Aws::Vector<Aws::String>&& value) { SetResourceTagKeys(std::move(value)); return *this;}

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline UntagResourceRequest& AddResourceTagKeys(const Aws::String& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.push_back(value); return *this; }

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline UntagResourceRequest& AddResourceTagKeys(Aws::String&& value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of tag keys associated with tags that need to be removed from the
     * resource. If you specify a tag key that doesn't exist, it's ignored. Although
     * the maximum number of array members is 200, user-tag maximum is 50. The
     * remaining are reserved for Amazon Web Services use. </p>
     */
    inline UntagResourceRequest& AddResourceTagKeys(const char* value) { m_resourceTagKeysHasBeenSet = true; m_resourceTagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTagKeys;
    bool m_resourceTagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
