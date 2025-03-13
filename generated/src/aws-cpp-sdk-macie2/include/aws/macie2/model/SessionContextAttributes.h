/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the context in which temporary security
   * credentials were issued to an entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SessionContextAttributes">AWS
   * API Reference</a></p>
   */
  class SessionContextAttributes
  {
  public:
    AWS_MACIE2_API SessionContextAttributes() = default;
    AWS_MACIE2_API SessionContextAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SessionContextAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time, in UTC and ISO 8601 format, when the credentials were
     * issued.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    SessionContextAttributes& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the credentials were authenticated with a multi-factor
     * authentication (MFA) device.</p>
     */
    inline bool GetMfaAuthenticated() const { return m_mfaAuthenticated; }
    inline bool MfaAuthenticatedHasBeenSet() const { return m_mfaAuthenticatedHasBeenSet; }
    inline void SetMfaAuthenticated(bool value) { m_mfaAuthenticatedHasBeenSet = true; m_mfaAuthenticated = value; }
    inline SessionContextAttributes& WithMfaAuthenticated(bool value) { SetMfaAuthenticated(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    bool m_mfaAuthenticated{false};
    bool m_mfaAuthenticatedHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
