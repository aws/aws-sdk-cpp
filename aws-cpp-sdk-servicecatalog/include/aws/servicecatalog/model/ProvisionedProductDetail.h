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
   * <p>Detailed information about a ProvisionedProduct object.</p>
   */
  class AWS_SERVICECATALOG_API ProvisionedProductDetail
  {
  public:
    ProvisionedProductDetail();
    ProvisionedProductDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    ProvisionedProductDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The user-friendly name of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN associated with the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p>The type of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithType(const char* value) { SetType(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The current status of the ProvisionedProduct.</p>
     */
    inline const RecordStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the ProvisionedProduct.</p>
     */
    inline void SetStatus(const RecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the ProvisionedProduct.</p>
     */
    inline void SetStatus(RecordStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the ProvisionedProduct.</p>
     */
    inline ProvisionedProductDetail& WithStatus(const RecordStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the ProvisionedProduct.</p>
     */
    inline ProvisionedProductDetail& WithStatus(RecordStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline ProvisionedProductDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline ProvisionedProductDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The current status message of the ProvisionedProduct.</p>
     */
    inline ProvisionedProductDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

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
    inline ProvisionedProductDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC timestamp of the creation time.</p>
     */
    inline ProvisionedProductDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline ProvisionedProductDetail& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline ProvisionedProductDetail& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A token to disambiguate duplicate requests. You can create multiple resources
     * using the same input in multiple requests, provided that you also specify a
     * different idempotency token for each request.</p>
     */
    inline ProvisionedProductDetail& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline const Aws::String& GetLastRecordId() const{ return m_lastRecordId; }

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline void SetLastRecordId(const Aws::String& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = value; }

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline void SetLastRecordId(Aws::String&& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = value; }

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline void SetLastRecordId(const char* value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId.assign(value); }

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithLastRecordId(const Aws::String& value) { SetLastRecordId(value); return *this;}

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithLastRecordId(Aws::String&& value) { SetLastRecordId(value); return *this;}

    /**
     * <p>The record identifier of the last request performed on this
     * ProvisionedProduct object.</p>
     */
    inline ProvisionedProductDetail& WithLastRecordId(const char* value) { SetLastRecordId(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
    RecordStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;
    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
    Aws::String m_lastRecordId;
    bool m_lastRecordIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
