/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchDisassociateUserStackResult
  {
  public:
    AWS_APPSTREAM_API BatchDisassociateUserStackResult();
    AWS_APPSTREAM_API BatchDisassociateUserStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API BatchDisassociateUserStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline BatchDisassociateUserStackResult& WithErrors(const Aws::Vector<UserStackAssociationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchDisassociateUserStackResult& WithErrors(Aws::Vector<UserStackAssociationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchDisassociateUserStackResult& AddErrors(const UserStackAssociationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline BatchDisassociateUserStackResult& AddErrors(UserStackAssociationError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UserStackAssociationError> m_errors;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
