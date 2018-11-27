/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KMS_API CreateCustomKeyStoreResult
  {
  public:
    CreateCustomKeyStoreResult();
    CreateCustomKeyStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCustomKeyStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
