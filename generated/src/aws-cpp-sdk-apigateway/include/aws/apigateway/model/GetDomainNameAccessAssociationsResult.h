/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/DomainNameAccessAssociation.h>
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
namespace APIGateway
{
namespace Model
{
  class GetDomainNameAccessAssociationsResult
  {
  public:
    AWS_APIGATEWAY_API GetDomainNameAccessAssociationsResult();
    AWS_APIGATEWAY_API GetDomainNameAccessAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetDomainNameAccessAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline void SetPosition(const Aws::String& value) { m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_position.assign(value); }
    inline GetDomainNameAccessAssociationsResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline GetDomainNameAccessAssociationsResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline GetDomainNameAccessAssociationsResult& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current page of elements from this collection. </p>
     */
    inline const Aws::Vector<DomainNameAccessAssociation>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DomainNameAccessAssociation>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DomainNameAccessAssociation>&& value) { m_items = std::move(value); }
    inline GetDomainNameAccessAssociationsResult& WithItems(const Aws::Vector<DomainNameAccessAssociation>& value) { SetItems(value); return *this;}
    inline GetDomainNameAccessAssociationsResult& WithItems(Aws::Vector<DomainNameAccessAssociation>&& value) { SetItems(std::move(value)); return *this;}
    inline GetDomainNameAccessAssociationsResult& AddItems(const DomainNameAccessAssociation& value) { m_items.push_back(value); return *this; }
    inline GetDomainNameAccessAssociationsResult& AddItems(DomainNameAccessAssociation&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDomainNameAccessAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDomainNameAccessAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDomainNameAccessAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_position;

    Aws::Vector<DomainNameAccessAssociation> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
