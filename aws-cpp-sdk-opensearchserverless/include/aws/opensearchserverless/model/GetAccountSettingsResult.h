/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccountSettingsDetail.h>
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
  class GetAccountSettingsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetAccountSettingsResult();
    AWS_OPENSEARCHSERVERLESS_API GetAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>OpenSearch Serverless-related details for the current account.</p>
     */
    inline const AccountSettingsDetail& GetAccountSettingsDetail() const{ return m_accountSettingsDetail; }

    /**
     * <p>OpenSearch Serverless-related details for the current account.</p>
     */
    inline void SetAccountSettingsDetail(const AccountSettingsDetail& value) { m_accountSettingsDetail = value; }

    /**
     * <p>OpenSearch Serverless-related details for the current account.</p>
     */
    inline void SetAccountSettingsDetail(AccountSettingsDetail&& value) { m_accountSettingsDetail = std::move(value); }

    /**
     * <p>OpenSearch Serverless-related details for the current account.</p>
     */
    inline GetAccountSettingsResult& WithAccountSettingsDetail(const AccountSettingsDetail& value) { SetAccountSettingsDetail(value); return *this;}

    /**
     * <p>OpenSearch Serverless-related details for the current account.</p>
     */
    inline GetAccountSettingsResult& WithAccountSettingsDetail(AccountSettingsDetail&& value) { SetAccountSettingsDetail(std::move(value)); return *this;}

  private:

    AccountSettingsDetail m_accountSettingsDetail;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
