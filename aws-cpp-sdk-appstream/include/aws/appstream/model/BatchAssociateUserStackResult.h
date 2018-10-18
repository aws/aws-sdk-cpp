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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/UserStackAssociationError.h>
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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API BatchAssociateUserStackResult
  {
  public:
    BatchAssociateUserStackResult();
    BatchAssociateUserStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchAssociateUserStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline const Aws::Vector<UserStackAssociationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline void SetErrors(const Aws::Vector<UserStackAssociationError>& value) { m_errors = value; }

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline void SetErrors(Aws::Vector<UserStackAssociationError>&& value) { m_errors = std::move(value); }

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchAssociateUserStackResult& WithErrors(const Aws::Vector<UserStackAssociationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchAssociateUserStackResult& WithErrors(Aws::Vector<UserStackAssociationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchAssociateUserStackResult& AddErrors(const UserStackAssociationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchAssociateUserStackResult& AddErrors(UserStackAssociationError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserStackAssociationError> m_errors;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
