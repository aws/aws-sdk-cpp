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
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDomainControllers"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline DescribeDomainControllersRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline DescribeDomainControllersRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory for which to retrieve the domain controller
     * information.</p>
     */
    inline DescribeDomainControllersRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainControllerIds() const{ return m_domainControllerIds; }

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline bool DomainControllerIdsHasBeenSet() const { return m_domainControllerIdsHasBeenSet; }

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline void SetDomainControllerIds(const Aws::Vector<Aws::String>& value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds = value; }

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline void SetDomainControllerIds(Aws::Vector<Aws::String>&& value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds = std::move(value); }

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline DescribeDomainControllersRequest& WithDomainControllerIds(const Aws::Vector<Aws::String>& value) { SetDomainControllerIds(value); return *this;}

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline DescribeDomainControllersRequest& WithDomainControllerIds(Aws::Vector<Aws::String>&& value) { SetDomainControllerIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline DescribeDomainControllersRequest& AddDomainControllerIds(const Aws::String& value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline DescribeDomainControllersRequest& AddDomainControllerIds(Aws::String&& value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers for the domain controllers whose information will be
     * provided.</p>
     */
    inline DescribeDomainControllersRequest& AddDomainControllerIds(const char* value) { m_domainControllerIdsHasBeenSet = true; m_domainControllerIds.push_back(value); return *this; }


    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline DescribeDomainControllersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline DescribeDomainControllersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <i>DescribeDomainControllers.NextToken</i> value from a previous call to
     * <a>DescribeDomainControllers</a>. Pass null if this is the first call. </p>
     */
    inline DescribeDomainControllersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeDomainControllersRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainControllerIds;
    bool m_domainControllerIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
