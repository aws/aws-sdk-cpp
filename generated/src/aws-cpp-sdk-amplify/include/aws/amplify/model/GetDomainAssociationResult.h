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
  /**
   * <p> The result structure for the get domain association request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociationResult">AWS
   * API Reference</a></p>
   */
  class GetDomainAssociationResult
  {
  public:
    AWS_AMPLIFY_API GetDomainAssociationResult();
    AWS_AMPLIFY_API GetDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline const DomainAssociation& GetDomainAssociation() const{ return m_domainAssociation; }

    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline void SetDomainAssociation(const DomainAssociation& value) { m_domainAssociation = value; }

    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline void SetDomainAssociation(DomainAssociation&& value) { m_domainAssociation = std::move(value); }

    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline GetDomainAssociationResult& WithDomainAssociation(const DomainAssociation& value) { SetDomainAssociation(value); return *this;}

    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline GetDomainAssociationResult& WithDomainAssociation(DomainAssociation&& value) { SetDomainAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDomainAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDomainAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDomainAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainAssociation m_domainAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
