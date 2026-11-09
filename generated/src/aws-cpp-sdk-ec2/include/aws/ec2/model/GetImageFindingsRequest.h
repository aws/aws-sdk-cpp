/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class GetImageFindingsRequest : public EC2Request {
 public:
  AWS_EC2_API GetImageFindingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetImageFindings"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the AMI.</p>
   */
  inline const Aws::String& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = Aws::String>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = Aws::String>
  GetImageFindingsRequest& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetImageFindingsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token returned from a previous paginated request. Pagination continues
   * from the end of the items returned by the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetImageFindingsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
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
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline GetImageFindingsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageId;

  int m_maxResults{0};

  Aws::String m_nextToken;

  bool m_dryRun{false};
  bool m_imageIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
