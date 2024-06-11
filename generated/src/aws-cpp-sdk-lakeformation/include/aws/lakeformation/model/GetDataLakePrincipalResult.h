/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{
  class GetDataLakePrincipalResult
  {
  public:
    AWS_LAKEFORMATION_API GetDataLakePrincipalResult();
    AWS_LAKEFORMATION_API GetDataLakePrincipalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetDataLakePrincipalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier of the invoking principal.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }
    inline void SetIdentity(const Aws::String& value) { m_identity = value; }
    inline void SetIdentity(Aws::String&& value) { m_identity = std::move(value); }
    inline void SetIdentity(const char* value) { m_identity.assign(value); }
    inline GetDataLakePrincipalResult& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}
    inline GetDataLakePrincipalResult& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}
    inline GetDataLakePrincipalResult& WithIdentity(const char* value) { SetIdentity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataLakePrincipalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataLakePrincipalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataLakePrincipalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
