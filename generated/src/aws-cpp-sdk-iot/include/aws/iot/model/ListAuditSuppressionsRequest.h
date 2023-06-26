/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ResourceIdentifier.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class ListAuditSuppressionsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListAuditSuppressionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAuditSuppressions"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetCheckName() const{ return m_checkName; }

    
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }

    
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }

    
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }

    
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }

    
    inline ListAuditSuppressionsRequest& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}

    
    inline ListAuditSuppressionsRequest& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}

    
    inline ListAuditSuppressionsRequest& WithCheckName(const char* value) { SetCheckName(value); return *this;}


    
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    
    inline ListAuditSuppressionsRequest& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}

    
    inline ListAuditSuppressionsRequest& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}


    /**
     * <p> Determines whether suppressions are listed in ascending order by expiration
     * date or not. If parameter isn't provided, <code>ascendingOrder=true</code>. </p>
     */
    inline bool GetAscendingOrder() const{ return m_ascendingOrder; }

    /**
     * <p> Determines whether suppressions are listed in ascending order by expiration
     * date or not. If parameter isn't provided, <code>ascendingOrder=true</code>. </p>
     */
    inline bool AscendingOrderHasBeenSet() const { return m_ascendingOrderHasBeenSet; }

    /**
     * <p> Determines whether suppressions are listed in ascending order by expiration
     * date or not. If parameter isn't provided, <code>ascendingOrder=true</code>. </p>
     */
    inline void SetAscendingOrder(bool value) { m_ascendingOrderHasBeenSet = true; m_ascendingOrder = value; }

    /**
     * <p> Determines whether suppressions are listed in ascending order by expiration
     * date or not. If parameter isn't provided, <code>ascendingOrder=true</code>. </p>
     */
    inline ListAuditSuppressionsRequest& WithAscendingOrder(bool value) { SetAscendingOrder(value); return *this;}


    /**
     * <p> The token for the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. </p>
     */
    inline ListAuditSuppressionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. </p>
     */
    inline ListAuditSuppressionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. </p>
     */
    inline ListAuditSuppressionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to return at one time. The default is 25. </p>
     */
    inline ListAuditSuppressionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    bool m_ascendingOrder;
    bool m_ascendingOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
