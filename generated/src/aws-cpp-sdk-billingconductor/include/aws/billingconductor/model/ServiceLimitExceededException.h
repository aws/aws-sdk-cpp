/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The request would cause a service limit to exceed. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ServiceLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceLimitExceededException
  {
  public:
    AWS_BILLINGCONDUCTOR_API ServiceLimitExceededException();
    AWS_BILLINGCONDUCTOR_API ServiceLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ServiceLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline ServiceLimitExceededException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline ServiceLimitExceededException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the resource affected. </p>
     */
    inline ServiceLimitExceededException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Type of the resource affected. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Type of the resource affected. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Type of the resource affected. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Type of the resource affected. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Type of the resource affected. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Type of the resource affected. </p>
     */
    inline ServiceLimitExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Type of the resource affected. </p>
     */
    inline ServiceLimitExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Type of the resource affected. </p>
     */
    inline ServiceLimitExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline const Aws::String& GetLimitCode() const{ return m_limitCode; }

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline bool LimitCodeHasBeenSet() const { return m_limitCodeHasBeenSet; }

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline void SetLimitCode(const Aws::String& value) { m_limitCodeHasBeenSet = true; m_limitCode = value; }

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline void SetLimitCode(Aws::String&& value) { m_limitCodeHasBeenSet = true; m_limitCode = std::move(value); }

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline void SetLimitCode(const char* value) { m_limitCodeHasBeenSet = true; m_limitCode.assign(value); }

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline ServiceLimitExceededException& WithLimitCode(const Aws::String& value) { SetLimitCode(value); return *this;}

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline ServiceLimitExceededException& WithLimitCode(Aws::String&& value) { SetLimitCode(std::move(value)); return *this;}

    /**
     * <p>The unique code identifier of the service limit that is being exceeded. </p>
     */
    inline ServiceLimitExceededException& WithLimitCode(const char* value) { SetLimitCode(value); return *this;}


    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline ServiceLimitExceededException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline ServiceLimitExceededException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The unique code for the service of the limit that is being exceeded. </p>
     */
    inline ServiceLimitExceededException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_limitCode;
    bool m_limitCodeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
