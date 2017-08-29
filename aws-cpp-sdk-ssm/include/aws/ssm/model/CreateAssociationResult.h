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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationDescription.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API CreateAssociationResult
  {
  public:
    CreateAssociationResult();
    CreateAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationDescription& GetAssociationDescription() const{ return m_associationDescription; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociationDescription(const AssociationDescription& value) { m_associationDescription = value; }

    /**
     * <p>Information about the association.</p>
     */
    inline void SetAssociationDescription(AssociationDescription&& value) { m_associationDescription = std::move(value); }

    /**
     * <p>Information about the association.</p>
     */
    inline CreateAssociationResult& WithAssociationDescription(const AssociationDescription& value) { SetAssociationDescription(value); return *this;}

    /**
     * <p>Information about the association.</p>
     */
    inline CreateAssociationResult& WithAssociationDescription(AssociationDescription&& value) { SetAssociationDescription(std::move(value)); return *this;}

  private:

    AssociationDescription m_associationDescription;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
