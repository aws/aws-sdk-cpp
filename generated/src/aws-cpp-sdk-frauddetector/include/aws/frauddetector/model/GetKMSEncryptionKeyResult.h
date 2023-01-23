/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/KMSKey.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetKMSEncryptionKeyResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetKMSEncryptionKeyResult();
    AWS_FRAUDDETECTOR_API GetKMSEncryptionKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetKMSEncryptionKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The KMS encryption key.</p>
     */
    inline const KMSKey& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p>The KMS encryption key.</p>
     */
    inline void SetKmsKey(const KMSKey& value) { m_kmsKey = value; }

    /**
     * <p>The KMS encryption key.</p>
     */
    inline void SetKmsKey(KMSKey&& value) { m_kmsKey = std::move(value); }

    /**
     * <p>The KMS encryption key.</p>
     */
    inline GetKMSEncryptionKeyResult& WithKmsKey(const KMSKey& value) { SetKmsKey(value); return *this;}

    /**
     * <p>The KMS encryption key.</p>
     */
    inline GetKMSEncryptionKeyResult& WithKmsKey(KMSKey&& value) { SetKmsKey(std::move(value)); return *this;}

  private:

    KMSKey m_kmsKey;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
