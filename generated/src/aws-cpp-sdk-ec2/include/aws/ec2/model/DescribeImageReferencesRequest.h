/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResourceTypeRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeImageReferencesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeImageReferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageReferences"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the images to check for resource references.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageIds() const { return m_imageIds; }
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }
    template<typename ImageIdsT = Aws::Vector<Aws::String>>
    void SetImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::forward<ImageIdsT>(value); }
    template<typename ImageIdsT = Aws::Vector<Aws::String>>
    DescribeImageReferencesRequest& WithImageIds(ImageIdsT&& value) { SetImageIds(std::forward<ImageIdsT>(value)); return *this;}
    template<typename ImageIdsT = Aws::String>
    DescribeImageReferencesRequest& AddImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds.emplace_back(std::forward<ImageIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to check all supported Amazon Web Services resource types
     * for image references. When specified, default values are applied for
     * <code>ResourceTypeOptions</code>. For the default values, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-ami-references.html#how-ami-references-works">How
     * AMI reference checks work</a> in the <i>Amazon EC2 User Guide</i>. If you also
     * specify <code>ResourceTypes</code> with <code>ResourceTypeOptions</code>, your
     * specified values override the default values.</p> <p>Supported resource types:
     * <code>ec2:Instance</code> | <code>ec2:LaunchTemplate</code> |
     * <code>ssm:Parameter</code> | <code>imagebuilder:ImageRecipe</code> |
     * <code>imagebuilder:ContainerRecipe</code> </p> <p>Either
     * <code>IncludeAllResourceTypes</code> or <code>ResourceTypes</code> must be
     * specified.</p>
     */
    inline bool GetIncludeAllResourceTypes() const { return m_includeAllResourceTypes; }
    inline bool IncludeAllResourceTypesHasBeenSet() const { return m_includeAllResourceTypesHasBeenSet; }
    inline void SetIncludeAllResourceTypes(bool value) { m_includeAllResourceTypesHasBeenSet = true; m_includeAllResourceTypes = value; }
    inline DescribeImageReferencesRequest& WithIncludeAllResourceTypes(bool value) { SetIncludeAllResourceTypes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resource types to check for image references.</p>
     * <p>Either <code>IncludeAllResourceTypes</code> or <code>ResourceTypes</code>
     * must be specified.</p>
     */
    inline const Aws::Vector<ResourceTypeRequest>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceTypeRequest>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceTypeRequest>>
    DescribeImageReferencesRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = ResourceTypeRequest>
    DescribeImageReferencesRequest& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeImageReferencesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeImageReferencesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.
     * </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeImageReferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    bool m_includeAllResourceTypes{false};
    bool m_includeAllResourceTypesHasBeenSet = false;

    Aws::Vector<ResourceTypeRequest> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
