/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/DomainAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Amplify
{
namespace Model
{
  class DeleteDomainAssociationResult
  {
  public:
    AWS_AMPLIFY_API DeleteDomainAssociationResult();
    AWS_AMPLIFY_API DeleteDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API DeleteDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DomainAssociation& GetDomainAssociation() const{ return m_domainAssociation; }

    
    inline void SetDomainAssociation(const DomainAssociation& value) { m_domainAssociation = value; }

    
    inline void SetDomainAssociation(DomainAssociation&& value) { m_domainAssociation = std::move(value); }

    
    inline DeleteDomainAssociationResult& WithDomainAssociation(const DomainAssociation& value) { SetDomainAssociation(value); return *this;}

    
    inline DeleteDomainAssociationResult& WithDomainAssociation(DomainAssociation&& value) { SetDomainAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDomainAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDomainAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDomainAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainAssociation m_domainAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
