/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/SecurityConfigDetail.h>
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
  class UpdateSecurityConfigResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateSecurityConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated security configuration. </p>
     */
    inline const SecurityConfigDetail& GetSecurityConfigDetail() const{ return m_securityConfigDetail; }

    /**
     * <p>Details about the updated security configuration. </p>
     */
    inline void SetSecurityConfigDetail(const SecurityConfigDetail& value) { m_securityConfigDetail = value; }

    /**
     * <p>Details about the updated security configuration. </p>
     */
    inline void SetSecurityConfigDetail(SecurityConfigDetail&& value) { m_securityConfigDetail = std::move(value); }

    /**
     * <p>Details about the updated security configuration. </p>
     */
    inline UpdateSecurityConfigResult& WithSecurityConfigDetail(const SecurityConfigDetail& value) { SetSecurityConfigDetail(value); return *this;}

    /**
     * <p>Details about the updated security configuration. </p>
     */
    inline UpdateSecurityConfigResult& WithSecurityConfigDetail(SecurityConfigDetail&& value) { SetSecurityConfigDetail(std::move(value)); return *this;}

  private:

    SecurityConfigDetail m_securityConfigDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
