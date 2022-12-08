/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/FulfillmentStartResponseSpecification.h>
#include <aws/lexv2-models/model/FulfillmentUpdateResponseSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides information for updating the user on the progress of fulfilling an
   * intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/FulfillmentUpdatesSpecification">AWS
   * API Reference</a></p>
   */
  class FulfillmentUpdatesSpecification
  {
  public:
    AWS_LEXMODELSV2_API FulfillmentUpdatesSpecification();
    AWS_LEXMODELSV2_API FulfillmentUpdatesSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FulfillmentUpdatesSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether fulfillment updates are sent to the user. When this field
     * is true, updates are sent.</p> <p>If the <code>active</code> field is set to
     * true, the <code>startResponse</code>, <code>updateResponse</code>, and
     * <code>timeoutInSeconds</code> fields are required.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Determines whether fulfillment updates are sent to the user. When this field
     * is true, updates are sent.</p> <p>If the <code>active</code> field is set to
     * true, the <code>startResponse</code>, <code>updateResponse</code>, and
     * <code>timeoutInSeconds</code> fields are required.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Determines whether fulfillment updates are sent to the user. When this field
     * is true, updates are sent.</p> <p>If the <code>active</code> field is set to
     * true, the <code>startResponse</code>, <code>updateResponse</code>, and
     * <code>timeoutInSeconds</code> fields are required.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Determines whether fulfillment updates are sent to the user. When this field
     * is true, updates are sent.</p> <p>If the <code>active</code> field is set to
     * true, the <code>startResponse</code>, <code>updateResponse</code>, and
     * <code>timeoutInSeconds</code> fields are required.</p>
     */
    inline FulfillmentUpdatesSpecification& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline const FulfillmentStartResponseSpecification& GetStartResponse() const{ return m_startResponse; }

    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline bool StartResponseHasBeenSet() const { return m_startResponseHasBeenSet; }

    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline void SetStartResponse(const FulfillmentStartResponseSpecification& value) { m_startResponseHasBeenSet = true; m_startResponse = value; }

    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline void SetStartResponse(FulfillmentStartResponseSpecification&& value) { m_startResponseHasBeenSet = true; m_startResponse = std::move(value); }

    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline FulfillmentUpdatesSpecification& WithStartResponse(const FulfillmentStartResponseSpecification& value) { SetStartResponse(value); return *this;}

    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline FulfillmentUpdatesSpecification& WithStartResponse(FulfillmentStartResponseSpecification&& value) { SetStartResponse(std::move(value)); return *this;}


    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline const FulfillmentUpdateResponseSpecification& GetUpdateResponse() const{ return m_updateResponse; }

    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline bool UpdateResponseHasBeenSet() const { return m_updateResponseHasBeenSet; }

    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline void SetUpdateResponse(const FulfillmentUpdateResponseSpecification& value) { m_updateResponseHasBeenSet = true; m_updateResponse = value; }

    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline void SetUpdateResponse(FulfillmentUpdateResponseSpecification&& value) { m_updateResponseHasBeenSet = true; m_updateResponse = std::move(value); }

    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline FulfillmentUpdatesSpecification& WithUpdateResponse(const FulfillmentUpdateResponseSpecification& value) { SetUpdateResponse(value); return *this;}

    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline FulfillmentUpdatesSpecification& WithUpdateResponse(FulfillmentUpdateResponseSpecification&& value) { SetUpdateResponse(std::move(value)); return *this;}


    /**
     * <p>The length of time that the fulfillment Lambda function should run before it
     * times out.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The length of time that the fulfillment Lambda function should run before it
     * times out.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The length of time that the fulfillment Lambda function should run before it
     * times out.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The length of time that the fulfillment Lambda function should run before it
     * times out.</p>
     */
    inline FulfillmentUpdatesSpecification& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}

  private:

    bool m_active;
    bool m_activeHasBeenSet = false;

    FulfillmentStartResponseSpecification m_startResponse;
    bool m_startResponseHasBeenSet = false;

    FulfillmentUpdateResponseSpecification m_updateResponse;
    bool m_updateResponseHasBeenSet = false;

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
