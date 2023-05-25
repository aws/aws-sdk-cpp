/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about a returned CloudTrail channel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_CLOUDTRAIL_API Channel();
    AWS_CLOUDTRAIL_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline Channel& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline Channel& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a channel.</p>
     */
    inline Channel& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the name is
     * <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * created by the Amazon Web Services service. </p>
     */
    inline Channel& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
