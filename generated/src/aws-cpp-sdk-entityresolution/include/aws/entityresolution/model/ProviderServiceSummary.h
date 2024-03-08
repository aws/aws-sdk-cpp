/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/ServiceType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>A list of <code>ProviderService</code> objects, each of which contain the
   * fields <code>providerName</code>, <code>providerServiceArn</code>,
   * <code>providerServiceName</code>, and
   * <code>providerServiceType</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderServiceSummary">AWS
   * API Reference</a></p>
   */
  class ProviderServiceSummary
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderServiceSummary();
    AWS_ENTITYRESOLUTION_API ProviderServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ProviderServiceSummary& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline ProviderServiceSummary& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the provider. This name is typically the company name.</p>
     */
    inline ProviderServiceSummary& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const{ return m_providerServiceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline bool ProviderServiceArnHasBeenSet() const { return m_providerServiceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline void SetProviderServiceArn(const Aws::String& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline void SetProviderServiceArn(Aws::String&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline void SetProviderServiceArn(const char* value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceArn(const Aws::String& value) { SetProviderServiceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceArn(Aws::String&& value) { SetProviderServiceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>providerService</code>.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceArn(const char* value) { SetProviderServiceArn(value); return *this;}


    /**
     * <p>The display name of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceDisplayName() const{ return m_providerServiceDisplayName; }

    /**
     * <p>The display name of the provider service.</p>
     */
    inline bool ProviderServiceDisplayNameHasBeenSet() const { return m_providerServiceDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the provider service.</p>
     */
    inline void SetProviderServiceDisplayName(const Aws::String& value) { m_providerServiceDisplayNameHasBeenSet = true; m_providerServiceDisplayName = value; }

    /**
     * <p>The display name of the provider service.</p>
     */
    inline void SetProviderServiceDisplayName(Aws::String&& value) { m_providerServiceDisplayNameHasBeenSet = true; m_providerServiceDisplayName = std::move(value); }

    /**
     * <p>The display name of the provider service.</p>
     */
    inline void SetProviderServiceDisplayName(const char* value) { m_providerServiceDisplayNameHasBeenSet = true; m_providerServiceDisplayName.assign(value); }

    /**
     * <p>The display name of the provider service.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceDisplayName(const Aws::String& value) { SetProviderServiceDisplayName(value); return *this;}

    /**
     * <p>The display name of the provider service.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceDisplayName(Aws::String&& value) { SetProviderServiceDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the provider service.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceDisplayName(const char* value) { SetProviderServiceDisplayName(value); return *this;}


    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline const Aws::String& GetProviderServiceName() const{ return m_providerServiceName; }

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline bool ProviderServiceNameHasBeenSet() const { return m_providerServiceNameHasBeenSet; }

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline void SetProviderServiceName(const Aws::String& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = value; }

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline void SetProviderServiceName(Aws::String&& value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName = std::move(value); }

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline void SetProviderServiceName(const char* value) { m_providerServiceNameHasBeenSet = true; m_providerServiceName.assign(value); }

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceName(const Aws::String& value) { SetProviderServiceName(value); return *this;}

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceName(Aws::String&& value) { SetProviderServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the product that the provider service provides.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceName(const char* value) { SetProviderServiceName(value); return *this;}


    /**
     * <p>The type of provider service.</p>
     */
    inline const ServiceType& GetProviderServiceType() const{ return m_providerServiceType; }

    /**
     * <p>The type of provider service.</p>
     */
    inline bool ProviderServiceTypeHasBeenSet() const { return m_providerServiceTypeHasBeenSet; }

    /**
     * <p>The type of provider service.</p>
     */
    inline void SetProviderServiceType(const ServiceType& value) { m_providerServiceTypeHasBeenSet = true; m_providerServiceType = value; }

    /**
     * <p>The type of provider service.</p>
     */
    inline void SetProviderServiceType(ServiceType&& value) { m_providerServiceTypeHasBeenSet = true; m_providerServiceType = std::move(value); }

    /**
     * <p>The type of provider service.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceType(const ServiceType& value) { SetProviderServiceType(value); return *this;}

    /**
     * <p>The type of provider service.</p>
     */
    inline ProviderServiceSummary& WithProviderServiceType(ServiceType&& value) { SetProviderServiceType(std::move(value)); return *this;}

  private:

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;

    Aws::String m_providerServiceDisplayName;
    bool m_providerServiceDisplayNameHasBeenSet = false;

    Aws::String m_providerServiceName;
    bool m_providerServiceNameHasBeenSet = false;

    ServiceType m_providerServiceType;
    bool m_providerServiceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
