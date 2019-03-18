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
  class AWS_COGNITOIDENTITYPROVIDER_API EventFeedbackType
  {
  public:
    EventFeedbackType();
    EventFeedbackType(Aws::Utils::Json::JsonView jsonValue);
    EventFeedbackType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event feedback value.</p>
     */
    inline const FeedbackValueType& GetFeedbackValue() const{ return m_feedbackValue; }

    /**
     * <p>The event feedback value.</p>
     */
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }

    /**
     * <p>The event feedback value.</p>
     */
    inline void SetFeedbackValue(const FeedbackValueType& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }

    /**
     * <p>The event feedback value.</p>
     */
    inline void SetFeedbackValue(FeedbackValueType&& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = std::move(value); }

    /**
     * <p>The event feedback value.</p>
     */
    inline EventFeedbackType& WithFeedbackValue(const FeedbackValueType& value) { SetFeedbackValue(value); return *this;}

    /**
     * <p>The event feedback value.</p>
     */
    inline EventFeedbackType& WithFeedbackValue(FeedbackValueType&& value) { SetFeedbackValue(std::move(value)); return *this;}


    /**
     * <p>The provider.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider.</p>
     */
    inline EventFeedbackType& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider.</p>
     */
    inline EventFeedbackType& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider.</p>
     */
    inline EventFeedbackType& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The event feedback date.</p>
     */
    inline const Aws::Utils::DateTime& GetFeedbackDate() const{ return m_feedbackDate; }

    /**
     * <p>The event feedback date.</p>
     */
    inline bool FeedbackDateHasBeenSet() const { return m_feedbackDateHasBeenSet; }

    /**
     * <p>The event feedback date.</p>
     */
    inline void SetFeedbackDate(const Aws::Utils::DateTime& value) { m_feedbackDateHasBeenSet = true; m_feedbackDate = value; }

    /**
     * <p>The event feedback date.</p>
     */
    inline void SetFeedbackDate(Aws::Utils::DateTime&& value) { m_feedbackDateHasBeenSet = true; m_feedbackDate = std::move(value); }

    /**
     * <p>The event feedback date.</p>
     */
    inline EventFeedbackType& WithFeedbackDate(const Aws::Utils::DateTime& value) { SetFeedbackDate(value); return *this;}

    /**
     * <p>The event feedback date.</p>
     */
    inline EventFeedbackType& WithFeedbackDate(Aws::Utils::DateTime&& value) { SetFeedbackDate(std::move(value)); return *this;}

  private:

    FeedbackValueType m_feedbackValue;
    bool m_feedbackValueHasBeenSet;

    Aws::String m_provider;
    bool m_providerHasBeenSet;

    Aws::Utils::DateTime m_feedbackDate;
    bool m_feedbackDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
