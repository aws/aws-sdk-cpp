/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>A filter for related items of type <code>Contact</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ContactFilter">AWS
   * API Reference</a></p>
   */
  class ContactFilter
  {
  public:
    AWS_CONNECTCASES_API ContactFilter();
    AWS_CONNECTCASES_API ContactFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API ContactFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannel() const{ return m_channel; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline void SetChannel(const Aws::Vector<Aws::String>& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline void SetChannel(Aws::Vector<Aws::String>&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactFilter& WithChannel(const Aws::Vector<Aws::String>& value) { SetChannel(value); return *this;}

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactFilter& WithChannel(Aws::Vector<Aws::String>&& value) { SetChannel(std::move(value)); return *this;}

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactFilter& AddChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel.push_back(value); return *this; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactFilter& AddChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of channels to filter on for related items of type
     * <code>Contact</code>.</p>
     */
    inline ContactFilter& AddChannel(const char* value) { m_channelHasBeenSet = true; m_channel.push_back(value); return *this; }


    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline ContactFilter& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline ContactFilter& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of a contact in Amazon Connect.</p>
     */
    inline ContactFilter& WithContactArn(const char* value) { SetContactArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_channel;
    bool m_channelHasBeenSet = false;

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
