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
   * <p> Result structure for the update Domain Association request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociationResult">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API UpdateDomainAssociationResult
  {
  public:
    UpdateDomainAssociationResult();
    UpdateDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Domain Association structure. </p>
     */
    inline const DomainAssociation& GetDomainAssociation() const{ return m_domainAssociation; }

    /**
     * <p> Domain Association structure. </p>
     */
    inline void SetDomainAssociation(const DomainAssociation& value) { m_domainAssociation = value; }

    /**
     * <p> Domain Association structure. </p>
     */
    inline void SetDomainAssociation(DomainAssociation&& value) { m_domainAssociation = std::move(value); }

    /**
     * <p> Domain Association structure. </p>
     */
    inline UpdateDomainAssociationResult& WithDomainAssociation(const DomainAssociation& value) { SetDomainAssociation(value); return *this;}

    /**
     * <p> Domain Association structure. </p>
     */
    inline UpdateDomainAssociationResult& WithDomainAssociation(DomainAssociation&& value) { SetDomainAssociation(std::move(value)); return *this;}

  private:

    DomainAssociation m_domainAssociation;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
