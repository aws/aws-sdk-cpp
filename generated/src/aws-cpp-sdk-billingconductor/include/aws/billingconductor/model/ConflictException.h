/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ConflictExceptionReason.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>You can cause an inconsistent state by updating or deleting a resource.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_BILLINGCONDUCTOR_API ConflictException();
    AWS_BILLINGCONDUCTOR_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the resource in use. </p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Type of the resource in use. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of the resource in use. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of the resource in use. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of the resource in use. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of the resource in use. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Type of the resource in use. </p>
     */
    inline ConflictException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of the resource in use. </p>
     */
    inline ConflictException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Type of the resource in use. </p>
     */
    inline ConflictException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Reason for the inconsistent state. </p>
     */
    inline const ConflictExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>Reason for the inconsistent state. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Reason for the inconsistent state. </p>
     */
    inline void SetReason(const ConflictExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Reason for the inconsistent state. </p>
     */
    inline void SetReason(ConflictExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Reason for the inconsistent state. </p>
     */
    inline ConflictException& WithReason(const ConflictExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>Reason for the inconsistent state. </p>
     */
    inline ConflictException& WithReason(ConflictExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    ConflictExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
