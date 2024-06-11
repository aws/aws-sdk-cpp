/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListTypeVersionsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListTypeVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTypeVersions"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The kind of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListTypeVersionsRequest& WithType(const RegistryType& value) { SetType(value); return *this;}
    inline ListTypeVersionsRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension for which you want version summary information.</p>
     * <p>Conditional: You must specify either <code>TypeName</code> and
     * <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline ListTypeVersionsRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ListTypeVersionsRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ListTypeVersionsRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension for which you want version
     * summary information.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ListTypeVersionsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ListTypeVersionsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ListTypeVersionsRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTypeVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTypeVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTypeVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTypeVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation status of the extension versions that you want to get summary
     * information about.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>LIVE</code>: The extension version is registered and can be used in
     * CloudFormation operations, dependent on its provisioning behavior and visibility
     * scope.</p> </li> <li> <p> <code>DEPRECATED</code>: The extension version has
     * been deregistered and can no longer be used in CloudFormation operations.</p>
     * </li> </ul> <p>The default is <code>LIVE</code>.</p>
     */
    inline const DeprecatedStatus& GetDeprecatedStatus() const{ return m_deprecatedStatus; }
    inline bool DeprecatedStatusHasBeenSet() const { return m_deprecatedStatusHasBeenSet; }
    inline void SetDeprecatedStatus(const DeprecatedStatus& value) { m_deprecatedStatusHasBeenSet = true; m_deprecatedStatus = value; }
    inline void SetDeprecatedStatus(DeprecatedStatus&& value) { m_deprecatedStatusHasBeenSet = true; m_deprecatedStatus = std::move(value); }
    inline ListTypeVersionsRequest& WithDeprecatedStatus(const DeprecatedStatus& value) { SetDeprecatedStatus(value); return *this;}
    inline ListTypeVersionsRequest& WithDeprecatedStatus(DeprecatedStatus&& value) { SetDeprecatedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The publisher ID of the extension publisher.</p> <p>Extensions published by
     * Amazon aren't assigned a publisher ID.</p>
     */
    inline const Aws::String& GetPublisherId() const{ return m_publisherId; }
    inline bool PublisherIdHasBeenSet() const { return m_publisherIdHasBeenSet; }
    inline void SetPublisherId(const Aws::String& value) { m_publisherIdHasBeenSet = true; m_publisherId = value; }
    inline void SetPublisherId(Aws::String&& value) { m_publisherIdHasBeenSet = true; m_publisherId = std::move(value); }
    inline void SetPublisherId(const char* value) { m_publisherIdHasBeenSet = true; m_publisherId.assign(value); }
    inline ListTypeVersionsRequest& WithPublisherId(const Aws::String& value) { SetPublisherId(value); return *this;}
    inline ListTypeVersionsRequest& WithPublisherId(Aws::String&& value) { SetPublisherId(std::move(value)); return *this;}
    inline ListTypeVersionsRequest& WithPublisherId(const char* value) { SetPublisherId(value); return *this;}
    ///@}
  private:

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    DeprecatedStatus m_deprecatedStatus;
    bool m_deprecatedStatusHasBeenSet = false;

    Aws::String m_publisherId;
    bool m_publisherIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
