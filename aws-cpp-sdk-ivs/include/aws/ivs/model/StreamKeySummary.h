﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Summary information about a stream key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StreamKeySummary">AWS
   * API Reference</a></p>
   */
  class AWS_IVS_API StreamKeySummary
  {
  public:
    StreamKeySummary();
    StreamKeySummary(Aws::Utils::Json::JsonView jsonValue);
    StreamKeySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Stream-key ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Stream-key ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Stream-key ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Stream-key ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Stream-key ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Stream-key ARN.</p>
     */
    inline StreamKeySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Stream-key ARN.</p>
     */
    inline StreamKeySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Stream-key ARN.</p>
     */
    inline StreamKeySummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline StreamKeySummary& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline StreamKeySummary& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>Channel ARN for the stream.</p>
     */
    inline StreamKeySummary& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline StreamKeySummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
