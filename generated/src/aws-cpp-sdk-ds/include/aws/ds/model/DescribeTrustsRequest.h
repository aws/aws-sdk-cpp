/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Describes the trust relationships for a particular Managed Microsoft AD
   * directory. If no input parameters are provided, such as directory ID or trust
   * ID, this request describes all the trust relationships.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrustsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeTrustsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeTrustsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrusts"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Directory ID of the Amazon Web Services directory that is a part of the
     * requested trust relationship.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeTrustsRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers of the trust relationships for which to obtain the
     * information. If this member is null, all trust relationships that belong to the
     * current account are returned.</p> <p>An empty list results in an
     * <code>InvalidParameterException</code> being thrown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustIds() const { return m_trustIds; }
    inline bool TrustIdsHasBeenSet() const { return m_trustIdsHasBeenSet; }
    template<typename TrustIdsT = Aws::Vector<Aws::String>>
    void SetTrustIds(TrustIdsT&& value) { m_trustIdsHasBeenSet = true; m_trustIds = std::forward<TrustIdsT>(value); }
    template<typename TrustIdsT = Aws::Vector<Aws::String>>
    DescribeTrustsRequest& WithTrustIds(TrustIdsT&& value) { SetTrustIds(std::forward<TrustIdsT>(value)); return *this;}
    template<typename TrustIdsT = Aws::String>
    DescribeTrustsRequest& AddTrustIds(TrustIdsT&& value) { m_trustIdsHasBeenSet = true; m_trustIds.emplace_back(std::forward<TrustIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <i>DescribeTrustsResult.NextToken</i> value from a previous call to
     * <a>DescribeTrusts</a>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrustsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeTrustsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_trustIds;
    bool m_trustIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
