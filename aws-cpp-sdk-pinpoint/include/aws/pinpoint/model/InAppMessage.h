/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/Layout.h>
#include <aws/pinpoint/model/InAppMessageContent.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides all fields required for building an in-app message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessage">AWS
   * API Reference</a></p>
   */
  class InAppMessage
  {
  public:
    AWS_PINPOINT_API InAppMessage();
    AWS_PINPOINT_API InAppMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>In-app message content.</p>
     */
    inline const Aws::Vector<InAppMessageContent>& GetContent() const{ return m_content; }

    /**
     * <p>In-app message content.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>In-app message content.</p>
     */
    inline void SetContent(const Aws::Vector<InAppMessageContent>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>In-app message content.</p>
     */
    inline void SetContent(Aws::Vector<InAppMessageContent>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>In-app message content.</p>
     */
    inline InAppMessage& WithContent(const Aws::Vector<InAppMessageContent>& value) { SetContent(value); return *this;}

    /**
     * <p>In-app message content.</p>
     */
    inline InAppMessage& WithContent(Aws::Vector<InAppMessageContent>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>In-app message content.</p>
     */
    inline InAppMessage& AddContent(const InAppMessageContent& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }

    /**
     * <p>In-app message content.</p>
     */
    inline InAppMessage& AddContent(InAppMessageContent&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }


    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomConfig() const{ return m_customConfig; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline bool CustomConfigHasBeenSet() const { return m_customConfigHasBeenSet; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline void SetCustomConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_customConfigHasBeenSet = true; m_customConfig = value; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline void SetCustomConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_customConfigHasBeenSet = true; m_customConfig = std::move(value); }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& WithCustomConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomConfig(value); return *this;}

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& WithCustomConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomConfig(std::move(value)); return *this;}

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(const Aws::String& key, const Aws::String& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, value); return *this; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(Aws::String&& key, const Aws::String& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(const Aws::String& key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(Aws::String&& key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(const char* key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(Aws::String&& key, const char* value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom config to be sent to SDK.</p>
     */
    inline InAppMessage& AddCustomConfig(const char* key, const char* value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, value); return *this; }


    /**
     * <p>The layout of the message.</p>
     */
    inline const Layout& GetLayout() const{ return m_layout; }

    /**
     * <p>The layout of the message.</p>
     */
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }

    /**
     * <p>The layout of the message.</p>
     */
    inline void SetLayout(const Layout& value) { m_layoutHasBeenSet = true; m_layout = value; }

    /**
     * <p>The layout of the message.</p>
     */
    inline void SetLayout(Layout&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }

    /**
     * <p>The layout of the message.</p>
     */
    inline InAppMessage& WithLayout(const Layout& value) { SetLayout(value); return *this;}

    /**
     * <p>The layout of the message.</p>
     */
    inline InAppMessage& WithLayout(Layout&& value) { SetLayout(std::move(value)); return *this;}

  private:

    Aws::Vector<InAppMessageContent> m_content;
    bool m_contentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customConfig;
    bool m_customConfigHasBeenSet = false;

    Layout m_layout;
    bool m_layoutHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
