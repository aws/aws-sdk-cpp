/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The SMTP envelope information of the email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Envelope">AWS
   * API Reference</a></p>
   */
  class Envelope
  {
  public:
    AWS_MAILMANAGER_API Envelope();
    AWS_MAILMANAGER_API Envelope(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Envelope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The RCPT FROM given by the host from which the email was received.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }
    inline Envelope& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}
    inline Envelope& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}
    inline Envelope& WithFrom(const char* value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HELO used by the host from which the email was received.</p>
     */
    inline const Aws::String& GetHelo() const{ return m_helo; }
    inline bool HeloHasBeenSet() const { return m_heloHasBeenSet; }
    inline void SetHelo(const Aws::String& value) { m_heloHasBeenSet = true; m_helo = value; }
    inline void SetHelo(Aws::String&& value) { m_heloHasBeenSet = true; m_helo = std::move(value); }
    inline void SetHelo(const char* value) { m_heloHasBeenSet = true; m_helo.assign(value); }
    inline Envelope& WithHelo(const Aws::String& value) { SetHelo(value); return *this;}
    inline Envelope& WithHelo(Aws::String&& value) { SetHelo(std::move(value)); return *this;}
    inline Envelope& WithHelo(const char* value) { SetHelo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All SMTP TO entries given by the host from which the email was received.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(const Aws::Vector<Aws::String>& value) { m_toHasBeenSet = true; m_to = value; }
    inline void SetTo(Aws::Vector<Aws::String>&& value) { m_toHasBeenSet = true; m_to = std::move(value); }
    inline Envelope& WithTo(const Aws::Vector<Aws::String>& value) { SetTo(value); return *this;}
    inline Envelope& WithTo(Aws::Vector<Aws::String>&& value) { SetTo(std::move(value)); return *this;}
    inline Envelope& AddTo(const Aws::String& value) { m_toHasBeenSet = true; m_to.push_back(value); return *this; }
    inline Envelope& AddTo(Aws::String&& value) { m_toHasBeenSet = true; m_to.push_back(std::move(value)); return *this; }
    inline Envelope& AddTo(const char* value) { m_toHasBeenSet = true; m_to.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_helo;
    bool m_heloHasBeenSet = false;

    Aws::Vector<Aws::String> m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
