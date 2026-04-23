/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a provisioned product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisionedProductDetail
  {
  public:
    ProvisionedProductDetail();
    ProvisionedProductDetail(Aws::Utils::Json::JsonView jsonValue);
    ProvisionedProductDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline ProvisionedProductDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline ProvisionedProductDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline ProvisionedProductDetail& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline const ProvisionedProductStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline void SetStatus(const ProvisionedProductStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline void SetStatus(ProvisionedProductStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline ProvisionedProductDetail& WithStatus(const ProvisionedProductStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline ProvisionedProductDetail& WithStatus(ProvisionedProductStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline ProvisionedProductDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisionedProductDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisionedProductDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline ProvisionedProductDetail& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline ProvisionedProductDetail& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline ProvisionedProductDetail& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline const Aws::String& GetLastRecordId() const{ return m_lastRecordId; }

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline bool LastRecordIdHasBeenSet() const { return m_lastRecordIdHasBeenSet; }

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline void SetLastRecordId(const Aws::String& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = value; }

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline void SetLastRecordId(Aws::String&& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = std::move(value); }

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline void SetLastRecordId(const char* value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId.assign(value); }

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline ProvisionedProductDetail& WithLastRecordId(const Aws::String& value) { SetLastRecordId(value); return *this;}

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline ProvisionedProductDetail& WithLastRecordId(Aws::String&& value) { SetLastRecordId(std::move(value)); return *this;}

    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline ProvisionedProductDetail& WithLastRecordId(const char* value) { SetLastRecordId(value); return *this;}


    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline ProvisionedProductDetail& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline ProvisionedProductDetail& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline ProvisionedProductDetail& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline ProvisionedProductDetail& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline ProvisionedProductDetail& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline ProvisionedProductDetail& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    ProvisionedProductStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    Aws::String m_lastRecordId;
    bool m_lastRecordIdHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
