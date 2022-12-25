/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   * DescribeProvisionedProductAPI input structure. AcceptLanguage - [Optional] The
   * language code for localization. Id - [Optional] The provisioned product
   * identifier. Name - [Optional] Another provisioned product identifier. Customers
   * must provide either Id or Name.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProductInput">AWS
   * API Reference</a></p>
   */
  class DescribeProvisionedProductRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribeProvisionedProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProvisionedProduct"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DescribeProvisionedProductRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeProvisionedProductRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeProvisionedProductRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline DescribeProvisionedProductRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline DescribeProvisionedProductRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The provisioned product identifier. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline DescribeProvisionedProductRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline DescribeProvisionedProductRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline DescribeProvisionedProductRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioned product. You must provide the name or ID, but not
     * both.</p> <p>If you do not provide a name or ID, or you provide both name and
     * ID, an <code>InvalidParametersException</code> will occur.</p>
     */
    inline DescribeProvisionedProductRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
