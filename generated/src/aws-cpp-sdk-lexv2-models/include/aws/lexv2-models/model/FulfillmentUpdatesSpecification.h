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
    AWS_LEXMODELSV2_API FulfillmentUpdatesSpecification() = default;
    AWS_LEXMODELSV2_API FulfillmentUpdatesSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FulfillmentUpdatesSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether fulfillment updates are sent to the user. When this field
     * is true, updates are sent.</p> <p>If the <code>active</code> field is set to
     * true, the <code>startResponse</code>, <code>updateResponse</code>, and
     * <code>timeoutInSeconds</code> fields are required.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline FulfillmentUpdatesSpecification& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information for the message sent to users when the
     * fulfillment Lambda functions starts running.</p>
     */
    inline const FulfillmentStartResponseSpecification& GetStartResponse() const { return m_startResponse; }
    inline bool StartResponseHasBeenSet() const { return m_startResponseHasBeenSet; }
    template<typename StartResponseT = FulfillmentStartResponseSpecification>
    void SetStartResponse(StartResponseT&& value) { m_startResponseHasBeenSet = true; m_startResponse = std::forward<StartResponseT>(value); }
    template<typename StartResponseT = FulfillmentStartResponseSpecification>
    FulfillmentUpdatesSpecification& WithStartResponse(StartResponseT&& value) { SetStartResponse(std::forward<StartResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides configuration information for messages sent periodically to the user
     * while the fulfillment Lambda function is running.</p>
     */
    inline const FulfillmentUpdateResponseSpecification& GetUpdateResponse() const { return m_updateResponse; }
    inline bool UpdateResponseHasBeenSet() const { return m_updateResponseHasBeenSet; }
    template<typename UpdateResponseT = FulfillmentUpdateResponseSpecification>
    void SetUpdateResponse(UpdateResponseT&& value) { m_updateResponseHasBeenSet = true; m_updateResponse = std::forward<UpdateResponseT>(value); }
    template<typename UpdateResponseT = FulfillmentUpdateResponseSpecification>
    FulfillmentUpdatesSpecification& WithUpdateResponse(UpdateResponseT&& value) { SetUpdateResponse(std::forward<UpdateResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that the fulfillment Lambda function should run before it
     * times out.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline FulfillmentUpdatesSpecification& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}
  private:

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    FulfillmentStartResponseSpecification m_startResponse;
    bool m_startResponseHasBeenSet = false;

    FulfillmentUpdateResponseSpecification m_updateResponse;
    bool m_updateResponseHasBeenSet = false;

    int m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
