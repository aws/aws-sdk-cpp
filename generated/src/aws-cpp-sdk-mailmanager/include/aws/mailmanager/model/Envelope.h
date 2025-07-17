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
    AWS_MAILMANAGER_API Envelope() = default;
    AWS_MAILMANAGER_API Envelope(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Envelope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HELO used by the host from which the email was received.</p>
     */
    inline const Aws::String& GetHelo() const { return m_helo; }
    inline bool HeloHasBeenSet() const { return m_heloHasBeenSet; }
    template<typename HeloT = Aws::String>
    void SetHelo(HeloT&& value) { m_heloHasBeenSet = true; m_helo = std::forward<HeloT>(value); }
    template<typename HeloT = Aws::String>
    Envelope& WithHelo(HeloT&& value) { SetHelo(std::forward<HeloT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RCPT FROM given by the host from which the email was received.</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    Envelope& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All SMTP TO entries given by the host from which the email was received.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::Vector<Aws::String>>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::Vector<Aws::String>>
    Envelope& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    template<typename ToT = Aws::String>
    Envelope& AddTo(ToT&& value) { m_toHasBeenSet = true; m_to.emplace_back(std::forward<ToT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_helo;
    bool m_heloHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::Vector<Aws::String> m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
