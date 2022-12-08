/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccessPolicyDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class GetAccessPolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetAccessPolicyResult();
    AWS_OPENSEARCHSERVERLESS_API GetAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the requested access policy.</p>
     */
    inline const AccessPolicyDetail& GetAccessPolicyDetail() const{ return m_accessPolicyDetail; }

    /**
     * <p>Details about the requested access policy.</p>
     */
    inline void SetAccessPolicyDetail(const AccessPolicyDetail& value) { m_accessPolicyDetail = value; }

    /**
     * <p>Details about the requested access policy.</p>
     */
    inline void SetAccessPolicyDetail(AccessPolicyDetail&& value) { m_accessPolicyDetail = std::move(value); }

    /**
     * <p>Details about the requested access policy.</p>
     */
    inline GetAccessPolicyResult& WithAccessPolicyDetail(const AccessPolicyDetail& value) { SetAccessPolicyDetail(value); return *this;}

    /**
     * <p>Details about the requested access policy.</p>
     */
    inline GetAccessPolicyResult& WithAccessPolicyDetail(AccessPolicyDetail&& value) { SetAccessPolicyDetail(std::move(value)); return *this;}

  private:

    AccessPolicyDetail m_accessPolicyDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
