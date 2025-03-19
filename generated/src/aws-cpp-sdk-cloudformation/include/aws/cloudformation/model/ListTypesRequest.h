/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/Visibility.h>
#include <aws/cloudformation/model/ProvisioningType.h>
#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/cloudformation/model/TypeFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListTypesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTypes"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The scope at which the extensions are visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * Extensions that are visible and usable within this account and Region. This
     * includes:</p> <ul> <li> <p>Private extensions you have registered in this
     * account and Region.</p> </li> <li> <p>Public extensions that you have activated
     * in this account and Region.</p> </li> </ul> </li> <li> <p> <code>PUBLIC</code>:
     * Extensions that are publicly visible and available to be activated within any
     * Amazon Web Services account. This includes extensions from Amazon Web Services,
     * in addition to third-party publishers.</p> </li> </ul> <p>The default is
     * <code>PRIVATE</code>.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline ListTypesRequest& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For resource types, the provisioning behavior of the resource type.
     * CloudFormation determines the provisioning type during registration, based on
     * the types of handlers in the schema handler package submitted.</p> <p>Valid
     * values include:</p> <ul> <li> <p> <code>FULLY_MUTABLE</code>: The resource type
     * includes an update handler to process updates to the type during stack update
     * operations.</p> </li> <li> <p> <code>IMMUTABLE</code>: The resource type doesn't
     * include an update handler, so the type can't be updated and must instead be
     * replaced during stack update operations.</p> </li> <li> <p>
     * <code>NON_PROVISIONABLE</code>: The resource type doesn't include create, read,
     * and delete handlers, and therefore can't actually be provisioned.</p> </li>
     * </ul> <p>The default is <code>FULLY_MUTABLE</code>.</p>
     */
    inline ProvisioningType GetProvisioningType() const { return m_provisioningType; }
    inline bool ProvisioningTypeHasBeenSet() const { return m_provisioningTypeHasBeenSet; }
    inline void SetProvisioningType(ProvisioningType value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = value; }
    inline ListTypesRequest& WithProvisioningType(ProvisioningType value) { SetProvisioningType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation status of the extension that you want to get summary
     * information about.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>LIVE</code>: The extension is registered for use in CloudFormation
     * operations.</p> </li> <li> <p> <code>DEPRECATED</code>: The extension has been
     * deregistered and can no longer be used in CloudFormation operations.</p> </li>
     * </ul>
     */
    inline DeprecatedStatus GetDeprecatedStatus() const { return m_deprecatedStatus; }
    inline bool DeprecatedStatusHasBeenSet() const { return m_deprecatedStatusHasBeenSet; }
    inline void SetDeprecatedStatus(DeprecatedStatus value) { m_deprecatedStatusHasBeenSet = true; m_deprecatedStatus = value; }
    inline ListTypesRequest& WithDeprecatedStatus(DeprecatedStatus value) { SetDeprecatedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of extension.</p>
     */
    inline RegistryType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RegistryType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListTypesRequest& WithType(RegistryType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter criteria to use in determining which extensions to return.</p>
     * <p>Filters must be compatible with <code>Visibility</code> to return valid
     * results. For example, specifying <code>AWS_TYPES</code> for
     * <code>Category</code> and <code>PRIVATE</code> for <code>Visibility</code>
     * returns an empty list of types, but specifying <code>PUBLIC</code> for
     * <code>Visibility</code> returns the desired list.</p>
     */
    inline const TypeFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = TypeFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = TypeFilters>
    ListTypesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request didn't return all the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTypesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    ProvisioningType m_provisioningType{ProvisioningType::NOT_SET};
    bool m_provisioningTypeHasBeenSet = false;

    DeprecatedStatus m_deprecatedStatus{DeprecatedStatus::NOT_SET};
    bool m_deprecatedStatusHasBeenSet = false;

    RegistryType m_type{RegistryType::NOT_SET};
    bool m_typeHasBeenSet = false;

    TypeFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
