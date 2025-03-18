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
    AWS_EKS_API DescribeAddonVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddonVersions"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Kubernetes versions that you can use the add-on with.</p>
     */
    inline const Aws::String& GetKubernetesVersion() const { return m_kubernetesVersion; }
    inline bool KubernetesVersionHasBeenSet() const { return m_kubernetesVersionHasBeenSet; }
    template<typename KubernetesVersionT = Aws::String>
    void SetKubernetesVersion(KubernetesVersionT&& value) { m_kubernetesVersionHasBeenSet = true; m_kubernetesVersion = std::forward<KubernetesVersionT>(value); }
    template<typename KubernetesVersionT = Aws::String>
    DescribeAddonVersionsRequest& WithKubernetesVersion(KubernetesVersionT&& value) { SetKubernetesVersion(std::forward<KubernetesVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results, returned in paginated output. You receive
     * <code>maxResults</code> in a single page, along with a <code>nextToken</code>
     * response element. You can see the remaining results of the initial request by
     * sending another request with the returned <code>nextToken</code> value. This
     * value can be between 1 and 100. If you don't use this parameter, 100 results and
     * a <code>nextToken</code> value, if applicable, are returned.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeAddonVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAddonVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    DescribeAddonVersionsRequest& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the add-on. For valid <code>types</code>, don't specify a value
     * for this property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    DescribeAddonVersionsRequest& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    DescribeAddonVersionsRequest& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The publisher of the add-on. For valid <code>publishers</code>, don't specify
     * a value for this property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublishers() const { return m_publishers; }
    inline bool PublishersHasBeenSet() const { return m_publishersHasBeenSet; }
    template<typename PublishersT = Aws::Vector<Aws::String>>
    void SetPublishers(PublishersT&& value) { m_publishersHasBeenSet = true; m_publishers = std::forward<PublishersT>(value); }
    template<typename PublishersT = Aws::Vector<Aws::String>>
    DescribeAddonVersionsRequest& WithPublishers(PublishersT&& value) { SetPublishers(std::forward<PublishersT>(value)); return *this;}
    template<typename PublishersT = Aws::String>
    DescribeAddonVersionsRequest& AddPublishers(PublishersT&& value) { m_publishersHasBeenSet = true; m_publishers.emplace_back(std::forward<PublishersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The owner of the add-on. For valid <code>owners</code>, don't specify a value
     * for this property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const { return m_owners; }
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }
    template<typename OwnersT = Aws::Vector<Aws::String>>
    void SetOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners = std::forward<OwnersT>(value); }
    template<typename OwnersT = Aws::Vector<Aws::String>>
    DescribeAddonVersionsRequest& WithOwners(OwnersT&& value) { SetOwners(std::forward<OwnersT>(value)); return *this;}
    template<typename OwnersT = Aws::String>
    DescribeAddonVersionsRequest& AddOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners.emplace_back(std::forward<OwnersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_kubernetesVersion;
    bool m_kubernetesVersionHasBeenSet = false;

    int m_maxResults{0};
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
