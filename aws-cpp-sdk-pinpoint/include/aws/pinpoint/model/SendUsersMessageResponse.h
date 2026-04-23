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
   * User send message response.<p><h3>See Also:</h3>   <a
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
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline SendUsersMessageResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline SendUsersMessageResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The unique ID of the Amazon Pinpoint project used to send the message.
     */
    inline SendUsersMessageResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The unique ID assigned to the users-messages request.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline SendUsersMessageResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline SendUsersMessageResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * The unique ID assigned to the users-messages request.
     */
    inline SendUsersMessageResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& GetResult() const{ return m_result; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline void SetResult(const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline void SetResult(Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& WithResult(const Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>& value) { SetResult(value); return *this;}

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& WithResult(Aws::Map<Aws::String, Aws::Map<Aws::String, EndpointMessageResult>>&& value) { SetResult(std::move(value)); return *this;}

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& AddResult(const Aws::String& key, const Aws::Map<Aws::String, EndpointMessageResult>& value) { m_resultHasBeenSet = true; m_result.emplace(key, value); return *this; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& AddResult(Aws::String&& key, const Aws::Map<Aws::String, EndpointMessageResult>& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), value); return *this; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& AddResult(const Aws::String& key, Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& AddResult(Aws::String&& key, Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_resultHasBeenSet = true; m_result.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
     */
    inline SendUsersMessageResponse& AddResult(const char* key, Aws::Map<Aws::String, EndpointMessageResult>&& value) { m_resultHasBeenSet = true; m_result.emplace(key, std::move(value)); return *this; }

    /**
     * An object that shows the endpoints that were messaged for each user. The object
     * provides a list of user IDs. For each user ID, it provides the endpoint IDs that
     * were messaged. For each endpoint ID, it provides an EndpointMessageResult
     * object.
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
