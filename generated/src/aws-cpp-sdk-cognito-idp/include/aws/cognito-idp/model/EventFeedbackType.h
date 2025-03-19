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
   * <p>The feedback that your application submitted to a threat protection event
   * log, as displayed in an <code>AdminListUserAuthEvents</code>
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EventFeedbackType">AWS
   * API Reference</a></p>
   */
  class EventFeedbackType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Your feedback to the authentication event. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline FeedbackValueType GetFeedbackValue() const { return m_feedbackValue; }
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }
    inline void SetFeedbackValue(FeedbackValueType value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }
    inline EventFeedbackType& WithFeedbackValue(FeedbackValueType value) { SetFeedbackValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The submitter of the event feedback. For example, if you submit event
     * feedback in the Amazon Cognito console, this value is <code>Admin</code>.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    EventFeedbackType& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that you or your user submitted the feedback.</p>
     */
    inline const Aws::Utils::DateTime& GetFeedbackDate() const { return m_feedbackDate; }
    inline bool FeedbackDateHasBeenSet() const { return m_feedbackDateHasBeenSet; }
    template<typename FeedbackDateT = Aws::Utils::DateTime>
    void SetFeedbackDate(FeedbackDateT&& value) { m_feedbackDateHasBeenSet = true; m_feedbackDate = std::forward<FeedbackDateT>(value); }
    template<typename FeedbackDateT = Aws::Utils::DateTime>
    EventFeedbackType& WithFeedbackDate(FeedbackDateT&& value) { SetFeedbackDate(std::forward<FeedbackDateT>(value)); return *this;}
    ///@}
  private:

    FeedbackValueType m_feedbackValue{FeedbackValueType::NOT_SET};
    bool m_feedbackValueHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Utils::DateTime m_feedbackDate{};
    bool m_feedbackDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
