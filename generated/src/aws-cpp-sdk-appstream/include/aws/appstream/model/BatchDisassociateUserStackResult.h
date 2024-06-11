﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>The list of UserStackAssociationError objects.</p>
     */
    inline const Aws::Vector<UserStackAssociationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<UserStackAssociationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<UserStackAssociationError>&& value) { m_errors = std::move(value); }
    inline BatchDisassociateUserStackResult& WithErrors(const Aws::Vector<UserStackAssociationError>& value) { SetErrors(value); return *this;}
    inline BatchDisassociateUserStackResult& WithErrors(Aws::Vector<UserStackAssociationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDisassociateUserStackResult& AddErrors(const UserStackAssociationError& value) { m_errors.push_back(value); return *this; }
    inline BatchDisassociateUserStackResult& AddErrors(UserStackAssociationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDisassociateUserStackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDisassociateUserStackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDisassociateUserStackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UserStackAssociationError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
