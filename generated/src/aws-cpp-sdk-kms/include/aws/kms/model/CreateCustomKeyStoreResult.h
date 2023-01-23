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

  private:

    Aws::String m_customKeyStoreId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
