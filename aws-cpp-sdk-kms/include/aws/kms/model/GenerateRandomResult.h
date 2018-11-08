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
  class AWS_KMS_API GenerateRandomResult
  {
  public:
    GenerateRandomResult();
    GenerateRandomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateRandomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The random byte string. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>The random byte string. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline void SetPlaintext(const Aws::Utils::CryptoBuffer& value) { m_plaintext = value; }

    /**
     * <p>The random byte string. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline void SetPlaintext(Aws::Utils::CryptoBuffer&& value) { m_plaintext = std::move(value); }

    /**
     * <p>The random byte string. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline GenerateRandomResult& WithPlaintext(const Aws::Utils::CryptoBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>The random byte string. When you use the HTTP API or the AWS CLI, the value
     * is Base64-encoded. Otherwise, it is not encoded.</p>
     */
    inline GenerateRandomResult& WithPlaintext(Aws::Utils::CryptoBuffer&& value) { SetPlaintext(std::move(value)); return *this;}

  private:

    Aws::Utils::CryptoBuffer m_plaintext;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
