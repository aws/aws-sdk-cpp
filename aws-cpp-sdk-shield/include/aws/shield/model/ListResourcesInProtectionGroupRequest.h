/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class ListResourcesInProtectionGroupRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API ListResourcesInProtectionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourcesInProtectionGroup"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline const Aws::String& GetProtectionGroupId() const{ return m_protectionGroupId; }

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline bool ProtectionGroupIdHasBeenSet() const { return m_protectionGroupIdHasBeenSet; }

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline void SetProtectionGroupId(const Aws::String& value) { m_protectionGroupIdHasBeenSet = true; m_protectionGroupId = value; }

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline void SetProtectionGroupId(Aws::String&& value) { m_protectionGroupIdHasBeenSet = true; m_protectionGroupId = std::move(value); }

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline void SetProtectionGroupId(const char* value) { m_protectionGroupIdHasBeenSet = true; m_protectionGroupId.assign(value); }

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline ListResourcesInProtectionGroupRequest& WithProtectionGroupId(const Aws::String& value) { SetProtectionGroupId(value); return *this;}

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline ListResourcesInProtectionGroupRequest& WithProtectionGroupId(Aws::String&& value) { SetProtectionGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the protection group. You use this to identify the protection
     * group in lists and to manage the protection group, for example to update,
     * delete, or describe it. </p>
     */
    inline ListResourcesInProtectionGroupRequest& WithProtectionGroupId(const char* value) { SetProtectionGroupId(value); return *this;}


    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline ListResourcesInProtectionGroupRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline ListResourcesInProtectionGroupRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline ListResourcesInProtectionGroupRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline ListResourcesInProtectionGroupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_protectionGroupId;
    bool m_protectionGroupIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
