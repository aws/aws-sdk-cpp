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
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/SessionContextAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API SessionContextAttributes
  {
  public:
    SessionContextAttributes();
    SessionContextAttributes(Aws::Utils::Json::JsonView jsonValue);
    SessionContextAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time, in ISO 8601 format, when the credentials were issued.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time, in ISO 8601 format, when the credentials were issued.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time, in ISO 8601 format, when the credentials were issued.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time, in ISO 8601 format, when the credentials were issued.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time, in ISO 8601 format, when the credentials were issued.</p>
     */
    inline SessionContextAttributes& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time, in ISO 8601 format, when the credentials were issued.</p>
     */
    inline SessionContextAttributes& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the credentials were authenticated with a multi-factor
     * authentication (MFA) device.</p>
     */
    inline bool GetMfaAuthenticated() const{ return m_mfaAuthenticated; }

    /**
     * <p>Specifies whether the credentials were authenticated with a multi-factor
     * authentication (MFA) device.</p>
     */
    inline bool MfaAuthenticatedHasBeenSet() const { return m_mfaAuthenticatedHasBeenSet; }

    /**
     * <p>Specifies whether the credentials were authenticated with a multi-factor
     * authentication (MFA) device.</p>
     */
    inline void SetMfaAuthenticated(bool value) { m_mfaAuthenticatedHasBeenSet = true; m_mfaAuthenticated = value; }

    /**
     * <p>Specifies whether the credentials were authenticated with a multi-factor
     * authentication (MFA) device.</p>
     */
    inline SessionContextAttributes& WithMfaAuthenticated(bool value) { SetMfaAuthenticated(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_mfaAuthenticated;
    bool m_mfaAuthenticatedHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
