﻿/**
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
   * <p>Details about the Amazon MSK cluster used as the source for a Kinesis Data
   * Firehose delivery stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/MSKSourceDescription">AWS
   * API Reference</a></p>
   */
  class MSKSourceDescription
  {
  public:
    AWS_FIREHOSE_API MSKSourceDescription();
    AWS_FIREHOSE_API MSKSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API MSKSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetMSKClusterARN() const{ return m_mSKClusterARN; }

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline bool MSKClusterARNHasBeenSet() const { return m_mSKClusterARNHasBeenSet; }

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline void SetMSKClusterARN(const Aws::String& value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN = value; }

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline void SetMSKClusterARN(Aws::String&& value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN = std::move(value); }

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline void SetMSKClusterARN(const char* value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN.assign(value); }

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithMSKClusterARN(const Aws::String& value) { SetMSKClusterARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithMSKClusterARN(Aws::String&& value) { SetMSKClusterARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithMSKClusterARN(const char* value) { SetMSKClusterARN(value); return *this;}


    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithTopicName(const char* value) { SetTopicName(value); return *this;}


    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }

    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }

    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline void SetAuthenticationConfiguration(const AuthenticationConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }

    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline void SetAuthenticationConfiguration(AuthenticationConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }

    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithAuthenticationConfiguration(const AuthenticationConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}

    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline MSKSourceDescription& WithAuthenticationConfiguration(AuthenticationConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Kinesis Data Firehose starts retrieving records from the topic within the
     * Amazon MSK cluster starting with this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryStartTimestamp() const{ return m_deliveryStartTimestamp; }

    /**
     * <p>Kinesis Data Firehose starts retrieving records from the topic within the
     * Amazon MSK cluster starting with this timestamp.</p>
     */
    inline bool DeliveryStartTimestampHasBeenSet() const { return m_deliveryStartTimestampHasBeenSet; }

    /**
     * <p>Kinesis Data Firehose starts retrieving records from the topic within the
     * Amazon MSK cluster starting with this timestamp.</p>
     */
    inline void SetDeliveryStartTimestamp(const Aws::Utils::DateTime& value) { m_deliveryStartTimestampHasBeenSet = true; m_deliveryStartTimestamp = value; }

    /**
     * <p>Kinesis Data Firehose starts retrieving records from the topic within the
     * Amazon MSK cluster starting with this timestamp.</p>
     */
    inline void SetDeliveryStartTimestamp(Aws::Utils::DateTime&& value) { m_deliveryStartTimestampHasBeenSet = true; m_deliveryStartTimestamp = std::move(value); }

    /**
     * <p>Kinesis Data Firehose starts retrieving records from the topic within the
     * Amazon MSK cluster starting with this timestamp.</p>
     */
    inline MSKSourceDescription& WithDeliveryStartTimestamp(const Aws::Utils::DateTime& value) { SetDeliveryStartTimestamp(value); return *this;}

    /**
     * <p>Kinesis Data Firehose starts retrieving records from the topic within the
     * Amazon MSK cluster starting with this timestamp.</p>
     */
    inline MSKSourceDescription& WithDeliveryStartTimestamp(Aws::Utils::DateTime&& value) { SetDeliveryStartTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_mSKClusterARN;
    bool m_mSKClusterARNHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_deliveryStartTimestamp;
    bool m_deliveryStartTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
