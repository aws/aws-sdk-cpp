/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ContactState.h>
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
   * <p>Filters user data based on the contact information that is associated to the
   * users. It contains a list of <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
   * states</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFilter">AWS
   * API Reference</a></p>
   */
  class ContactFilter
  {
  public:
    AWS_CONNECT_API ContactFilter();
    AWS_CONNECT_API ContactFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline const Aws::Vector<ContactState>& GetContactStates() const{ return m_contactStates; }

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline bool ContactStatesHasBeenSet() const { return m_contactStatesHasBeenSet; }

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline void SetContactStates(const Aws::Vector<ContactState>& value) { m_contactStatesHasBeenSet = true; m_contactStates = value; }

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline void SetContactStates(Aws::Vector<ContactState>&& value) { m_contactStatesHasBeenSet = true; m_contactStates = std::move(value); }

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline ContactFilter& WithContactStates(const Aws::Vector<ContactState>& value) { SetContactStates(value); return *this;}

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline ContactFilter& WithContactStates(Aws::Vector<ContactState>&& value) { SetContactStates(std::move(value)); return *this;}

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline ContactFilter& AddContactStates(const ContactState& value) { m_contactStatesHasBeenSet = true; m_contactStates.push_back(value); return *this; }

    /**
     * <p>A list of up to 9 <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">contact
     * states</a>.</p>
     */
    inline ContactFilter& AddContactStates(ContactState&& value) { m_contactStatesHasBeenSet = true; m_contactStates.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContactState> m_contactStates;
    bool m_contactStatesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
