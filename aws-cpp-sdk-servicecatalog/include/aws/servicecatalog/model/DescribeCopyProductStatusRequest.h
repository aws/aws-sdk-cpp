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
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API DescribeCopyProductStatusRequest : public ServiceCatalogRequest
  {
  public:
    DescribeCopyProductStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCopyProductStatus"; }

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
    inline DescribeCopyProductStatusRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeCopyProductStatusRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DescribeCopyProductStatusRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline const Aws::String& GetCopyProductToken() const{ return m_copyProductToken; }

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline bool CopyProductTokenHasBeenSet() const { return m_copyProductTokenHasBeenSet; }

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline void SetCopyProductToken(const Aws::String& value) { m_copyProductTokenHasBeenSet = true; m_copyProductToken = value; }

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline void SetCopyProductToken(Aws::String&& value) { m_copyProductTokenHasBeenSet = true; m_copyProductToken = std::move(value); }

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline void SetCopyProductToken(const char* value) { m_copyProductTokenHasBeenSet = true; m_copyProductToken.assign(value); }

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline DescribeCopyProductStatusRequest& WithCopyProductToken(const Aws::String& value) { SetCopyProductToken(value); return *this;}

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline DescribeCopyProductStatusRequest& WithCopyProductToken(Aws::String&& value) { SetCopyProductToken(std::move(value)); return *this;}

    /**
     * <p>The token for the copy product operation. This token is returned by
     * <a>CopyProduct</a>.</p>
     */
    inline DescribeCopyProductStatusRequest& WithCopyProductToken(const char* value) { SetCopyProductToken(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_copyProductToken;
    bool m_copyProductTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
