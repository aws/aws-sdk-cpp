/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class GetProviderServiceRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API GetProviderServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProviderService"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline GetProviderServiceRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline GetProviderServiceRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline GetProviderServiceRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline const Aws::String& GetProviderServiceName() const{ return m_providerServiceName; }

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline bool ProviderServiceNameHasBeenSet() const { return m_providerServiceNameHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline void SetProviderServiceName(const Aws::String& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline void SetProviderServiceName(Aws::String&& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline void SetProviderServiceName(const char* value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline GetProviderServiceRequest& WithProviderServiceName(const Aws::String& value) { SetProviderServiceName(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline GetProviderServiceRequest& WithProviderServiceName(Aws::String&& value) { SetProviderServiceName(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the product that the provider service
     * provides.</p>
     */
    inline GetProviderServiceRequest& WithProviderServiceName(const char* value) { SetProviderServiceName(value); return *this;}

  private:

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_providerServiceName;
    bool m_providerServiceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
