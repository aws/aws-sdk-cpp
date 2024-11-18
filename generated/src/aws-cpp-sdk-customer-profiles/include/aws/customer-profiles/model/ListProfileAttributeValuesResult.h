/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/AttributeValueItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{
  class ListProfileAttributeValuesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileAttributeValuesResult();
    AWS_CUSTOMERPROFILES_API ListProfileAttributeValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListProfileAttributeValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline ListProfileAttributeValuesResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ListProfileAttributeValuesResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ListProfileAttributeValuesResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute name.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeName.assign(value); }
    inline ListProfileAttributeValuesResult& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline ListProfileAttributeValuesResult& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline ListProfileAttributeValuesResult& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The items returned as part of the response.</p>
     */
    inline const Aws::Vector<AttributeValueItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<AttributeValueItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<AttributeValueItem>&& value) { m_items = std::move(value); }
    inline ListProfileAttributeValuesResult& WithItems(const Aws::Vector<AttributeValueItem>& value) { SetItems(value); return *this;}
    inline ListProfileAttributeValuesResult& WithItems(Aws::Vector<AttributeValueItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListProfileAttributeValuesResult& AddItems(const AttributeValueItem& value) { m_items.push_back(value); return *this; }
    inline ListProfileAttributeValuesResult& AddItems(AttributeValueItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status code for the response.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCode = value; }
    inline ListProfileAttributeValuesResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProfileAttributeValuesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProfileAttributeValuesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProfileAttributeValuesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_attributeName;

    Aws::Vector<AttributeValueItem> m_items;

    int m_statusCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
