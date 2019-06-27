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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/EndpointMessageResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about which users and endpoints a message was sent
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendUsersMessageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SendUsersMessageResponse
  {
  public:
    SendUsersMessageResponse();
    SendUsersMessageResponse(Aws::Utils::Json::JsonView jsonValue);
    SendUsersMessageResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline SendUsersMessageResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline SendUsersMessageResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that was used to send the
     * message.</p>
     */
    inline SendUsersMessageResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline SendUsersMessageResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline SendUsersMessageResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that was assigned to the message request.</p>
     */
    inline SendUsersMessageResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& GetResult() const{ return m_result; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline void SetResult(const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline void SetResult(Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& WithResult(const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& value) { SetResult(value); return *this;}

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& WithResult(Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& AddResult(const Aws::String& key, const Aws::Map<Aws::String, EndpointMessageResult>& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& AddResult(Aws::String&& key, const Aws::Map<Aws::String, EndpointMessageResult>& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& AddResult(const Aws::String& key, Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& AddResult(Aws::String&& key, Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& AddResult(const char* key, Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that indicates which endpoints the message was sent to, for each
     * user. The object lists user IDs and, for each user ID, provides the endpoint IDs
     * that the message was sent to. For each endpoint ID, it provides an
     * EndpointMessageResult object.</p>
     */
    inline SendUsersMessageResponse& AddResult(const char* key, const Aws::Map<Aws::String, EndpointMessageResult>& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>> m_result;
    bool m_resultHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
