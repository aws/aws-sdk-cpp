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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Represents a log subscription, which tracks real-time data from a chosen log
   * group to a specified destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/LogSubscription">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API LogSubscription
  {
  public:
    LogSubscription();
    LogSubscription(Aws::Utils::Json::JsonView jsonValue);
    LogSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline LogSubscription& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline LogSubscription& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline LogSubscription& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline LogSubscription& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogSubscription& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline LogSubscription& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionCreatedDateTime() const{ return m_subscriptionCreatedDateTime; }

    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline bool SubscriptionCreatedDateTimeHasBeenSet() const { return m_subscriptionCreatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline void SetSubscriptionCreatedDateTime(const Aws::Utils::DateTime& value) { m_subscriptionCreatedDateTimeHasBeenSet = true; m_subscriptionCreatedDateTime = value; }

    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline void SetSubscriptionCreatedDateTime(Aws::Utils::DateTime&& value) { m_subscriptionCreatedDateTimeHasBeenSet = true; m_subscriptionCreatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline LogSubscription& WithSubscriptionCreatedDateTime(const Aws::Utils::DateTime& value) { SetSubscriptionCreatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline LogSubscription& WithSubscriptionCreatedDateTime(Aws::Utils::DateTime&& value) { SetSubscriptionCreatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::Utils::DateTime m_subscriptionCreatedDateTime;
    bool m_subscriptionCreatedDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
