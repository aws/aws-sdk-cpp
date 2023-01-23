/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about the payload of an event recording Amazon CodeCatalyst
   * activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/EventPayload">AWS
   * API Reference</a></p>
   */
  class EventPayload
  {
  public:
    AWS_CODECATALYST_API EventPayload();
    AWS_CODECATALYST_API EventPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API EventPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of content in the event payload.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline EventPayload& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline EventPayload& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The type of content in the event payload.</p>
     */
    inline EventPayload& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The data included in the event payload.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The data included in the event payload.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data included in the event payload.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data included in the event payload.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data included in the event payload.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The data included in the event payload.</p>
     */
    inline EventPayload& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The data included in the event payload.</p>
     */
    inline EventPayload& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data included in the event payload.</p>
     */
    inline EventPayload& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
