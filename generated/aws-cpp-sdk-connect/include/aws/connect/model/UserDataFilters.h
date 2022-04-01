/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ContactFilter.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A filter for the user data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserDataFilters">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API UserDataFilters
  {
  public:
    UserDataFilters();
    UserDataFilters(Aws::Utils::Json::JsonView jsonValue);
    UserDataFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline UserDataFilters& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline UserDataFilters& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline UserDataFilters& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline UserDataFilters& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains information about a queue resource for which metrics are
     * returned.</p>
     */
    inline UserDataFilters& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }


    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline const ContactFilter& GetContactFilter() const{ return m_contactFilter; }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline bool ContactFilterHasBeenSet() const { return m_contactFilterHasBeenSet; }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline void SetContactFilter(const ContactFilter& value) { m_contactFilterHasBeenSet = true; m_contactFilter = value; }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline void SetContactFilter(ContactFilter&& value) { m_contactFilterHasBeenSet = true; m_contactFilter = std::move(value); }

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline UserDataFilters& WithContactFilter(const ContactFilter& value) { SetContactFilter(value); return *this;}

    /**
     * <p>A filter for the user data based on the contact information that is
     * associated to the user. It contains a list of contact states. </p>
     */
    inline UserDataFilters& WithContactFilter(ContactFilter&& value) { SetContactFilter(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet;

    ContactFilter m_contactFilter;
    bool m_contactFilterHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
