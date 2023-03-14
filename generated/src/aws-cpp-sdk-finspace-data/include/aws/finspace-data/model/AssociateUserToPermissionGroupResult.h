/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{
  class AssociateUserToPermissionGroupResult
  {
  public:
    AWS_FINSPACEDATA_API AssociateUserToPermissionGroupResult();
    AWS_FINSPACEDATA_API AssociateUserToPermissionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API AssociateUserToPermissionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned status code of the response.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The returned status code of the response.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>The returned status code of the response.</p>
     */
    inline AssociateUserToPermissionGroupResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateUserToPermissionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateUserToPermissionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateUserToPermissionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_statusCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
