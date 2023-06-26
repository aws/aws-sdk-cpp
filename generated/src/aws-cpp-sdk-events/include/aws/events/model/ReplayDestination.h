/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A <code>ReplayDestination</code> object that contains details about a
   * replay.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ReplayDestination">AWS
   * API Reference</a></p>
   */
  class ReplayDestination
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ReplayDestination();
    AWS_CLOUDWATCHEVENTS_API ReplayDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ReplayDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline ReplayDestination& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline ReplayDestination& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline ReplayDestination& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterArns() const{ return m_filterArns; }

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline bool FilterArnsHasBeenSet() const { return m_filterArnsHasBeenSet; }

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline void SetFilterArns(const Aws::Vector<Aws::String>& value) { m_filterArnsHasBeenSet = true; m_filterArns = value; }

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline void SetFilterArns(Aws::Vector<Aws::String>&& value) { m_filterArnsHasBeenSet = true; m_filterArns = std::move(value); }

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline ReplayDestination& WithFilterArns(const Aws::Vector<Aws::String>& value) { SetFilterArns(value); return *this;}

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline ReplayDestination& WithFilterArns(Aws::Vector<Aws::String>&& value) { SetFilterArns(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline ReplayDestination& AddFilterArns(const Aws::String& value) { m_filterArnsHasBeenSet = true; m_filterArns.push_back(value); return *this; }

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline ReplayDestination& AddFilterArns(Aws::String&& value) { m_filterArnsHasBeenSet = true; m_filterArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline ReplayDestination& AddFilterArns(const char* value) { m_filterArnsHasBeenSet = true; m_filterArns.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterArns;
    bool m_filterArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
