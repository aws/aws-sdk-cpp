/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>Configuration information for the superuser.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/SuperuserParameters">AWS
   * API Reference</a></p>
   */
  class SuperuserParameters
  {
  public:
    AWS_FINSPACE_API SuperuserParameters();
    AWS_FINSPACE_API SuperuserParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API SuperuserParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email address of the superuser.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address of the superuser.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address of the superuser.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address of the superuser.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address of the superuser.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address of the superuser.</p>
     */
    inline SuperuserParameters& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address of the superuser.</p>
     */
    inline SuperuserParameters& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address of the superuser.</p>
     */
    inline SuperuserParameters& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>The first name of the superuser.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the superuser.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of the superuser.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the superuser.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the superuser.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the superuser.</p>
     */
    inline SuperuserParameters& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the superuser.</p>
     */
    inline SuperuserParameters& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the superuser.</p>
     */
    inline SuperuserParameters& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the superuser.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the superuser.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of the superuser.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the superuser.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the superuser.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the superuser.</p>
     */
    inline SuperuserParameters& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the superuser.</p>
     */
    inline SuperuserParameters& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the superuser.</p>
     */
    inline SuperuserParameters& WithLastName(const char* value) { SetLastName(value); return *this;}

  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
