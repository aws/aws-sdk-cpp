/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/KeyPair.h>
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
namespace Lightsail
{
namespace Model
{
  class GetKeyPairResult
  {
  public:
    AWS_LIGHTSAIL_API GetKeyPairResult();
    AWS_LIGHTSAIL_API GetKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the key pair.</p>
     */
    inline const KeyPair& GetKeyPair() const{ return m_keyPair; }

    /**
     * <p>An array of key-value pairs containing information about the key pair.</p>
     */
    inline void SetKeyPair(const KeyPair& value) { m_keyPair = value; }

    /**
     * <p>An array of key-value pairs containing information about the key pair.</p>
     */
    inline void SetKeyPair(KeyPair&& value) { m_keyPair = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the key pair.</p>
     */
    inline GetKeyPairResult& WithKeyPair(const KeyPair& value) { SetKeyPair(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the key pair.</p>
     */
    inline GetKeyPairResult& WithKeyPair(KeyPair&& value) { SetKeyPair(std::move(value)); return *this;}

  private:

    KeyPair m_keyPair;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
