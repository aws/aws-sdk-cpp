﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Occurs when the calling command attempts to exceed one of the service quotas,
   * for example trying to create a capability when you already have the maximum
   * number of capabilities allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_B2BI_API ServiceQuotaExceededException();
    AWS_B2BI_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ServiceQuotaExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ServiceQuotaExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID for the resource that exceeded the quota, which caused the
     * exception.</p>
     */
    inline ServiceQuotaExceededException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type (profile, partnership, transformer, or capability) that
     * exceeded the quota, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code responsible for exceeding the quota, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The quota that was exceeded, which caused the exception.</p>
     */
    inline ServiceQuotaExceededException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
