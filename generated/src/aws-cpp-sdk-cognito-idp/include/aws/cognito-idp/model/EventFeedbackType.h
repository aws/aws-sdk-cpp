/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/FeedbackValueType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Specifies the event feedback type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EventFeedbackType">AWS
   * API Reference</a></p>
   */
  class EventFeedbackType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType();
    AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline const FeedbackValueType& GetFeedbackValue() const{ return m_feedbackValue; }
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }
    inline void SetFeedbackValue(const FeedbackValueType& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }
    inline void SetFeedbackValue(FeedbackValueType&& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = std::move(value); }
    inline EventFeedbackType& WithFeedbackValue(const FeedbackValueType& value) { SetFeedbackValue(value); return *this;}
    inline EventFeedbackType& WithFeedbackValue(FeedbackValueType&& value) { SetFeedbackValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }
    inline EventFeedbackType& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline EventFeedbackType& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline EventFeedbackType& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event feedback date.</p>
     */
    inline const Aws::Utils::DateTime& GetFeedbackDate() const{ return m_feedbackDate; }
    inline bool FeedbackDateHasBeenSet() const { return m_feedbackDateHasBeenSet; }
    inline void SetFeedbackDate(const Aws::Utils::DateTime& value) { m_feedbackDateHasBeenSet = true; m_feedbackDate = value; }
    inline void SetFeedbackDate(Aws::Utils::DateTime&& value) { m_feedbackDateHasBeenSet = true; m_feedbackDate = std::move(value); }
    inline EventFeedbackType& WithFeedbackDate(const Aws::Utils::DateTime& value) { SetFeedbackDate(value); return *this;}
    inline EventFeedbackType& WithFeedbackDate(Aws::Utils::DateTime&& value) { SetFeedbackDate(std::move(value)); return *this;}
    ///@}
  private:

    FeedbackValueType m_feedbackValue;
    bool m_feedbackValueHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Utils::DateTime m_feedbackDate;
    bool m_feedbackDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
