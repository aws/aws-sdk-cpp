/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    GenerateRandomResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateRandomResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The unpredictable byte string.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPlaintext() const{ return m_plaintext; }

    /**
     * <p>The unpredictable byte string.</p>
     */
    inline void SetPlaintext(const Aws::Utils::ByteBuffer& value) { m_plaintext = value; }

    /**
     * <p>The unpredictable byte string.</p>
     */
    inline void SetPlaintext(Aws::Utils::ByteBuffer&& value) { m_plaintext = value; }

    /**
     * <p>The unpredictable byte string.</p>
     */
    inline GenerateRandomResult& WithPlaintext(const Aws::Utils::ByteBuffer& value) { SetPlaintext(value); return *this;}

    /**
     * <p>The unpredictable byte string.</p>
     */
    inline GenerateRandomResult& WithPlaintext(Aws::Utils::ByteBuffer&& value) { SetPlaintext(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_plaintext;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
