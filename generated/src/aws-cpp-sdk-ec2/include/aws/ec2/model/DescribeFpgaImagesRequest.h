/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeFpgaImagesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeFpgaImagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFpgaImages"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeFpgaImagesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AFI IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFpgaImageIds() const { return m_fpgaImageIds; }
    inline bool FpgaImageIdsHasBeenSet() const { return m_fpgaImageIdsHasBeenSet; }
    template<typename FpgaImageIdsT = Aws::Vector<Aws::String>>
    void SetFpgaImageIds(FpgaImageIdsT&& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds = std::forward<FpgaImageIdsT>(value); }
    template<typename FpgaImageIdsT = Aws::Vector<Aws::String>>
    DescribeFpgaImagesRequest& WithFpgaImageIds(FpgaImageIdsT&& value) { SetFpgaImageIds(std::forward<FpgaImageIdsT>(value)); return *this;}
    template<typename FpgaImageIdsT = Aws::String>
    DescribeFpgaImagesRequest& AddFpgaImageIds(FpgaImageIdsT&& value) { m_fpgaImageIdsHasBeenSet = true; m_fpgaImageIds.emplace_back(std::forward<FpgaImageIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the AFI by owner. Specify an Amazon Web Services account ID,
     * <code>self</code> (owner is the sender of the request), or an Amazon Web
     * Services owner alias (valid values are <code>amazon</code> |
     * <code>aws-marketplace</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const { return m_owners; }
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }
    template<typename OwnersT = Aws::Vector<Aws::String>>
    void SetOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners = std::forward<OwnersT>(value); }
    template<typename OwnersT = Aws::Vector<Aws::String>>
    DescribeFpgaImagesRequest& WithOwners(OwnersT&& value) { SetOwners(std::forward<OwnersT>(value)); return *this;}
    template<typename OwnersT = Aws::String>
    DescribeFpgaImagesRequest& AddOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners.emplace_back(std::forward<OwnersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>create-time</code> - The creation time
     * of the AFI.</p> </li> <li> <p> <code>fpga-image-id</code> - The FPGA image
     * identifier (AFI ID).</p> </li> <li> <p> <code>fpga-image-global-id</code> - The
     * global FPGA image identifier (AGFI ID).</p> </li> <li> <p> <code>name</code> -
     * The name of the AFI.</p> </li> <li> <p> <code>owner-id</code> - The Amazon Web
     * Services account ID of the AFI owner.</p> </li> <li> <p>
     * <code>product-code</code> - The product code.</p> </li> <li> <p>
     * <code>shell-version</code> - The version of the Amazon Web Services Shell that
     * was used to create the bitstream.</p> </li> <li> <p> <code>state</code> - The
     * state of the AFI (<code>pending</code> | <code>failed</code> |
     * <code>available</code> | <code>unavailable</code>).</p> </li> <li> <p>
     * <code>tag</code>:&lt;key&gt; - The key/value combination of a tag assigned to
     * the resource. Use the tag key in the filter name and the tag value as the filter
     * value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>update-time</code> - The time of the most recent update.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeFpgaImagesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeFpgaImagesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFpgaImagesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeFpgaImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_fpgaImageIds;
    bool m_fpgaImageIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
