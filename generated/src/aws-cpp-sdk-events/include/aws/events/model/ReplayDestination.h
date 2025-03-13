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
    AWS_CLOUDWATCHEVENTS_API ReplayDestination() = default;
    AWS_CLOUDWATCHEVENTS_API ReplayDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ReplayDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the event bus to replay event to. You can replay events only to
     * the event bus specified to create the archive.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ReplayDestination& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ARNs for rules to replay events to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterArns() const { return m_filterArns; }
    inline bool FilterArnsHasBeenSet() const { return m_filterArnsHasBeenSet; }
    template<typename FilterArnsT = Aws::Vector<Aws::String>>
    void SetFilterArns(FilterArnsT&& value) { m_filterArnsHasBeenSet = true; m_filterArns = std::forward<FilterArnsT>(value); }
    template<typename FilterArnsT = Aws::Vector<Aws::String>>
    ReplayDestination& WithFilterArns(FilterArnsT&& value) { SetFilterArns(std::forward<FilterArnsT>(value)); return *this;}
    template<typename FilterArnsT = Aws::String>
    ReplayDestination& AddFilterArns(FilterArnsT&& value) { m_filterArnsHasBeenSet = true; m_filterArns.emplace_back(std::forward<FilterArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterArns;
    bool m_filterArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
