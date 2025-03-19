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
   */
  class DescribeDomainControllersRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainControllers"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeDomainControllersRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainControllerIds() const { return m_domainControllerIds; }
    inline bool DomainControllerIdsHasBeenSet() const { return m_domainControllerIdsHasBeenSet; }
    template<typename DomainControllerIdsT = Aws::Vector<Aws::String>>
    void SetDomainControllerIds(DomainControllerIdsT&& value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds = std::forward<DomainControllerIdsT>(value); }
    template<typename DomainControllerIdsT = Aws::Vector<Aws::String>>
    DescribeDomainControllersRequest& WithDomainControllerIds(DomainControllerIdsT&& value) { SetDomainControllerIds(std::forward<DomainControllerIdsT>(value)); return *this;}
    template<typename DomainControllerIdsT = Aws::String>
    DescribeDomainControllersRequest& AddDomainControllerIds(DomainControllerIdsT&& value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds.emplace_back(std::forward<DomainControllerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDomainControllersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDomainControllersRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainControllerIds;
    bool m_domainControllerIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
