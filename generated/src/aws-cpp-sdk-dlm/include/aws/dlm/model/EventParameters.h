/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/EventTypeValues.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Event-based policies only]</b> Specifies an event that activates an
   * event-based policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/EventParameters">AWS
   * API Reference</a></p>
   */
  class EventParameters
  {
  public:
    AWS_DLM_API EventParameters() = default;
    AWS_DLM_API EventParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API EventParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline EventTypeValues GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(EventTypeValues value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline EventParameters& WithEventType(EventTypeValues value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotOwner() const { return m_snapshotOwner; }
    inline bool SnapshotOwnerHasBeenSet() const { return m_snapshotOwnerHasBeenSet; }
    template<typename SnapshotOwnerT = Aws::Vector<Aws::String>>
    void SetSnapshotOwner(SnapshotOwnerT&& value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner = std::forward<SnapshotOwnerT>(value); }
    template<typename SnapshotOwnerT = Aws::Vector<Aws::String>>
    EventParameters& WithSnapshotOwner(SnapshotOwnerT&& value) { SetSnapshotOwner(std::forward<SnapshotOwnerT>(value)); return *this;}
    template<typename SnapshotOwnerT = Aws::String>
    EventParameters& AddSnapshotOwner(SnapshotOwnerT&& value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner.emplace_back(std::forward<SnapshotOwnerT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline const Aws::String& GetDescriptionRegex() const { return m_descriptionRegex; }
    inline bool DescriptionRegexHasBeenSet() const { return m_descriptionRegexHasBeenSet; }
    template<typename DescriptionRegexT = Aws::String>
    void SetDescriptionRegex(DescriptionRegexT&& value) { m_descriptionRegexHasBeenSet = true; m_descriptionRegex = std::forward<DescriptionRegexT>(value); }
    template<typename DescriptionRegexT = Aws::String>
    EventParameters& WithDescriptionRegex(DescriptionRegexT&& value) { SetDescriptionRegex(std::forward<DescriptionRegexT>(value)); return *this;}
    ///@}
  private:

    EventTypeValues m_eventType{EventTypeValues::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotOwner;
    bool m_snapshotOwnerHasBeenSet = false;

    Aws::String m_descriptionRegex;
    bool m_descriptionRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
