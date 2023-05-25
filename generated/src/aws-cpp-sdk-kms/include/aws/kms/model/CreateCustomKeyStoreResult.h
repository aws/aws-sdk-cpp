/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{
  class CreateCustomKeyStoreResult
  {
  public:
    AWS_KMS_API CreateCustomKeyStoreResult();
    AWS_KMS_API CreateCustomKeyStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API CreateCustomKeyStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreId = value; }

    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreId = std::move(value); }

    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreId.assign(value); }

    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline CreateCustomKeyStoreResult& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline CreateCustomKeyStoreResult& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the new custom key store.</p>
     */
    inline CreateCustomKeyStoreResult& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCustomKeyStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCustomKeyStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCustomKeyStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_customKeyStoreId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
