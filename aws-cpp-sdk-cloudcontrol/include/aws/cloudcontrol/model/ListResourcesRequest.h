/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/CloudControlApiRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

  /**
   */
  class ListResourcesRequest : public CloudControlApiRequest
  {
  public:
    AWS_CLOUDCONTROLAPI_API ListResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResources"; }

    AWS_CLOUDCONTROLAPI_API Aws::String SerializePayload() const override;

    AWS_CLOUDCONTROLAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the resource type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the resource type.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The name of the resource type.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the resource type.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the resource type.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the resource type.</p>
     */
    inline ListResourcesRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the resource type.</p>
     */
    inline ListResourcesRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource type.</p>
     */
    inline ListResourcesRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline const Aws::String& GetTypeVersionId() const{ return m_typeVersionId; }

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline void SetTypeVersionId(const Aws::String& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = value; }

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline void SetTypeVersionId(Aws::String&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::move(value); }

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline void SetTypeVersionId(const char* value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId.assign(value); }

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline ListResourcesRequest& WithTypeVersionId(const Aws::String& value) { SetTypeVersionId(value); return *this;}

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline ListResourcesRequest& WithTypeVersionId(Aws::String&& value) { SetTypeVersionId(std::move(value)); return *this;}

    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline ListResourcesRequest& WithTypeVersionId(const char* value) { SetTypeVersionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline ListResourcesRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline ListResourcesRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role for Cloud Control API to use when performing this resource operation. The
     * role specified must have the permissions required for this operation. The
     * necessary permissions for each event handler are defined in the <code> <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html#schema-properties-handlers">handlers</a>
     * </code> section of the <a
     * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">resource
     * type definition schema</a>.</p> <p>If you do not specify a role, Cloud Control
     * API uses a temporary session created using your Amazon Web Services user
     * credentials.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-permissions">Specifying
     * credentials</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline ListResourcesRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


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
    inline ListResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call this action again and assign that
     * token to the request object's <code>NextToken</code> parameter. If there are no
     * remaining results, the previous response object's <code>NextToken</code>
     * parameter is set to <code>null</code>.</p>
     */
    inline ListResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Reserved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Reserved.</p>
     */
    inline ListResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline const Aws::String& GetResourceModel() const{ return m_resourceModel; }

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline bool ResourceModelHasBeenSet() const { return m_resourceModelHasBeenSet; }

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline void SetResourceModel(const Aws::String& value) { m_resourceModelHasBeenSet = true; m_resourceModel = value; }

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline void SetResourceModel(Aws::String&& value) { m_resourceModelHasBeenSet = true; m_resourceModel = std::move(value); }

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline void SetResourceModel(const char* value) { m_resourceModelHasBeenSet = true; m_resourceModel.assign(value); }

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline ListResourcesRequest& WithResourceModel(const Aws::String& value) { SetResourceModel(value); return *this;}

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline ListResourcesRequest& WithResourceModel(Aws::String&& value) { SetResourceModel(std::move(value)); return *this;}

    /**
     * <p>The resource model to use to select the resources to return.</p>
     */
    inline ListResourcesRequest& WithResourceModel(const char* value) { SetResourceModel(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeVersionId;
    bool m_typeVersionIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_resourceModel;
    bool m_resourceModelHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
