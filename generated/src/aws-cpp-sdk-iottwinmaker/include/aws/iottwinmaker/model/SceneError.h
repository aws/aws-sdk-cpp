/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SceneErrorCode.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The scene error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SceneError">AWS
   * API Reference</a></p>
   */
  class SceneError
  {
  public:
    AWS_IOTTWINMAKER_API SceneError();
    AWS_IOTTWINMAKER_API SceneError(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SceneError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SceneError code.</p>
     */
    inline const SceneErrorCode& GetCode() const{ return m_code; }

    /**
     * <p>The SceneError code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The SceneError code.</p>
     */
    inline void SetCode(const SceneErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The SceneError code.</p>
     */
    inline void SetCode(SceneErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The SceneError code.</p>
     */
    inline SceneError& WithCode(const SceneErrorCode& value) { SetCode(value); return *this;}

    /**
     * <p>The SceneError code.</p>
     */
    inline SceneError& WithCode(SceneErrorCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The SceneError message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The SceneError message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The SceneError message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The SceneError message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The SceneError message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The SceneError message.</p>
     */
    inline SceneError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The SceneError message.</p>
     */
    inline SceneError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The SceneError message.</p>
     */
    inline SceneError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    SceneErrorCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
