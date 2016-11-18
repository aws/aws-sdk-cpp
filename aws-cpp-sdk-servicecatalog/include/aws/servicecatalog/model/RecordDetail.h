/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The full details of a specific ProvisionedProduct object.</p>
   */
  class AWS_SERVICECATALOG_API RecordDetail
  {
  public:
    RecordDetail();
    RecordDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    RecordDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline void SetRecordId(const Aws::String& value) { m_recordIdHasBeenSet = true; m_recordId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline void SetRecordId(Aws::String&& value) { m_recordIdHasBeenSet = true; m_recordId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline void SetRecordId(const char* value) { m_recordIdHasBeenSet = true; m_recordId.assign(value); }

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline RecordDetail& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline RecordDetail& WithRecordId(Aws::String&& value) { SetRecordId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object record.</p>
     */
    inline RecordDetail& WithRecordId(const char* value) { SetRecordId(value); return *this;}

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}

    /**
     * <p>The status of the ProvisionedProduct object.</p>
     */
    inline const RecordStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ProvisionedProduct object.</p>
     */
    inline void SetStatus(const RecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ProvisionedProduct object.</p>
     */
    inline void SetStatus(RecordStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithStatus(const RecordStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithStatus(RecordStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline RecordDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline RecordDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time when the record for the ProvisionedProduct object was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The time when the record for the ProvisionedProduct object was last
     * updated.</p>
     */
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The time when the record for the ProvisionedProduct object was last
     * updated.</p>
     */
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The time when the record for the ProvisionedProduct object was last
     * updated.</p>
     */
    inline RecordDetail& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The time when the record for the ProvisionedProduct object was last
     * updated.</p>
     */
    inline RecordDetail& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetProvisionedProductType() const{ return m_provisionedProductType; }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductType(const Aws::String& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = value; }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductType(Aws::String&& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = value; }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductType(const char* value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType.assign(value); }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductType(const Aws::String& value) { SetProvisionedProductType(value); return *this;}

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductType(Aws::String&& value) { SetProvisionedProductType(value); return *this;}

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductType(const char* value) { SetProvisionedProductType(value); return *this;}

    /**
     * <p>The record type for this record.</p>
     */
    inline const Aws::String& GetRecordType() const{ return m_recordType; }

    /**
     * <p>The record type for this record.</p>
     */
    inline void SetRecordType(const Aws::String& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * <p>The record type for this record.</p>
     */
    inline void SetRecordType(Aws::String&& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }

    /**
     * <p>The record type for this record.</p>
     */
    inline void SetRecordType(const char* value) { m_recordTypeHasBeenSet = true; m_recordType.assign(value); }

    /**
     * <p>The record type for this record.</p>
     */
    inline RecordDetail& WithRecordType(const Aws::String& value) { SetRecordType(value); return *this;}

    /**
     * <p>The record type for this record.</p>
     */
    inline RecordDetail& WithRecordType(Aws::String&& value) { SetRecordType(value); return *this;}

    /**
     * <p>The record type for this record.</p>
     */
    inline RecordDetail& WithRecordType(const char* value) { SetRecordType(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline RecordDetail& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = value; }

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
    inline RecordDetail& WithProductId(Aws::String&& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline RecordDetail& WithProductId(const char* value) { SetProductId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline RecordDetail& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline RecordDetail& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The provisioning artifact identifier for this product.</p>
     */
    inline RecordDetail& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline RecordDetail& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline RecordDetail& WithPathId(Aws::String&& value) { SetPathId(value); return *this;}

    /**
     * <p>The identifier of the path for this product's provisioning.</p>
     */
    inline RecordDetail& WithPathId(const char* value) { SetPathId(value); return *this;}

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline const Aws::Vector<RecordError>& GetRecordErrors() const{ return m_recordErrors; }

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline void SetRecordErrors(const Aws::Vector<RecordError>& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = value; }

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline void SetRecordErrors(Aws::Vector<RecordError>&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = value; }

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline RecordDetail& WithRecordErrors(const Aws::Vector<RecordError>& value) { SetRecordErrors(value); return *this;}

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline RecordDetail& WithRecordErrors(Aws::Vector<RecordError>&& value) { SetRecordErrors(value); return *this;}

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline RecordDetail& AddRecordErrors(const RecordError& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.push_back(value); return *this; }

    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline RecordDetail& AddRecordErrors(RecordError&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.push_back(value); return *this; }

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline const Aws::Vector<RecordTag>& GetRecordTags() const{ return m_recordTags; }

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline void SetRecordTags(const Aws::Vector<RecordTag>& value) { m_recordTagsHasBeenSet = true; m_recordTags = value; }

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline void SetRecordTags(Aws::Vector<RecordTag>&& value) { m_recordTagsHasBeenSet = true; m_recordTags = value; }

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline RecordDetail& WithRecordTags(const Aws::Vector<RecordTag>& value) { SetRecordTags(value); return *this;}

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline RecordDetail& WithRecordTags(Aws::Vector<RecordTag>&& value) { SetRecordTags(value); return *this;}

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline RecordDetail& AddRecordTags(const RecordTag& value) { m_recordTagsHasBeenSet = true; m_recordTags.push_back(value); return *this; }

    /**
     * <p>List of tags associated with this record.</p>
     */
    inline RecordDetail& AddRecordTags(RecordTag&& value) { m_recordTagsHasBeenSet = true; m_recordTags.push_back(value); return *this; }

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
