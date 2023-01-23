/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/DomainAssociation.h>
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
   * <p> The result structure for the create domain association request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateDomainAssociationResult">AWS
   * API Reference</a></p>
   */
  class CreateDomainAssociationResult
  {
  public:
    AWS_AMPLIFY_API CreateDomainAssociationResult();
    AWS_AMPLIFY_API CreateDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API CreateDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateDomainAssociationResult& WithDomainAssociation(const DomainAssociation& value) { SetDomainAssociation(value); return *this;}

    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline CreateDomainAssociationResult& WithDomainAssociation(DomainAssociation&& value) { SetDomainAssociation(std::move(value)); return *this;}

  private:

    DomainAssociation m_domainAssociation;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
