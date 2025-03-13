/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/AuthenticationConfiguration.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Details about the Amazon MSK cluster used as the source for a Firehose
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/MSKSourceDescription">AWS
   * API Reference</a></p>
   */
  class MSKSourceDescription
  {
  public:
    AWS_FIREHOSE_API MSKSourceDescription() = default;
    AWS_FIREHOSE_API MSKSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API MSKSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetMSKClusterARN() const { return m_mSKClusterARN; }
    inline bool MSKClusterARNHasBeenSet() const { return m_mSKClusterARNHasBeenSet; }
    template<typename MSKClusterARNT = Aws::String>
    void SetMSKClusterARN(MSKClusterARNT&& value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN = std::forward<MSKClusterARNT>(value); }
    template<typename MSKClusterARNT = Aws::String>
    MSKSourceDescription& WithMSKClusterARN(MSKClusterARNT&& value) { SetMSKClusterARN(std::forward<MSKClusterARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    MSKSourceDescription& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const { return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    void SetAuthenticationConfiguration(AuthenticationConfigurationT&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::forward<AuthenticationConfigurationT>(value); }
    template<typename AuthenticationConfigurationT = AuthenticationConfiguration>
    MSKSourceDescription& WithAuthenticationConfiguration(AuthenticationConfigurationT&& value) { SetAuthenticationConfiguration(std::forward<AuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Firehose starts retrieving records from the topic within the Amazon MSK
     * cluster starting with this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryStartTimestamp() const { return m_deliveryStartTimestamp; }
    inline bool DeliveryStartTimestampHasBeenSet() const { return m_deliveryStartTimestampHasBeenSet; }
    template<typename DeliveryStartTimestampT = Aws::Utils::DateTime>
    void SetDeliveryStartTimestamp(DeliveryStartTimestampT&& value) { m_deliveryStartTimestampHasBeenSet = true; m_deliveryStartTimestamp = std::forward<DeliveryStartTimestampT>(value); }
    template<typename DeliveryStartTimestampT = Aws::Utils::DateTime>
    MSKSourceDescription& WithDeliveryStartTimestamp(DeliveryStartTimestampT&& value) { SetDeliveryStartTimestamp(std::forward<DeliveryStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time in UTC for the offset position within your MSK topic
     * from where Firehose begins to read. By default, this is set to timestamp when
     * Firehose becomes Active. </p> <p>If you want to create a Firehose stream with
     * Earliest start position from SDK or CLI, you need to set the
     * <code>ReadFromTimestampUTC</code> parameter to Epoch (1970-01-01T00:00:00Z).
     * </p>
     */
    inline const Aws::Utils::DateTime& GetReadFromTimestamp() const { return m_readFromTimestamp; }
    inline bool ReadFromTimestampHasBeenSet() const { return m_readFromTimestampHasBeenSet; }
    template<typename ReadFromTimestampT = Aws::Utils::DateTime>
    void SetReadFromTimestamp(ReadFromTimestampT&& value) { m_readFromTimestampHasBeenSet = true; m_readFromTimestamp = std::forward<ReadFromTimestampT>(value); }
    template<typename ReadFromTimestampT = Aws::Utils::DateTime>
    MSKSourceDescription& WithReadFromTimestamp(ReadFromTimestampT&& value) { SetReadFromTimestamp(std::forward<ReadFromTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mSKClusterARN;
    bool m_mSKClusterARNHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_deliveryStartTimestamp{};
    bool m_deliveryStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_readFromTimestamp{};
    bool m_readFromTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
