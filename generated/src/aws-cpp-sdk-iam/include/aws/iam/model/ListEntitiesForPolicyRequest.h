/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/EntityType.h>
#include <aws/iam/model/PolicyUsageType.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class ListEntitiesForPolicyRequest : public IAMRequest
  {
  public:
    AWS_IAM_API ListEntitiesForPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntitiesForPolicy"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy for which you want the
     * versions.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    ListEntitiesForPolicyRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type to use for filtering the results.</p> <p>For example, when
     * <code>EntityFilter</code> is <code>Role</code>, only the roles that are attached
     * to the specified policy are returned. This parameter is optional. If it is not
     * included, all attached entities (users, groups, and roles) are returned. The
     * argument for this parameter must be one of the valid values listed below.</p>
     */
    inline EntityType GetEntityFilter() const { return m_entityFilter; }
    inline bool EntityFilterHasBeenSet() const { return m_entityFilterHasBeenSet; }
    inline void SetEntityFilter(EntityType value) { m_entityFilterHasBeenSet = true; m_entityFilter = value; }
    inline ListEntitiesForPolicyRequest& WithEntityFilter(EntityType value) { SetEntityFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path prefix for filtering the results. This parameter is optional. If it
     * is not included, it defaults to a slash (/), listing all entities.</p> <p>This
     * parameter allows (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of either a forward slash (/) by
     * itself or a string that must begin and end with forward slashes. In addition, it
     * can contain any ASCII character from the ! (<code>\u0021</code>) through the DEL
     * character (<code>\u007F</code>), including most punctuation characters, digits,
     * and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetPathPrefix() const { return m_pathPrefix; }
    inline bool PathPrefixHasBeenSet() const { return m_pathPrefixHasBeenSet; }
    template<typename PathPrefixT = Aws::String>
    void SetPathPrefix(PathPrefixT&& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = std::forward<PathPrefixT>(value); }
    template<typename PathPrefixT = Aws::String>
    ListEntitiesForPolicyRequest& WithPathPrefix(PathPrefixT&& value) { SetPathPrefix(std::forward<PathPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy usage method to use for filtering the results.</p> <p>To list only
     * permissions policies,
     * set <code>PolicyUsageFilter</code> to <code>PermissionsPolicy</code>. To list
     * only the policies used to set permissions boundaries, set the value
     * to <code>PermissionsBoundary</code>.</p> <p>This parameter is optional. If it is
     * not included, all policies are returned. </p>
     */
    inline PolicyUsageType GetPolicyUsageFilter() const { return m_policyUsageFilter; }
    inline bool PolicyUsageFilterHasBeenSet() const { return m_policyUsageFilterHasBeenSet; }
    inline void SetPolicyUsageFilter(PolicyUsageType value) { m_policyUsageFilterHasBeenSet = true; m_policyUsageFilter = value; }
    inline ListEntitiesForPolicyRequest& WithPolicyUsageFilter(PolicyUsageType value) { SetPolicyUsageFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListEntitiesForPolicyRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this only when paginating results to indicate the maximum number of items
     * you want in the response. If additional items exist beyond the maximum you
     * specify, the <code>IsTruncated</code> response element is <code>true</code>.</p>
     * <p>If you do not include this parameter, the number of items defaults to 100.
     * Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListEntitiesForPolicyRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    EntityType m_entityFilter{EntityType::NOT_SET};
    bool m_entityFilterHasBeenSet = false;

    Aws::String m_pathPrefix;
    bool m_pathPrefixHasBeenSet = false;

    PolicyUsageType m_policyUsageFilter{PolicyUsageType::NOT_SET};
    bool m_policyUsageFilterHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
