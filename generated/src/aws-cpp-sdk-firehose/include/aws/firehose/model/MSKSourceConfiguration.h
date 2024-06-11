/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/AuthenticationConfiguration.h>
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
   * <p>The configuration for the Amazon MSK cluster to be used as the source for a
   * delivery stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/MSKSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class MSKSourceConfiguration
  {
  public:
    AWS_FIREHOSE_API MSKSourceConfiguration();
    AWS_FIREHOSE_API MSKSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API MSKSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MSKSourceConfiguration& WithMSKClusterARN(const Aws::String& value) { SetMSKClusterARN(value); return *this;}
    inline MSKSourceConfiguration& WithMSKClusterARN(Aws::String&& value) { SetMSKClusterARN(std::move(value)); return *this;}
    inline MSKSourceConfiguration& WithMSKClusterARN(const char* value) { SetMSKClusterARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic name within the Amazon MSK cluster. </p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }
    inline MSKSourceConfiguration& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}
    inline MSKSourceConfiguration& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}
    inline MSKSourceConfiguration& WithTopicName(const char* value) { SetTopicName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the Amazon MSK cluster.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }
    inline void SetAuthenticationConfiguration(const AuthenticationConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }
    inline void SetAuthenticationConfiguration(AuthenticationConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }
    inline MSKSourceConfiguration& WithAuthenticationConfiguration(const AuthenticationConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}
    inline MSKSourceConfiguration& WithAuthenticationConfiguration(AuthenticationConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_mSKClusterARN;
    bool m_mSKClusterARNHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
