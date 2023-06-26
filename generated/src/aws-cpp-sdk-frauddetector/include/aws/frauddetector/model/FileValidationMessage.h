/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The message details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/FileValidationMessage">AWS
   * API Reference</a></p>
   */
  class FileValidationMessage
  {
  public:
    AWS_FRAUDDETECTOR_API FileValidationMessage();
    AWS_FRAUDDETECTOR_API FileValidationMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API FileValidationMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message title.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The message title.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The message title.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The message title.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The message title.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The message title.</p>
     */
    inline FileValidationMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The message title.</p>
     */
    inline FileValidationMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The message title.</p>
     */
    inline FileValidationMessage& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The message content.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The message content.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The message content.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The message content.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The message content.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The message content.</p>
     */
    inline FileValidationMessage& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The message content.</p>
     */
    inline FileValidationMessage& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The message content.</p>
     */
    inline FileValidationMessage& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The message type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The message type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The message type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The message type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The message type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The message type.</p>
     */
    inline FileValidationMessage& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The message type.</p>
     */
    inline FileValidationMessage& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The message type.</p>
     */
    inline FileValidationMessage& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
