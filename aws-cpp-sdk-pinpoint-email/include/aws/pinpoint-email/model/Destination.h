/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that describes the recipients for an email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Destination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API Destination
  {
  public:
    Destination();
    Destination(Aws::Utils::Json::JsonView jsonValue);
    Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline const Aws::Vector<Aws::String>& GetToAddresses() const{ return m_toAddresses; }

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline void SetToAddresses(const Aws::Vector<Aws::String>& value) { m_toAddressesHasBeenSet = true; m_toAddresses = value; }

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline void SetToAddresses(Aws::Vector<Aws::String>&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::move(value); }

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline Destination& WithToAddresses(const Aws::Vector<Aws::String>& value) { SetToAddresses(value); return *this;}

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline Destination& WithToAddresses(Aws::Vector<Aws::String>&& value) { SetToAddresses(std::move(value)); return *this;}

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline Destination& AddToAddresses(const Aws::String& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline Destination& AddToAddresses(Aws::String&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline Destination& AddToAddresses(const char* value) { m_toAddressesHasBeenSet = true; m_toAddresses.push_back(value); return *this; }


    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcAddresses() const{ return m_ccAddresses; }

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline void SetCcAddresses(const Aws::Vector<Aws::String>& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = value; }

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline void SetCcAddresses(Aws::Vector<Aws::String>&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::move(value); }

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& WithCcAddresses(const Aws::Vector<Aws::String>& value) { SetCcAddresses(value); return *this;}

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& WithCcAddresses(Aws::Vector<Aws::String>&& value) { SetCcAddresses(std::move(value)); return *this;}

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& AddCcAddresses(const Aws::String& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& AddCcAddresses(Aws::String&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& AddCcAddresses(const char* value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.push_back(value); return *this; }


    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBccAddresses() const{ return m_bccAddresses; }

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline bool BccAddressesHasBeenSet() const { return m_bccAddressesHasBeenSet; }

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline void SetBccAddresses(const Aws::Vector<Aws::String>& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = value; }

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline void SetBccAddresses(Aws::Vector<Aws::String>&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = std::move(value); }

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& WithBccAddresses(const Aws::Vector<Aws::String>& value) { SetBccAddresses(value); return *this;}

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& WithBccAddresses(Aws::Vector<Aws::String>&& value) { SetBccAddresses(std::move(value)); return *this;}

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& AddBccAddresses(const Aws::String& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& AddBccAddresses(Aws::String&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline Destination& AddBccAddresses(const char* value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_toAddresses;
    bool m_toAddressesHasBeenSet;

    Aws::Vector<Aws::String> m_ccAddresses;
    bool m_ccAddressesHasBeenSet;

    Aws::Vector<Aws::String> m_bccAddresses;
    bool m_bccAddressesHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
