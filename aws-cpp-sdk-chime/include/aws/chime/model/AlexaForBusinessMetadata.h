/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Alexa for Business metadata associated with an Amazon Chime user, used to
   * integrate Alexa for Business with a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AlexaForBusinessMetadata">AWS
   * API Reference</a></p>
   */
  class AlexaForBusinessMetadata
  {
  public:
    AWS_CHIME_API AlexaForBusinessMetadata();
    AWS_CHIME_API AlexaForBusinessMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API AlexaForBusinessMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Starts or stops Alexa for Business.</p>
     */
    inline bool GetIsAlexaForBusinessEnabled() const{ return m_isAlexaForBusinessEnabled; }

    /**
     * <p>Starts or stops Alexa for Business.</p>
     */
    inline bool IsAlexaForBusinessEnabledHasBeenSet() const { return m_isAlexaForBusinessEnabledHasBeenSet; }

    /**
     * <p>Starts or stops Alexa for Business.</p>
     */
    inline void SetIsAlexaForBusinessEnabled(bool value) { m_isAlexaForBusinessEnabledHasBeenSet = true; m_isAlexaForBusinessEnabled = value; }

    /**
     * <p>Starts or stops Alexa for Business.</p>
     */
    inline AlexaForBusinessMetadata& WithIsAlexaForBusinessEnabled(bool value) { SetIsAlexaForBusinessEnabled(value); return *this;}


    /**
     * <p>The ARN of the room resource.</p>
     */
    inline const Aws::String& GetAlexaForBusinessRoomArn() const{ return m_alexaForBusinessRoomArn; }

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline bool AlexaForBusinessRoomArnHasBeenSet() const { return m_alexaForBusinessRoomArnHasBeenSet; }

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline void SetAlexaForBusinessRoomArn(const Aws::String& value) { m_alexaForBusinessRoomArnHasBeenSet = true; m_alexaForBusinessRoomArn = value; }

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline void SetAlexaForBusinessRoomArn(Aws::String&& value) { m_alexaForBusinessRoomArnHasBeenSet = true; m_alexaForBusinessRoomArn = std::move(value); }

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline void SetAlexaForBusinessRoomArn(const char* value) { m_alexaForBusinessRoomArnHasBeenSet = true; m_alexaForBusinessRoomArn.assign(value); }

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline AlexaForBusinessMetadata& WithAlexaForBusinessRoomArn(const Aws::String& value) { SetAlexaForBusinessRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline AlexaForBusinessMetadata& WithAlexaForBusinessRoomArn(Aws::String&& value) { SetAlexaForBusinessRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room resource.</p>
     */
    inline AlexaForBusinessMetadata& WithAlexaForBusinessRoomArn(const char* value) { SetAlexaForBusinessRoomArn(value); return *this;}

  private:

    bool m_isAlexaForBusinessEnabled;
    bool m_isAlexaForBusinessEnabledHasBeenSet = false;

    Aws::String m_alexaForBusinessRoomArn;
    bool m_alexaForBusinessRoomArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
