﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputClippingSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for the "switch input" action: to switch from ingesting one input to
   * ingesting another input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSwitchScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputSwitchScheduleActionSettings
  {
  public:
    InputSwitchScheduleActionSettings();
    InputSwitchScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    InputSwitchScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline const Aws::String& GetInputAttachmentNameReference() const{ return m_inputAttachmentNameReference; }

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline bool InputAttachmentNameReferenceHasBeenSet() const { return m_inputAttachmentNameReferenceHasBeenSet; }

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline void SetInputAttachmentNameReference(const Aws::String& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = value; }

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline void SetInputAttachmentNameReference(Aws::String&& value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference = std::move(value); }

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline void SetInputAttachmentNameReference(const char* value) { m_inputAttachmentNameReferenceHasBeenSet = true; m_inputAttachmentNameReference.assign(value); }

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(const Aws::String& value) { SetInputAttachmentNameReference(value); return *this;}

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(Aws::String&& value) { SetInputAttachmentNameReference(std::move(value)); return *this;}

    /**
     * The name of the input attachment (not the name of the input!) to switch to. The
     * name is specified in the channel configuration.
     */
    inline InputSwitchScheduleActionSettings& WithInputAttachmentNameReference(const char* value) { SetInputAttachmentNameReference(value); return *this;}


    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline const InputClippingSettings& GetInputClippingSettings() const{ return m_inputClippingSettings; }

    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline bool InputClippingSettingsHasBeenSet() const { return m_inputClippingSettingsHasBeenSet; }

    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline void SetInputClippingSettings(const InputClippingSettings& value) { m_inputClippingSettingsHasBeenSet = true; m_inputClippingSettings = value; }

    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline void SetInputClippingSettings(InputClippingSettings&& value) { m_inputClippingSettingsHasBeenSet = true; m_inputClippingSettings = std::move(value); }

    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline InputSwitchScheduleActionSettings& WithInputClippingSettings(const InputClippingSettings& value) { SetInputClippingSettings(value); return *this;}

    /**
     * Settings to let you create a clip of the file input, in order to set up the
     * input to ingest only a portion of the file.
     */
    inline InputSwitchScheduleActionSettings& WithInputClippingSettings(InputClippingSettings&& value) { SetInputClippingSettings(std::move(value)); return *this;}


    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline const Aws::Vector<Aws::String>& GetUrlPath() const{ return m_urlPath; }

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline bool UrlPathHasBeenSet() const { return m_urlPathHasBeenSet; }

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline void SetUrlPath(const Aws::Vector<Aws::String>& value) { m_urlPathHasBeenSet = true; m_urlPath = value; }

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline void SetUrlPath(Aws::Vector<Aws::String>&& value) { m_urlPathHasBeenSet = true; m_urlPath = std::move(value); }

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline InputSwitchScheduleActionSettings& WithUrlPath(const Aws::Vector<Aws::String>& value) { SetUrlPath(value); return *this;}

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline InputSwitchScheduleActionSettings& WithUrlPath(Aws::Vector<Aws::String>&& value) { SetUrlPath(std::move(value)); return *this;}

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline InputSwitchScheduleActionSettings& AddUrlPath(const Aws::String& value) { m_urlPathHasBeenSet = true; m_urlPath.push_back(value); return *this; }

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline InputSwitchScheduleActionSettings& AddUrlPath(Aws::String&& value) { m_urlPathHasBeenSet = true; m_urlPath.push_back(std::move(value)); return *this; }

    /**
     * The value for the variable portion of the URL for the dynamic input, for this
     * instance of the input. Each time you use the same dynamic input in an input
     * switch action, you can provide a different value, in order to connect the input
     * to a different content source.
     */
    inline InputSwitchScheduleActionSettings& AddUrlPath(const char* value) { m_urlPathHasBeenSet = true; m_urlPath.push_back(value); return *this; }

  private:

    Aws::String m_inputAttachmentNameReference;
    bool m_inputAttachmentNameReferenceHasBeenSet;

    InputClippingSettings m_inputClippingSettings;
    bool m_inputClippingSettingsHasBeenSet;

    Aws::Vector<Aws::String> m_urlPath;
    bool m_urlPathHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
