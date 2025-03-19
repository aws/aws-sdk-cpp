/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LogSubscription
  {
  public:
    AWS_DIRECTORYSERVICE_API LogSubscription() = default;
    AWS_DIRECTORYSERVICE_API LogSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API LogSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier (ID) of the directory that you want to associate with the log
     * subscription.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    LogSubscription& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    LogSubscription& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the log subscription was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionCreatedDateTime() const { return m_subscriptionCreatedDateTime; }
    inline bool SubscriptionCreatedDateTimeHasBeenSet() const { return m_subscriptionCreatedDateTimeHasBeenSet; }
    template<typename SubscriptionCreatedDateTimeT = Aws::Utils::DateTime>
    void SetSubscriptionCreatedDateTime(SubscriptionCreatedDateTimeT&& value) { m_subscriptionCreatedDateTimeHasBeenSet = true; m_subscriptionCreatedDateTime = std::forward<SubscriptionCreatedDateTimeT>(value); }
    template<typename SubscriptionCreatedDateTimeT = Aws::Utils::DateTime>
    LogSubscription& WithSubscriptionCreatedDateTime(SubscriptionCreatedDateTimeT&& value) { SetSubscriptionCreatedDateTime(std::forward<SubscriptionCreatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_subscriptionCreatedDateTime{};
    bool m_subscriptionCreatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
