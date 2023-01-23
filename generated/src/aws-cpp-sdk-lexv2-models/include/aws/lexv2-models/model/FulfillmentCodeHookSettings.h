/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/PostFulfillmentStatusSpecification.h>
#include <aws/lexv2-models/model/FulfillmentUpdatesSpecification.h>
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
   * <p>Determines if a Lambda function should be invoked for a specific
   * intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/FulfillmentCodeHookSettings">AWS
   * API Reference</a></p>
   */
  class FulfillmentCodeHookSettings
  {
  public:
    AWS_LEXMODELSV2_API FulfillmentCodeHookSettings();
    AWS_LEXMODELSV2_API FulfillmentCodeHookSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API FulfillmentCodeHookSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline FulfillmentCodeHookSettings& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Provides settings for messages sent to the user for after the Lambda
     * fulfillment function completes. Post-fulfillment messages can be sent for both
     * streaming and non-streaming conversations.</p>
     */
    inline const PostFulfillmentStatusSpecification& GetPostFulfillmentStatusSpecification() const{ return m_postFulfillmentStatusSpecification; }

    /**
     * <p>Provides settings for messages sent to the user for after the Lambda
     * fulfillment function completes. Post-fulfillment messages can be sent for both
     * streaming and non-streaming conversations.</p>
     */
    inline bool PostFulfillmentStatusSpecificationHasBeenSet() const { return m_postFulfillmentStatusSpecificationHasBeenSet; }

    /**
     * <p>Provides settings for messages sent to the user for after the Lambda
     * fulfillment function completes. Post-fulfillment messages can be sent for both
     * streaming and non-streaming conversations.</p>
     */
    inline void SetPostFulfillmentStatusSpecification(const PostFulfillmentStatusSpecification& value) { m_postFulfillmentStatusSpecificationHasBeenSet = true; m_postFulfillmentStatusSpecification = value; }

    /**
     * <p>Provides settings for messages sent to the user for after the Lambda
     * fulfillment function completes. Post-fulfillment messages can be sent for both
     * streaming and non-streaming conversations.</p>
     */
    inline void SetPostFulfillmentStatusSpecification(PostFulfillmentStatusSpecification&& value) { m_postFulfillmentStatusSpecificationHasBeenSet = true; m_postFulfillmentStatusSpecification = std::move(value); }

    /**
     * <p>Provides settings for messages sent to the user for after the Lambda
     * fulfillment function completes. Post-fulfillment messages can be sent for both
     * streaming and non-streaming conversations.</p>
     */
    inline FulfillmentCodeHookSettings& WithPostFulfillmentStatusSpecification(const PostFulfillmentStatusSpecification& value) { SetPostFulfillmentStatusSpecification(value); return *this;}

    /**
     * <p>Provides settings for messages sent to the user for after the Lambda
     * fulfillment function completes. Post-fulfillment messages can be sent for both
     * streaming and non-streaming conversations.</p>
     */
    inline FulfillmentCodeHookSettings& WithPostFulfillmentStatusSpecification(PostFulfillmentStatusSpecification&& value) { SetPostFulfillmentStatusSpecification(std::move(value)); return *this;}


    /**
     * <p>Provides settings for update messages sent to the user for long-running
     * Lambda fulfillment functions. Fulfillment updates can be used only with
     * streaming conversations.</p>
     */
    inline const FulfillmentUpdatesSpecification& GetFulfillmentUpdatesSpecification() const{ return m_fulfillmentUpdatesSpecification; }

    /**
     * <p>Provides settings for update messages sent to the user for long-running
     * Lambda fulfillment functions. Fulfillment updates can be used only with
     * streaming conversations.</p>
     */
    inline bool FulfillmentUpdatesSpecificationHasBeenSet() const { return m_fulfillmentUpdatesSpecificationHasBeenSet; }

    /**
     * <p>Provides settings for update messages sent to the user for long-running
     * Lambda fulfillment functions. Fulfillment updates can be used only with
     * streaming conversations.</p>
     */
    inline void SetFulfillmentUpdatesSpecification(const FulfillmentUpdatesSpecification& value) { m_fulfillmentUpdatesSpecificationHasBeenSet = true; m_fulfillmentUpdatesSpecification = value; }

    /**
     * <p>Provides settings for update messages sent to the user for long-running
     * Lambda fulfillment functions. Fulfillment updates can be used only with
     * streaming conversations.</p>
     */
    inline void SetFulfillmentUpdatesSpecification(FulfillmentUpdatesSpecification&& value) { m_fulfillmentUpdatesSpecificationHasBeenSet = true; m_fulfillmentUpdatesSpecification = std::move(value); }

    /**
     * <p>Provides settings for update messages sent to the user for long-running
     * Lambda fulfillment functions. Fulfillment updates can be used only with
     * streaming conversations.</p>
     */
    inline FulfillmentCodeHookSettings& WithFulfillmentUpdatesSpecification(const FulfillmentUpdatesSpecification& value) { SetFulfillmentUpdatesSpecification(value); return *this;}

    /**
     * <p>Provides settings for update messages sent to the user for long-running
     * Lambda fulfillment functions. Fulfillment updates can be used only with
     * streaming conversations.</p>
     */
    inline FulfillmentCodeHookSettings& WithFulfillmentUpdatesSpecification(FulfillmentUpdatesSpecification&& value) { SetFulfillmentUpdatesSpecification(std::move(value)); return *this;}


    /**
     * <p>Determines whether the fulfillment code hook is used. When
     * <code>active</code> is false, the code hook doesn't run.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Determines whether the fulfillment code hook is used. When
     * <code>active</code> is false, the code hook doesn't run.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Determines whether the fulfillment code hook is used. When
     * <code>active</code> is false, the code hook doesn't run.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Determines whether the fulfillment code hook is used. When
     * <code>active</code> is false, the code hook doesn't run.</p>
     */
    inline FulfillmentCodeHookSettings& WithActive(bool value) { SetActive(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    PostFulfillmentStatusSpecification m_postFulfillmentStatusSpecification;
    bool m_postFulfillmentStatusSpecificationHasBeenSet = false;

    FulfillmentUpdatesSpecification m_fulfillmentUpdatesSpecification;
    bool m_fulfillmentUpdatesSpecificationHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
