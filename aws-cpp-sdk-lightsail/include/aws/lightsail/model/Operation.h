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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/OperationType.h>
#include <aws/lightsail/model/OperationStatus.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Operation">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API Operation
  {
  public:
    Operation();
    Operation(Aws::Utils::Json::JsonView jsonValue);
    Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the operation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the operation.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the operation.</p>
     */
    inline Operation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the operation.</p>
     */
    inline Operation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation.</p>
     */
    inline Operation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The resource name.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The resource name.</p>
     */
    inline Operation& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The resource name.</p>
     */
    inline Operation& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The resource name.</p>
     */
    inline Operation& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The resource type. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type. </p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type. </p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type. </p>
     */
    inline Operation& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type. </p>
     */
    inline Operation& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the operation was initialized (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the operation was initialized (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the operation was initialized (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the operation was initialized (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the operation was initialized (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline Operation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the operation was initialized (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline Operation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The region and Availability Zone.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The region and Availability Zone.</p>
     */
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The region and Availability Zone.</p>
     */
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The region and Availability Zone.</p>
     */
    inline Operation& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The region and Availability Zone.</p>
     */
    inline Operation& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>A Boolean value indicating whether the operation is terminal.</p>
     */
    inline bool GetIsTerminal() const{ return m_isTerminal; }

    /**
     * <p>A Boolean value indicating whether the operation is terminal.</p>
     */
    inline bool IsTerminalHasBeenSet() const { return m_isTerminalHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the operation is terminal.</p>
     */
    inline void SetIsTerminal(bool value) { m_isTerminalHasBeenSet = true; m_isTerminal = value; }

    /**
     * <p>A Boolean value indicating whether the operation is terminal.</p>
     */
    inline Operation& WithIsTerminal(bool value) { SetIsTerminal(value); return *this;}


    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline const Aws::String& GetOperationDetails() const{ return m_operationDetails; }

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline bool OperationDetailsHasBeenSet() const { return m_operationDetailsHasBeenSet; }

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline void SetOperationDetails(const Aws::String& value) { m_operationDetailsHasBeenSet = true; m_operationDetails = value; }

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline void SetOperationDetails(Aws::String&& value) { m_operationDetailsHasBeenSet = true; m_operationDetails = std::move(value); }

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline void SetOperationDetails(const char* value) { m_operationDetailsHasBeenSet = true; m_operationDetails.assign(value); }

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline Operation& WithOperationDetails(const Aws::String& value) { SetOperationDetails(value); return *this;}

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline Operation& WithOperationDetails(Aws::String&& value) { SetOperationDetails(std::move(value)); return *this;}

    /**
     * <p>Details about the operation (e.g., <code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline Operation& WithOperationDetails(const char* value) { SetOperationDetails(value); return *this;}


    /**
     * <p>The type of operation. </p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>The type of operation. </p>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * <p>The type of operation. </p>
     */
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>The type of operation. </p>
     */
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * <p>The type of operation. </p>
     */
    inline Operation& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>The type of operation. </p>
     */
    inline Operation& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}


    /**
     * <p>The status of the operation. </p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the operation. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the operation. </p>
     */
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the operation. </p>
     */
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the operation. </p>
     */
    inline Operation& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the operation. </p>
     */
    inline Operation& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the status was changed (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStatusChangedAt() const{ return m_statusChangedAt; }

    /**
     * <p>The timestamp when the status was changed (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline bool StatusChangedAtHasBeenSet() const { return m_statusChangedAtHasBeenSet; }

    /**
     * <p>The timestamp when the status was changed (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline void SetStatusChangedAt(const Aws::Utils::DateTime& value) { m_statusChangedAtHasBeenSet = true; m_statusChangedAt = value; }

    /**
     * <p>The timestamp when the status was changed (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline void SetStatusChangedAt(Aws::Utils::DateTime&& value) { m_statusChangedAtHasBeenSet = true; m_statusChangedAt = std::move(value); }

    /**
     * <p>The timestamp when the status was changed (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline Operation& WithStatusChangedAt(const Aws::Utils::DateTime& value) { SetStatusChangedAt(value); return *this;}

    /**
     * <p>The timestamp when the status was changed (e.g.,
     * <code>1479816991.349</code>).</p>
     */
    inline Operation& WithStatusChangedAt(Aws::Utils::DateTime&& value) { SetStatusChangedAt(std::move(value)); return *this;}


    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code.</p>
     */
    inline Operation& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline Operation& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline Operation& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error details.</p>
     */
    inline const Aws::String& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>The error details.</p>
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * <p>The error details.</p>
     */
    inline void SetErrorDetails(const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>The error details.</p>
     */
    inline void SetErrorDetails(Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * <p>The error details.</p>
     */
    inline void SetErrorDetails(const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails.assign(value); }

    /**
     * <p>The error details.</p>
     */
    inline Operation& WithErrorDetails(const Aws::String& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>The error details.</p>
     */
    inline Operation& WithErrorDetails(Aws::String&& value) { SetErrorDetails(std::move(value)); return *this;}

    /**
     * <p>The error details.</p>
     */
    inline Operation& WithErrorDetails(const char* value) { SetErrorDetails(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    ResourceLocation m_location;
    bool m_locationHasBeenSet;

    bool m_isTerminal;
    bool m_isTerminalHasBeenSet;

    Aws::String m_operationDetails;
    bool m_operationDetailsHasBeenSet;

    OperationType m_operationType;
    bool m_operationTypeHasBeenSet;

    OperationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_statusChangedAt;
    bool m_statusChangedAtHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorDetails;
    bool m_errorDetailsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
