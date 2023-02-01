/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
  class GenerateRandomResult
  {
  public:
    AWS_KMS_API GenerateRandomResult();
    AWS_KMS_API GenerateRandomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateRandomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateRandomResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>The random byte string. When you use the HTTP API or the Amazon Web Services
     * CLI, the value is Base64-encoded. Otherwise, it is not Base64-encoded.</p>
     */
    inline GenerateRandomResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_plaintext;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
