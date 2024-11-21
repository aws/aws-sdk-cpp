/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The command payload object that contains the instructions for the device to
   * process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandPayload">AWS
   * API Reference</a></p>
   */
  class CommandPayload
  {
  public:
    AWS_IOT_API CommandPayload();
    AWS_IOT_API CommandPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CommandPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The static payload file for the command.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Utils::ByteBuffer& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Utils::ByteBuffer&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline CommandPayload& WithContent(const Aws::Utils::ByteBuffer& value) { SetContent(value); return *this;}
    inline CommandPayload& WithContent(Aws::Utils::ByteBuffer&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type that specifies the format type of the payload file. This
     * field must use a type/subtype format, such as <code>application/json</code>. For
     * information about various content types, see <a
     * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/MIME_types/Common_types">Common
     * MIME types</a>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline CommandPayload& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline CommandPayload& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline CommandPayload& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
