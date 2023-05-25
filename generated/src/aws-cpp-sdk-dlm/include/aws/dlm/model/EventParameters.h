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
    AWS_DLM_API EventParameters();
    AWS_DLM_API EventParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API EventParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline const EventTypeValues& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline void SetEventType(const EventTypeValues& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline void SetEventType(EventTypeValues&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline EventParameters& WithEventType(const EventTypeValues& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of event. Currently, only snapshot sharing events are supported.</p>
     */
    inline EventParameters& WithEventType(EventTypeValues&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotOwner() const{ return m_snapshotOwner; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline bool SnapshotOwnerHasBeenSet() const { return m_snapshotOwnerHasBeenSet; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline void SetSnapshotOwner(const Aws::Vector<Aws::String>& value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner = value; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline void SetSnapshotOwner(Aws::Vector<Aws::String>&& value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner = std::move(value); }

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline EventParameters& WithSnapshotOwner(const Aws::Vector<Aws::String>& value) { SetSnapshotOwner(value); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline EventParameters& WithSnapshotOwner(Aws::Vector<Aws::String>&& value) { SetSnapshotOwner(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline EventParameters& AddSnapshotOwner(const Aws::String& value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner.push_back(value); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline EventParameters& AddSnapshotOwner(Aws::String&& value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Amazon Web Services accounts that can trigger policy by
     * sharing snapshots with your account. The policy only runs if one of the
     * specified Amazon Web Services accounts shares a snapshot with your account.</p>
     */
    inline EventParameters& AddSnapshotOwner(const char* value) { m_snapshotOwnerHasBeenSet = true; m_snapshotOwner.push_back(value); return *this; }


    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline const Aws::String& GetDescriptionRegex() const{ return m_descriptionRegex; }

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline bool DescriptionRegexHasBeenSet() const { return m_descriptionRegexHasBeenSet; }

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline void SetDescriptionRegex(const Aws::String& value) { m_descriptionRegexHasBeenSet = true; m_descriptionRegex = value; }

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline void SetDescriptionRegex(Aws::String&& value) { m_descriptionRegexHasBeenSet = true; m_descriptionRegex = std::move(value); }

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline void SetDescriptionRegex(const char* value) { m_descriptionRegexHasBeenSet = true; m_descriptionRegex.assign(value); }

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline EventParameters& WithDescriptionRegex(const Aws::String& value) { SetDescriptionRegex(value); return *this;}

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline EventParameters& WithDescriptionRegex(Aws::String&& value) { SetDescriptionRegex(std::move(value)); return *this;}

    /**
     * <p>The snapshot description that can trigger the policy. The description pattern
     * is specified using a regular expression. The policy runs only if a snapshot with
     * a description that matches the specified pattern is shared with your
     * account.</p> <p>For example, specifying <code>^.*Created for policy:
     * policy-1234567890abcdef0.*$</code> configures the policy to run only if
     * snapshots created by policy <code>policy-1234567890abcdef0</code> are shared
     * with your account.</p>
     */
    inline EventParameters& WithDescriptionRegex(const char* value) { SetDescriptionRegex(value); return *this;}

  private:

    EventTypeValues m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotOwner;
    bool m_snapshotOwnerHasBeenSet = false;

    Aws::String m_descriptionRegex;
    bool m_descriptionRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
