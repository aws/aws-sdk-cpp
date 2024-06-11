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
   * <p>Details about the Amazon MSK cluster used as the source for a Firehose
   * delivery stream.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The ARN of the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetMSKClusterARN() const{ return m_mSKClusterARN; }
    inline bool MSKClusterARNHasBeenSet() const { return m_mSKClusterARNHasBeenSet; }
    inline void SetMSKClusterARN(const Aws::String& value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN = value; }
    inline void SetMSKClusterARN(Aws::String&& value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN = std::move(value); }
    inline void SetMSKClusterARN(const char* value) { m_mSKClusterARNHasBeenSet = true; m_mSKClusterARN.assign(value); }
    inline MSKSourceDescription& WithMSKClusterARN(const Aws::String& value) { SetMSKClusterARN(value); return *this;}
    inline MSKSourceDescription& WithMSKClusterARN(Aws::String&& value) { SetMSKClusterARN(std::move(value)); return *this;}
    inline MSKSourceDescription& WithMSKClusterARN(const char* value) { SetMSKClusterARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic name within the Amazon MSK cluster.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }
    inline MSKSourceDescription& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}
    inline MSKSourceDescription& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}
    inline MSKSourceDescription& WithTopicName(const char* value) { SetTopicName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const AuthenticationConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthenticationConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline MSKSourceDescription& WithAuthenticationConfiguration(const AuthenticationConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}
    inline MSKSourceDescription& WithAuthenticationConfiguration(AuthenticationConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Firehose starts retrieving records from the topic within the Amazon MSK
     * cluster starting with this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryStartTimestamp() const{ return m_deliveryStartTimestamp; }
    inline bool DeliveryStartTimestampHasBeenSet() const { return m_deliveryStartTimestampHasBeenSet; }
    inline void SetDeliveryStartTimestamp(const Aws::Utils::DateTime& value) { m_deliveryStartTimestampHasBeenSet = true; m_deliveryStartTimestamp = value; }
    inline void SetDeliveryStartTimestamp(Aws::Utils::DateTime&& value) { m_deliveryStartTimestampHasBeenSet = true; m_deliveryStartTimestamp = std::move(value); }
    inline MSKSourceDescription& WithDeliveryStartTimestamp(const Aws::Utils::DateTime& value) { SetDeliveryStartTimestamp(value); return *this;}
    inline MSKSourceDescription& WithDeliveryStartTimestamp(Aws::Utils::DateTime&& value) { SetDeliveryStartTimestamp(std::move(value)); return *this;}
    ///@}
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
