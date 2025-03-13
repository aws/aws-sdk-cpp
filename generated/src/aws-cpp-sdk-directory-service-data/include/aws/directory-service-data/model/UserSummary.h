/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
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
namespace DirectoryServiceData
{
namespace Model
{

  /**
   * <p>A structure containing a subset of the fields of a user object from a
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/UserSummary">AWS
   * API Reference</a></p>
   */
  class UserSummary
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API UserSummary() = default;
    AWS_DIRECTORYSERVICEDATA_API UserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API UserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the user account is active.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UserSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the user. </p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    UserSummary& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    UserSummary& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the user.</p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    UserSummary& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the user.</p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    UserSummary& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
