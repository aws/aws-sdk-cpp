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
  class GetResourceRequest : public CloudControlApiRequest
  {
  public:
    AWS_CLOUDCONTROLAPI_API GetResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResource"; }

    AWS_CLOUDCONTROLAPI_API Aws::String SerializePayload() const override;

    AWS_CLOUDCONTROLAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource type.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline GetResourceRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline GetResourceRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline GetResourceRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline const Aws::String& GetTypeVersionId() const{ return m_typeVersionId; }
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }
    inline void SetTypeVersionId(const Aws::String& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = value; }
    inline void SetTypeVersionId(Aws::String&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::move(value); }
    inline void SetTypeVersionId(const char* value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId.assign(value); }
    inline GetResourceRequest& WithTypeVersionId(const Aws::String& value) { SetTypeVersionId(value); return *this;}
    inline GetResourceRequest& WithTypeVersionId(Aws::String&& value) { SetTypeVersionId(std::move(value)); return *this;}
    inline GetResourceRequest& WithTypeVersionId(const char* value) { SetTypeVersionId(value); return *this;}
    ///@}

    ///@{
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
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline GetResourceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetResourceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetResourceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the resource.</p> <p>You can specify the primary
     * identifier, or any secondary identifier defined for the resource type in its
     * resource schema. You can only specify one identifier. Primary identifiers can be
     * specified as a string or JSON; secondary identifiers must be specified as
     * JSON.</p> <p>For compound primary identifiers (that is, one that consists of
     * multiple resource properties strung together), to specify the primary identifier
     * as a string, list the property values <i>in the order they are specified</i> in
     * the primary identifier definition, separated by <code>|</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-identifier.html">Identifying
     * resources</a> in the <i>Amazon Web Services Cloud Control API User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline GetResourceRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline GetResourceRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline GetResourceRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeVersionId;
    bool m_typeVersionIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
