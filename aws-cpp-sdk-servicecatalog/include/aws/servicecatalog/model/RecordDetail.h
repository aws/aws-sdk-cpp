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
#include <aws/servicecatalog/model/RecordStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/RecordError.h>
#include <aws/servicecatalog/model/RecordTag.h>
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
   * <p>Information about a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RecordDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API RecordDetail
  {
  public:
    RecordDetail();
    RecordDetail(Aws::Utils::Json::JsonView jsonValue);
    RecordDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the record.</p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }

    /**
     * <p>The identifier of the record.</p>
     */
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }

    /**
     * <p>The identifier of the record.</p>
     */
    inline void SetRecordId(const Aws::String& value) { m_recordIdHasBeenSet = true; m_recordId = value; }

    /**
     * <p>The identifier of the record.</p>
     */
    inline void SetRecordId(Aws::String&& value) { m_recordIdHasBeenSet = true; m_recordId = std::move(value); }

    /**
     * <p>The identifier of the record.</p>
     */
    inline void SetRecordId(const char* value) { m_recordIdHasBeenSet = true; m_recordId.assign(value); }

    /**
     * <p>The identifier of the record.</p>
     */
    inline RecordDetail& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}

    /**
     * <p>The identifier of the record.</p>
     */
    inline RecordDetail& WithRecordId(Aws::String&& value) { SetRecordId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the record.</p>
     */
    inline RecordDetail& WithRecordId(const char* value) { SetRecordId(value); return *this;}


    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline RecordDetail& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline RecordDetail& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline RecordDetail& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}


    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline const RecordStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline void SetStatus(const RecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline void SetStatus(RecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline RecordDetail& WithStatus(const RecordStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline RecordDetail& WithStatus(RecordStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline RecordDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline RecordDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time when the record was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The time when the record was last updated.</p>
     */
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }

    /**
     * <p>The time when the record was last updated.</p>
     */
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The time when the record was last updated.</p>
     */
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }

    /**
     * <p>The time when the record was last updated.</p>
     */
    inline RecordDetail& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The time when the record was last updated.</p>
     */
    inline RecordDetail& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductType() const{ return m_provisionedProductType; }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline bool ProvisionedProductTypeHasBeenSet() const { return m_provisionedProductTypeHasBeenSet; }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline void SetProvisionedProductType(const Aws::String& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = value; }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline void SetProvisionedProductType(Aws::String&& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = std::move(value); }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline void SetProvisionedProductType(const char* value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType.assign(value); }

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline RecordDetail& WithProvisionedProductType(const Aws::String& value) { SetProvisionedProductType(value); return *this;}

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline RecordDetail& WithProvisionedProductType(Aws::String&& value) { SetProvisionedProductType(std::move(value)); return *this;}

    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code> and <code>CFN_STACKSET</code>.</p>
     */
    inline RecordDetail& WithProvisionedProductType(const char* value) { SetProvisionedProductType(value); return *this;}


    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRecordType() const{ return m_recordType; }

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline void SetRecordType(const Aws::String& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline void SetRecordType(Aws::String&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::move(value); }

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline void SetRecordType(const char* value) { m_recordTypeHasBeenSet = true; m_recordType.assign(value); }

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline RecordDetail& WithRecordType(const Aws::String& value) { SetRecordType(value); return *this;}

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline RecordDetail& WithRecordType(Aws::String&& value) { SetRecordType(std::move(value)); return *this;}

    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline RecordDetail& WithRecordType(const char* value) { SetRecordType(value); return *this;}


    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline RecordDetail& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline RecordDetail& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline RecordDetail& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline RecordDetail& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline RecordDetail& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline RecordDetail& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline RecordDetail& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline RecordDetail& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline RecordDetail& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The path identifier.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The path identifier.</p>
     */
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }

    /**
     * <p>The path identifier.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The path identifier.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }

    /**
     * <p>The path identifier.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The path identifier.</p>
     */
    inline RecordDetail& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The path identifier.</p>
     */
    inline RecordDetail& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}

    /**
     * <p>The path identifier.</p>
     */
    inline RecordDetail& WithPathId(const char* value) { SetPathId(value); return *this;}


    /**
     * <p>The errors that occurred.</p>
     */
    inline const Aws::Vector<RecordError>& GetRecordErrors() const{ return m_recordErrors; }

    /**
     * <p>The errors that occurred.</p>
     */
    inline bool RecordErrorsHasBeenSet() const { return m_recordErrorsHasBeenSet; }

    /**
     * <p>The errors that occurred.</p>
     */
    inline void SetRecordErrors(const Aws::Vector<RecordError>& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = value; }

    /**
     * <p>The errors that occurred.</p>
     */
    inline void SetRecordErrors(Aws::Vector<RecordError>&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = std::move(value); }

    /**
     * <p>The errors that occurred.</p>
     */
    inline RecordDetail& WithRecordErrors(const Aws::Vector<RecordError>& value) { SetRecordErrors(value); return *this;}

    /**
     * <p>The errors that occurred.</p>
     */
    inline RecordDetail& WithRecordErrors(Aws::Vector<RecordError>&& value) { SetRecordErrors(std::move(value)); return *this;}

    /**
     * <p>The errors that occurred.</p>
     */
    inline RecordDetail& AddRecordErrors(const RecordError& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.push_back(value); return *this; }

    /**
     * <p>The errors that occurred.</p>
     */
    inline RecordDetail& AddRecordErrors(RecordError&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<RecordTag>& GetRecordTags() const{ return m_recordTags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool RecordTagsHasBeenSet() const { return m_recordTagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetRecordTags(const Aws::Vector<RecordTag>& value) { m_recordTagsHasBeenSet = true; m_recordTags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetRecordTags(Aws::Vector<RecordTag>&& value) { m_recordTagsHasBeenSet = true; m_recordTags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline RecordDetail& WithRecordTags(const Aws::Vector<RecordTag>& value) { SetRecordTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline RecordDetail& WithRecordTags(Aws::Vector<RecordTag>&& value) { SetRecordTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline RecordDetail& AddRecordTags(const RecordTag& value) { m_recordTagsHasBeenSet = true; m_recordTags.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline RecordDetail& AddRecordTags(RecordTag&& value) { m_recordTagsHasBeenSet = true; m_recordTags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet;

    RecordStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet;

    Aws::String m_provisionedProductType;
    bool m_provisionedProductTypeHasBeenSet;

    Aws::String m_recordType;
    bool m_recordTypeHasBeenSet;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet;

    Aws::Vector<RecordError> m_recordErrors;
    bool m_recordErrorsHasBeenSet;

    Aws::Vector<RecordTag> m_recordTags;
    bool m_recordTagsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
