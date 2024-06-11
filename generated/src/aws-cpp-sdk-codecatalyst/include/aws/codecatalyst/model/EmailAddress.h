﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about an email address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/EmailAddress">AWS
   * API Reference</a></p>
   */
  class EmailAddress
  {
  public:
    AWS_CODECATALYST_API EmailAddress();
    AWS_CODECATALYST_API EmailAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API EmailAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline EmailAddress& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline EmailAddress& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline EmailAddress& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the email address has been verified.</p>
     */
    inline bool GetVerified() const{ return m_verified; }
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
    inline void SetVerified(bool value) { m_verifiedHasBeenSet = true; m_verified = value; }
    inline EmailAddress& WithVerified(bool value) { SetVerified(value); return *this;}
    ///@}
  private:

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    bool m_verified;
    bool m_verifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
