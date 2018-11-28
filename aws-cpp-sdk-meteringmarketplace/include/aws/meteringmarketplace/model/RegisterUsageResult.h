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
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  class AWS_MARKETPLACEMETERING_API RegisterUsageResult
  {
  public:
    RegisterUsageResult();
    RegisterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline const Aws::Utils::DateTime& GetPublicKeyRotationTimestamp() const{ return m_publicKeyRotationTimestamp; }

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline void SetPublicKeyRotationTimestamp(const Aws::Utils::DateTime& value) { m_publicKeyRotationTimestamp = value; }

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline void SetPublicKeyRotationTimestamp(Aws::Utils::DateTime&& value) { m_publicKeyRotationTimestamp = std::move(value); }

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline RegisterUsageResult& WithPublicKeyRotationTimestamp(const Aws::Utils::DateTime& value) { SetPublicKeyRotationTimestamp(value); return *this;}

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline RegisterUsageResult& WithPublicKeyRotationTimestamp(Aws::Utils::DateTime&& value) { SetPublicKeyRotationTimestamp(std::move(value)); return *this;}


    /**
     * <p>JWT Token</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>JWT Token</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signature = value; }

    /**
     * <p>JWT Token</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signature = std::move(value); }

    /**
     * <p>JWT Token</p>
     */
    inline void SetSignature(const char* value) { m_signature.assign(value); }

    /**
     * <p>JWT Token</p>
     */
    inline RegisterUsageResult& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>JWT Token</p>
     */
    inline RegisterUsageResult& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>JWT Token</p>
     */
    inline RegisterUsageResult& WithSignature(const char* value) { SetSignature(value); return *this;}

  private:

    Aws::Utils::DateTime m_publicKeyRotationTimestamp;

    Aws::String m_signature;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
