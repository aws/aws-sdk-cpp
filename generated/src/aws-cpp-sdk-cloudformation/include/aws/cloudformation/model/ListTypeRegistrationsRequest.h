/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/RegistryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/RegistrationStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListTypeRegistrationsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListTypeRegistrationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTypeRegistrations"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The kind of extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const RegistryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RegistryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RegistryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListTypeRegistrationsRequest& WithType(const RegistryType& value) { SetType(value); return *this;}
    inline ListTypeRegistrationsRequest& WithType(RegistryType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension.</p> <p>Conditional: You must specify either
     * <code>TypeName</code> and <code>Type</code>, or <code>Arn</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline ListTypeRegistrationsRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ListTypeRegistrationsRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ListTypeRegistrationsRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify either <code>TypeName</code> and <code>Type</code>, or
     * <code>Arn</code>.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }
    inline bool TypeArnHasBeenSet() const { return m_typeArnHasBeenSet; }
    inline void SetTypeArn(const Aws::String& value) { m_typeArnHasBeenSet = true; m_typeArn = value; }
    inline void SetTypeArn(Aws::String&& value) { m_typeArnHasBeenSet = true; m_typeArn = std::move(value); }
    inline void SetTypeArn(const char* value) { m_typeArnHasBeenSet = true; m_typeArn.assign(value); }
    inline ListTypeRegistrationsRequest& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}
    inline ListTypeRegistrationsRequest& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}
    inline ListTypeRegistrationsRequest& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the extension registration request.</p> <p>The default
     * is <code>IN_PROGRESS</code>.</p>
     */
    inline const RegistrationStatus& GetRegistrationStatusFilter() const{ return m_registrationStatusFilter; }
    inline bool RegistrationStatusFilterHasBeenSet() const { return m_registrationStatusFilterHasBeenSet; }
    inline void SetRegistrationStatusFilter(const RegistrationStatus& value) { m_registrationStatusFilterHasBeenSet = true; m_registrationStatusFilter = value; }
    inline void SetRegistrationStatusFilter(RegistrationStatus&& value) { m_registrationStatusFilterHasBeenSet = true; m_registrationStatusFilter = std::move(value); }
    inline ListTypeRegistrationsRequest& WithRegistrationStatusFilter(const RegistrationStatus& value) { SetRegistrationStatusFilter(value); return *this;}
    inline ListTypeRegistrationsRequest& WithRegistrationStatusFilter(RegistrationStatus&& value) { SetRegistrationStatusFilter(std::move(value)); return *this;}
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
    inline ListTypeRegistrationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTypeRegistrationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTypeRegistrationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTypeRegistrationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    RegistryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeArn;
    bool m_typeArnHasBeenSet = false;

    RegistrationStatus m_registrationStatusFilter;
    bool m_registrationStatusFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
