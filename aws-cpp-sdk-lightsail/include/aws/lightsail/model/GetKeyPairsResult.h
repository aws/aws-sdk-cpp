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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_LIGHTSAIL_API GetKeyPairsResult
  {
  public:
    GetKeyPairsResult();
    GetKeyPairsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetKeyPairsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline const Aws::Vector<KeyPair>& GetKeyPairs() const{ return m_keyPairs; }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline void SetKeyPairs(const Aws::Vector<KeyPair>& value) { m_keyPairs = value; }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline void SetKeyPairs(Aws::Vector<KeyPair>&& value) { m_keyPairs = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& WithKeyPairs(const Aws::Vector<KeyPair>& value) { SetKeyPairs(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& WithKeyPairs(Aws::Vector<KeyPair>&& value) { SetKeyPairs(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& AddKeyPairs(const KeyPair& value) { m_keyPairs.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the key pairs.</p>
     */
    inline GetKeyPairsResult& AddKeyPairs(KeyPair&& value) { m_keyPairs.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline GetKeyPairsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline GetKeyPairsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get key
     * pairs request.</p>
     */
    inline GetKeyPairsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<KeyPair> m_keyPairs;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
