﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Operation
  {
  public:
    AWS_LIGHTSAIL_API Operation();
    AWS_LIGHTSAIL_API Operation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Operation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the operation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Operation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Operation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Operation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline Operation& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline Operation& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline Operation& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline Operation& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline Operation& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the operation was initialized
     * (<code>1479816991.349</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Operation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Operation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region and Availability Zone.</p>
     */
    inline const ResourceLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const ResourceLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(ResourceLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Operation& WithLocation(const ResourceLocation& value) { SetLocation(value); return *this;}
    inline Operation& WithLocation(ResourceLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether the operation is terminal.</p>
     */
    inline bool GetIsTerminal() const{ return m_isTerminal; }
    inline bool IsTerminalHasBeenSet() const { return m_isTerminalHasBeenSet; }
    inline void SetIsTerminal(bool value) { m_isTerminalHasBeenSet = true; m_isTerminal = value; }
    inline Operation& WithIsTerminal(bool value) { SetIsTerminal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the operation (<code>Debian-1GB-Ohio-1</code>).</p>
     */
    inline const Aws::String& GetOperationDetails() const{ return m_operationDetails; }
    inline bool OperationDetailsHasBeenSet() const { return m_operationDetailsHasBeenSet; }
    inline void SetOperationDetails(const Aws::String& value) { m_operationDetailsHasBeenSet = true; m_operationDetails = value; }
    inline void SetOperationDetails(Aws::String&& value) { m_operationDetailsHasBeenSet = true; m_operationDetails = std::move(value); }
    inline void SetOperationDetails(const char* value) { m_operationDetailsHasBeenSet = true; m_operationDetails.assign(value); }
    inline Operation& WithOperationDetails(const Aws::String& value) { SetOperationDetails(value); return *this;}
    inline Operation& WithOperationDetails(Aws::String&& value) { SetOperationDetails(std::move(value)); return *this;}
    inline Operation& WithOperationDetails(const char* value) { SetOperationDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation. </p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline Operation& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}
    inline Operation& WithOperationType(OperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation. </p>
     */
    inline const OperationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Operation& WithStatus(const OperationStatus& value) { SetStatus(value); return *this;}
    inline Operation& WithStatus(OperationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the status was changed (<code>1479816991.349</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStatusChangedAt() const{ return m_statusChangedAt; }
    inline bool StatusChangedAtHasBeenSet() const { return m_statusChangedAtHasBeenSet; }
    inline void SetStatusChangedAt(const Aws::Utils::DateTime& value) { m_statusChangedAtHasBeenSet = true; m_statusChangedAt = value; }
    inline void SetStatusChangedAt(Aws::Utils::DateTime&& value) { m_statusChangedAtHasBeenSet = true; m_statusChangedAt = std::move(value); }
    inline Operation& WithStatusChangedAt(const Aws::Utils::DateTime& value) { SetStatusChangedAt(value); return *this;}
    inline Operation& WithStatusChangedAt(Aws::Utils::DateTime&& value) { SetStatusChangedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline Operation& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline Operation& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline Operation& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error details.</p>
     */
    inline const Aws::String& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline void SetErrorDetails(const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails.assign(value); }
    inline Operation& WithErrorDetails(const Aws::String& value) { SetErrorDetails(value); return *this;}
    inline Operation& WithErrorDetails(Aws::String&& value) { SetErrorDetails(std::move(value)); return *this;}
    inline Operation& WithErrorDetails(const char* value) { SetErrorDetails(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    bool m_isTerminal;
    bool m_isTerminalHasBeenSet = false;

    Aws::String m_operationDetails;
    bool m_operationDetailsHasBeenSet = false;

    OperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    OperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_statusChangedAt;
    bool m_statusChangedAtHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
