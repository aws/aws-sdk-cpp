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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Amazon Chime SDK attendee fields to create, used with the
   * BatchCreateAttendee action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAttendeeRequestItem">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API CreateAttendeeRequestItem
  {
  public:
    CreateAttendeeRequestItem();
    CreateAttendeeRequestItem(Aws::Utils::Json::JsonView jsonValue);
    CreateAttendeeRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline const Aws::String& GetExternalUserId() const{ return m_externalUserId; }

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline bool ExternalUserIdHasBeenSet() const { return m_externalUserIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline void SetExternalUserId(const Aws::String& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = value; }

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline void SetExternalUserId(Aws::String&& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline void SetExternalUserId(const char* value) { m_externalUserIdHasBeenSet = true; m_externalUserId.assign(value); }

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline CreateAttendeeRequestItem& WithExternalUserId(const Aws::String& value) { SetExternalUserId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline CreateAttendeeRequestItem& WithExternalUserId(Aws::String&& value) { SetExternalUserId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK external user ID. Links the attendee to an identity
     * managed by a builder application.</p>
     */
    inline CreateAttendeeRequestItem& WithExternalUserId(const char* value) { SetExternalUserId(value); return *this;}

  private:

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
