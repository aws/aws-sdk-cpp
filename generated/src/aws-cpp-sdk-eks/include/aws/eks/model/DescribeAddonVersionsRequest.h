/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class DescribeAddonVersionsRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DescribeAddonVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddonVersions"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline const Aws::String& GetKubernetesVersion() const{ return m_kubernetesVersion; }

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline void SetKubernetesVersion(const Aws::String& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = value; }

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline void SetKubernetesVersion(Aws::String&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::move(value); }

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline void SetKubernetesVersion(const char* value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion.assign(value); }

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline DescribeAddonVersionsRequest& WithKubernetesVersion(const Aws::String& value) { SetKubernetesVersion(value); return *this;}

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline DescribeAddonVersionsRequest& WithKubernetesVersion(Aws::String&& value) { SetKubernetesVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline DescribeAddonVersionsRequest& WithKubernetesVersion(const char* value) { SetKubernetesVersion(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline DescribeAddonVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline DescribeAddonVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline DescribeAddonVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeAddonVersionsRequest</code> where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is used only to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline DescribeAddonVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline DescribeAddonVersionsRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline DescribeAddonVersionsRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline DescribeAddonVersionsRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}


    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublishers() const{ return m_publishers; }

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline bool PublishersHasBeenSet() const { return m_publishersHasBeenSet; }

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline void SetPublishers(const Aws::Vector<Aws::String>& value) { m_publishersHasBeenSet = true; m_publishers = value; }

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline void SetPublishers(Aws::Vector<Aws::String>&& value) { m_publishersHasBeenSet = true; m_publishers = std::move(value); }

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline DescribeAddonVersionsRequest& WithPublishers(const Aws::Vector<Aws::String>& value) { SetPublishers(value); return *this;}

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline DescribeAddonVersionsRequest& WithPublishers(Aws::Vector<Aws::String>&& value) { SetPublishers(std::move(value)); return *this;}

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddPublishers(const Aws::String& value) { m_publishersHasBeenSet = true; m_publishers.push_back(value); return *this; }

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddPublishers(Aws::String&& value) { m_publishersHasBeenSet = true; m_publishers.push_back(std::move(value)); return *this; }

    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddPublishers(const char* value) { m_publishersHasBeenSet = true; m_publishers.push_back(value); return *this; }


    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const{ return m_owners; }

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline void SetOwners(const Aws::Vector<Aws::String>& value) { m_ownersHasBeenSet = true; m_owners = value; }

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline void SetOwners(Aws::Vector<Aws::String>&& value) { m_ownersHasBeenSet = true; m_owners = std::move(value); }

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& WithOwners(const Aws::Vector<Aws::String>& value) { SetOwners(value); return *this;}

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& WithOwners(Aws::Vector<Aws::String>&& value) { SetOwners(std::move(value)); return *this;}

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddOwners(const Aws::String& value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddOwners(Aws::String&& value) { m_ownersHasBeenSet = true; m_owners.push_back(std::move(value)); return *this; }

    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline DescribeAddonVersionsRequest& AddOwners(const char* value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }

  private:

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<Aws::String> m_publishers;
    bool m_publishersHasBeenSet = false;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
