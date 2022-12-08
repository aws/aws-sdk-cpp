/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/TrustStore.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetTrustStoreResult
  {
  public:
    AWS_WORKSPACESWEB_API GetTrustStoreResult();
    AWS_WORKSPACESWEB_API GetTrustStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetTrustStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The trust store.</p>
     */
    inline const TrustStore& GetTrustStore() const{ return m_trustStore; }

    /**
     * <p>The trust store.</p>
     */
    inline void SetTrustStore(const TrustStore& value) { m_trustStore = value; }

    /**
     * <p>The trust store.</p>
     */
    inline void SetTrustStore(TrustStore&& value) { m_trustStore = std::move(value); }

    /**
     * <p>The trust store.</p>
     */
    inline GetTrustStoreResult& WithTrustStore(const TrustStore& value) { SetTrustStore(value); return *this;}

    /**
     * <p>The trust store.</p>
     */
    inline GetTrustStoreResult& WithTrustStore(TrustStore&& value) { SetTrustStore(std::move(value)); return *this;}

  private:

    TrustStore m_trustStore;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
