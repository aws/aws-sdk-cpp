/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/CloudControlApiRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{

  /**
   */
  class CreateResourceRequest : public CloudControlApiRequest
  {
  public:
    AWS_CLOUDCONTROLAPI_API CreateResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResource"; }

    AWS_CLOUDCONTROLAPI_API Aws::String SerializePayload() const override;

    AWS_CLOUDCONTROLAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource type.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    CreateResourceRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For private resource types, the type version to use in this resource
     * operation. If you do not specify a resource version, CloudFormation uses the
     * default version.</p>
     */
    inline const Aws::String& GetTypeVersionId() const { return m_typeVersionId; }
    inline bool TypeVersionIdHasBeenSet() const { return m_typeVersionIdHasBeenSet; }
    template<typename TypeVersionIdT = Aws::String>
    void SetTypeVersionId(TypeVersionIdT&& value) { m_typeVersionIdHasBeenSet = true; m_typeVersionId = std::forward<TypeVersionIdT>(value); }
    template<typename TypeVersionIdT = Aws::String>
    CreateResourceRequest& WithTypeVersionId(TypeVersionIdT&& value) { SetTypeVersionId(std::forward<TypeVersionIdT>(value)); return *this;}
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
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateResourceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier to ensure the idempotency of the resource request. As a
     * best practice, specify this token to ensure idempotency, so that Amazon Web
     * Services Cloud Control API can accurately distinguish between request retries
     * and new resource requests. You might retry a resource request to ensure that it
     * was successfully received.</p> <p>A client token is valid for 36 hours once
     * used. After that, a resource request with the same client token is treated as a
     * new request.</p> <p>If you do not specify a client token, one is generated for
     * inclusion in the request.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations.html#resource-operations-idempotency">Ensuring
     * resource operation requests are unique</a> in the <i>Amazon Web Services Cloud
     * Control API User Guide</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateResourceRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structured data format representing the desired state of the resource,
     * consisting of that resource's properties and their desired values.</p> 
     * <p>Cloud Control API currently supports JSON as a structured data format.</p>
     *  <p>Specify the desired state as one of the following:</p> <ul> <li> <p>A
     * JSON blob</p> </li> <li> <p>A local path containing the desired state in JSON
     * data format</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/resource-operations-create.html#resource-operations-create-desiredstate">Composing
     * the desired state of the resource</a> in the <i>Amazon Web Services Cloud
     * Control API User Guide</i>.</p> <p>For more information about the properties of
     * a specific resource, refer to the related topic for the resource in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Resource
     * and property types reference</a> in the <i>CloudFormation Users Guide</i>.</p>
     */
    inline const Aws::String& GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    template<typename DesiredStateT = Aws::String>
    void SetDesiredState(DesiredStateT&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::forward<DesiredStateT>(value); }
    template<typename DesiredStateT = Aws::String>
    CreateResourceRequest& WithDesiredState(DesiredStateT&& value) { SetDesiredState(std::forward<DesiredStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_typeVersionId;
    bool m_typeVersionIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_desiredState;
    bool m_desiredStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
