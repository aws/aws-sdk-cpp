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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ChangeType.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Returns a list of all ActiveMQ users.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UserSummary">AWS API
   * Reference</a></p>
   */
  class AWS_MQ_API UserSummary
  {
  public:
    UserSummary();
    UserSummary(Aws::Utils::Json::JsonView jsonValue);
    UserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of change pending for the ActiveMQ user.
     */
    inline const ChangeType& GetPendingChange() const{ return m_pendingChange; }

    /**
     * The type of change pending for the ActiveMQ user.
     */
    inline bool PendingChangeHasBeenSet() const { return m_pendingChangeHasBeenSet; }

    /**
     * The type of change pending for the ActiveMQ user.
     */
    inline void SetPendingChange(const ChangeType& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = value; }

    /**
     * The type of change pending for the ActiveMQ user.
     */
    inline void SetPendingChange(ChangeType&& value) { m_pendingChangeHasBeenSet = true; m_pendingChange = std::move(value); }

    /**
     * The type of change pending for the ActiveMQ user.
     */
    inline UserSummary& WithPendingChange(const ChangeType& value) { SetPendingChange(value); return *this;}

    /**
     * The type of change pending for the ActiveMQ user.
     */
    inline UserSummary& WithPendingChange(ChangeType&& value) { SetPendingChange(std::move(value)); return *this;}


    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline UserSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline UserSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * Required. The username of the ActiveMQ user. This value can contain only
     * alphanumeric characters, dashes, periods, underscores, and tildes (- . _ ~).
     * This value must be 2-100 characters long.
     */
    inline UserSummary& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    ChangeType m_pendingChange;
    bool m_pendingChangeHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
