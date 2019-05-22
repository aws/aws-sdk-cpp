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
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/PropertyKey.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API UpdateProvisionedProductPropertiesRequest : public ServiceCatalogRequest
  {
  public:
    UpdateProvisionedProductPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProvisionedProductProperties"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


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
    inline UpdateProvisionedProductPropertiesRequest& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}


    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline const Aws::Map<PropertyKey, Aws::String>& GetProvisionedProductProperties() const{ return m_provisionedProductProperties; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline bool ProvisionedProductPropertiesHasBeenSet() const { return m_provisionedProductPropertiesHasBeenSet; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline void SetProvisionedProductProperties(const Aws::Map<PropertyKey, Aws::String>& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties = value; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline void SetProvisionedProductProperties(Aws::Map<PropertyKey, Aws::String>&& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties = std::move(value); }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithProvisionedProductProperties(const Aws::Map<PropertyKey, Aws::String>& value) { SetProvisionedProductProperties(value); return *this;}

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithProvisionedProductProperties(Aws::Map<PropertyKey, Aws::String>&& value) { SetProvisionedProductProperties(std::move(value)); return *this;}

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(const PropertyKey& key, const Aws::String& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(key, value); return *this; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(PropertyKey&& key, const Aws::String& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(const PropertyKey& key, Aws::String&& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(PropertyKey&& key, Aws::String&& value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(PropertyKey&& key, const char* value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains the provisioned product properties to be updated.</p>
     * <p>The <code>OWNER</code> key only accepts user ARNs. The owner is the user that
     * is allowed to see, update, terminate, and execute service actions in the
     * provisioned product.</p> <p>The administrator can change the owner of a
     * provisioned product to another IAM user within the same account. Both end user
     * owners and administrators can see ownership history of the provisioned product
     * using the <code>ListRecordHistory</code> API. The new owner can describe all
     * past records for the provisioned product using the <code>DescribeRecord</code>
     * API. The previous owner can no longer use <code>DescribeRecord</code>, but can
     * still see the product's history from when he was an owner using
     * <code>ListRecordHistory</code>.</p> <p>If a provisioned product ownership is
     * assigned to an end user, they can see and perform any action through the API or
     * Service Catalog console such as update, terminate, and execute service actions.
     * If an end user provisions a product and the owner is updated to someone else,
     * they will no longer be able to see or perform any actions through API or the
     * Service Catalog console on that provisioned product.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& AddProvisionedProductProperties(const PropertyKey& key, const char* value) { m_provisionedProductPropertiesHasBeenSet = true; m_provisionedProductProperties.emplace(key, value); return *this; }


    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token that uniquely identifies the provisioning product
     * update request.</p>
     */
    inline UpdateProvisionedProductPropertiesRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet;

    Aws::Map<PropertyKey, Aws::String> m_provisionedProductProperties;
    bool m_provisionedProductPropertiesHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
