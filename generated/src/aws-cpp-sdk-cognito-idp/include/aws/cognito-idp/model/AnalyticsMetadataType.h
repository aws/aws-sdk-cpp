/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Information that your application adds to authentication requests. Applies an
   * endpoint ID to the analytics data that your user pool sends to Amazon
   * Pinpoint.</p> <p>An endpoint ID uniquely identifies a mobile device, email
   * address or phone number that can receive messages from Amazon Pinpoint
   * analytics. For more information about Amazon Web Services Regions that can
   * contain Amazon Pinpoint resources for use with Amazon Cognito user pools, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-pinpoint-integration.html">Using
   * Amazon Pinpoint analytics with Amazon Cognito user pools</a>.</p> <p>This data
   * type is a request parameter of authentication operations like <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_InitiateAuth.html">InitiateAuth</a>,
   * <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminInitiateAuth.html">AdminInitiateAuth</a>,
   * <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RespondToAuthChallenge.html">RespondToAuthChallenge</a>,
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminRespondToAuthChallenge.html">AdminRespondToAuthChallenge</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AnalyticsMetadataType">AWS
   * API Reference</a></p>
   */
  class AnalyticsMetadataType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AnalyticsMetadataType();
    AWS_COGNITOIDENTITYPROVIDER_API AnalyticsMetadataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AnalyticsMetadataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint ID. Information that you want to pass to Amazon Pinpoint about
     * where to send notifications.</p>
     */
    inline const Aws::String& GetAnalyticsEndpointId() const{ return m_analyticsEndpointId; }
    inline bool AnalyticsEndpointIdHasBeenSet() const { return m_analyticsEndpointIdHasBeenSet; }
    inline void SetAnalyticsEndpointId(const Aws::String& value) { m_analyticsEndpointIdHasBeenSet = true; m_analyticsEndpointId = value; }
    inline void SetAnalyticsEndpointId(Aws::String&& value) { m_analyticsEndpointIdHasBeenSet = true; m_analyticsEndpointId = std::move(value); }
    inline void SetAnalyticsEndpointId(const char* value) { m_analyticsEndpointIdHasBeenSet = true; m_analyticsEndpointId.assign(value); }
    inline AnalyticsMetadataType& WithAnalyticsEndpointId(const Aws::String& value) { SetAnalyticsEndpointId(value); return *this;}
    inline AnalyticsMetadataType& WithAnalyticsEndpointId(Aws::String&& value) { SetAnalyticsEndpointId(std::move(value)); return *this;}
    inline AnalyticsMetadataType& WithAnalyticsEndpointId(const char* value) { SetAnalyticsEndpointId(value); return *this;}
    ///@}
  private:

    Aws::String m_analyticsEndpointId;
    bool m_analyticsEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
