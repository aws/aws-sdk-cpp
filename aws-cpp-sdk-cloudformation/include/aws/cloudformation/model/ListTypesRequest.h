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
  class AWS_CLOUDFORMATION_API ListTypesRequest : public CloudFormationRequest
  {
  public:
    ListTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTypes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you create as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul> <p>The
     * default is <code>PRIVATE</code>.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you create as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul> <p>The
     * default is <code>PRIVATE</code>.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you create as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul> <p>The
     * default is <code>PRIVATE</code>.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you create as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul> <p>The
     * default is <code>PRIVATE</code>.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you create as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul> <p>The
     * default is <code>PRIVATE</code>.</p>
     */
    inline ListTypesRequest& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The scope at which the type is visible and usable in CloudFormation
     * operations.</p> <p>Valid values include:</p> <ul> <li> <p> <code>PRIVATE</code>:
     * The type is only visible and usable within the account in which it is
     * registered. Currently, AWS CloudFormation marks any types you create as
     * <code>PRIVATE</code>.</p> </li> <li> <p> <code>PUBLIC</code>: The type is
     * publically visible and usable within any Amazon account.</p> </li> </ul> <p>The
     * default is <code>PRIVATE</code>.</p>
     */
    inline ListTypesRequest& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include create, read, and delete handlers, and therefore cannot actually be
     * provisioned.</p> </li> </ul>
     */
    inline const ProvisioningType& GetProvisioningType() const{ return m_provisioningType; }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include create, read, and delete handlers, and therefore cannot actually be
     * provisioned.</p> </li> </ul>
     */
    inline bool ProvisioningTypeHasBeenSet() const { return m_provisioningTypeHasBeenSet; }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include create, read, and delete handlers, and therefore cannot actually be
     * provisioned.</p> </li> </ul>
     */
    inline void SetProvisioningType(const ProvisioningType& value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = value; }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include create, read, and delete handlers, and therefore cannot actually be
     * provisioned.</p> </li> </ul>
     */
    inline void SetProvisioningType(ProvisioningType&& value) { m_provisioningTypeHasBeenSet = true; m_provisioningType = std::move(value); }

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include create, read, and delete handlers, and therefore cannot actually be
     * provisioned.</p> </li> </ul>
     */
    inline ListTypesRequest& WithProvisioningType(const ProvisioningType& value) { SetProvisioningType(value); return *this;}

    /**
     * <p>The provisioning behavior of the type. AWS CloudFormation determines the
     * provisioning type during registration, based on the types of handlers in the
     * schema handler package submitted.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>FULLY_MUTABLE</code>: The type includes an update handler to process
     * updates to the type during stack update operations.</p> </li> <li> <p>
     * <code>IMMUTABLE</code>: The type does not include an update handler, so the type
     * cannot be updated and must instead be replaced during stack update
     * operations.</p> </li> <li> <p> <code>NON_PROVISIONABLE</code>: The type does not
     * include create, read, and delete handlers, and therefore cannot actually be
     * provisioned.</p> </li> </ul>
     */
    inline ListTypesRequest& WithProvisioningType(ProvisioningType&& value) { SetProvisioningType(std::move(value)); return *this;}


    /**
     * <p>The deprecation status of the types that you want to get summary information
     * about.</p> <p>Valid values include:</p> <ul> <li> <p> <code>LIVE</code>: The
     * type is registered for use in CloudFormation operations.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The type has been deregistered and can no longer be
     * used in CloudFormation operations. </p> </li> </ul>
     */
    inline const DeprecatedStatus& GetDeprecatedStatus() const{ return m_deprecatedStatus; }

    /**
     * <p>The deprecation status of the types that you want to get summary information
     * about.</p> <p>Valid values include:</p> <ul> <li> <p> <code>LIVE</code>: The
     * type is registered for use in CloudFormation operations.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The type has been deregistered and can no longer be
     * used in CloudFormation operations. </p> </li> </ul>
     */
    inline bool DeprecatedStatusHasBeenSet() const { return m_deprecatedStatusHasBeenSet; }

    /**
     * <p>The deprecation status of the types that you want to get summary information
     * about.</p> <p>Valid values include:</p> <ul> <li> <p> <code>LIVE</code>: The
     * type is registered for use in CloudFormation operations.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The type has been deregistered and can no longer be
     * used in CloudFormation operations. </p> </li> </ul>
     */
    inline void SetDeprecatedStatus(const DeprecatedStatus& value) { m_deprecatedStatusHasBeenSet = true; m_deprecatedStatus = value; }

    /**
     * <p>The deprecation status of the types that you want to get summary information
     * about.</p> <p>Valid values include:</p> <ul> <li> <p> <code>LIVE</code>: The
     * type is registered for use in CloudFormation operations.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The type has been deregistered and can no longer be
     * used in CloudFormation operations. </p> </li> </ul>
     */
    inline void SetDeprecatedStatus(DeprecatedStatus&& value) { m_deprecatedStatusHasBeenSet = true; m_deprecatedStatus = std::move(value); }

    /**
     * <p>The deprecation status of the types that you want to get summary information
     * about.</p> <p>Valid values include:</p> <ul> <li> <p> <code>LIVE</code>: The
     * type is registered for use in CloudFormation operations.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The type has been deregistered and can no longer be
     * used in CloudFormation operations. </p> </li> </ul>
     */
    inline ListTypesRequest& WithDeprecatedStatus(const DeprecatedStatus& value) { SetDeprecatedStatus(value); return *this;}

    /**
     * <p>The deprecation status of the types that you want to get summary information
     * about.</p> <p>Valid values include:</p> <ul> <li> <p> <code>LIVE</code>: The
     * type is registered for use in CloudFormation operations.</p> </li> <li> <p>
     * <code>DEPRECATED</code>: The type has been deregistered and can no longer be
     * used in CloudFormation operations. </p> </li> </ul>
     */
    inline ListTypesRequest& WithDeprecatedStatus(DeprecatedStatus&& value) { SetDeprecatedStatus(std::move(value)); return *this;}


    /**
     * <p>The type of extension.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }

    /**
     * <p>The type of extension.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of extension.</p>
     */
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of extension.</p>
     */
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of extension.</p>
     */
    inline ListTypesRequest& WithType(const RegistryType& value) { SetType(value); return *this;}

    /**
     * <p>The type of extension.</p>
     */
    inline ListTypesRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline ListTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet;

    ProvisioningType m_provisioningType;
    bool m_provisioningTypeHasBeenSet;

    DeprecatedStatus m_deprecatedStatus;
    bool m_deprecatedStatusHasBeenSet;

    RegistryType m_type;
    bool m_typeHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
