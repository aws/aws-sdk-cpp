/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * <p>The response from the GetCognitoEvents request</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetCognitoEventsResponse">AWS
   * API Reference</a></p>
   */
  class GetCognitoEventsResult
  {
  public:
    AWS_COGNITOSYNC_API GetCognitoEventsResult();
    AWS_COGNITOSYNC_API GetCognitoEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API GetCognitoEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEvents() const{ return m_events; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline void SetEvents(const Aws::Map<Aws::String, Aws::String>& value) { m_events = value; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline void SetEvents(Aws::Map<Aws::String, Aws::String>&& value) { m_events = std::move(value); }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& WithEvents(const Aws::Map<Aws::String, Aws::String>& value) { SetEvents(value); return *this;}

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& WithEvents(Aws::Map<Aws::String, Aws::String>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(const Aws::String& key, const Aws::String& value) { m_events.emplace(key, value); return *this; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(Aws::String&& key, const Aws::String& value) { m_events.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(const Aws::String& key, Aws::String&& value) { m_events.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(Aws::String&& key, Aws::String&& value) { m_events.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(const char* key, Aws::String&& value) { m_events.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(Aws::String&& key, const char* value) { m_events.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Cognito Events returned from the GetCognitoEvents request</p>
     */
    inline GetCognitoEventsResult& AddEvents(const char* key, const char* value) { m_events.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_events;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
