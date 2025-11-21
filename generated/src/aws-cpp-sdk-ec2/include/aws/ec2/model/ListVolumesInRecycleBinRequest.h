/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ListVolumesInRecycleBinRequest : public EC2Request {
 public:
  AWS_EC2_API ListVolumesInRecycleBinRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListVolumesInRecycleBin"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the volumes to list. Omit this parameter to list all of the
   * volumes that are in the Recycle Bin.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVolumeIds() const { return m_volumeIds; }
  inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }
  template <typename VolumeIdsT = Aws::Vector<Aws::String>>
  void SetVolumeIds(VolumeIdsT&& value) {
    m_volumeIdsHasBeenSet = true;
    m_volumeIds = std::forward<VolumeIdsT>(value);
  }
  template <typename VolumeIdsT = Aws::Vector<Aws::String>>
  ListVolumesInRecycleBinRequest& WithVolumeIds(VolumeIdsT&& value) {
    SetVolumeIds(std::forward<VolumeIdsT>(value));
    return *this;
  }
  template <typename VolumeIdsT = Aws::String>
  ListVolumesInRecycleBinRequest& AddVolumeIds(VolumeIdsT&& value) {
    m_volumeIdsHasBeenSet = true;
    m_volumeIds.emplace_back(std::forward<VolumeIdsT>(value));
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
  inline ListVolumesInRecycleBinRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of items to return for this request. To get the next page
   * of items, make another request with the token returned in the output. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
   * <p>Valid range: 5 - 500</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListVolumesInRecycleBinRequest& WithMaxResults(int value) {
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
  ListVolumesInRecycleBinRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_volumeIds;
  bool m_volumeIdsHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
