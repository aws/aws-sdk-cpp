/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>

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

  private:

    int m_statusCode;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
