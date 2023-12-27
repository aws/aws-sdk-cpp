/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/Logging.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Contains the details for a profile. A profile is the mechanism used to create
   * the concept of a private network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ProfileSummary">AWS
   * API Reference</a></p>
   */
  class ProfileSummary
  {
  public:
    AWS_B2BI_API ProfileSummary();
    AWS_B2BI_API ProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API ProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline ProfileSummary& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline ProfileSummary& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline ProfileSummary& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Returns the display name for profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline ProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline ProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the display name for profile.</p>
     */
    inline ProfileSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline bool BusinessNameHasBeenSet() const { return m_businessNameHasBeenSet; }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(const Aws::String& value) { m_businessNameHasBeenSet = true; m_businessName = value; }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(Aws::String&& value) { m_businessNameHasBeenSet = true; m_businessName = std::move(value); }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(const char* value) { m_businessNameHasBeenSet = true; m_businessName.assign(value); }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline ProfileSummary& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline ProfileSummary& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline ProfileSummary& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}


    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline void SetLogging(const Logging& value) { m_loggingHasBeenSet = true; m_logging = value; }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline void SetLogging(Logging&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline ProfileSummary& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>Specifies whether or not logging is enabled for this profile.</p>
     */
    inline ProfileSummary& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline ProfileSummary& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline ProfileSummary& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline ProfileSummary& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Returns the timestamp for creation date and time of the profile.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns the timestamp for creation date and time of the profile.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Returns the timestamp for creation date and time of the profile.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Returns the timestamp for creation date and time of the profile.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Returns the timestamp for creation date and time of the profile.</p>
     */
    inline ProfileSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns the timestamp for creation date and time of the profile.</p>
     */
    inline ProfileSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Returns the timestamp that identifies the most recent date and time that the
     * profile was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>Returns the timestamp that identifies the most recent date and time that the
     * profile was modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>Returns the timestamp that identifies the most recent date and time that the
     * profile was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>Returns the timestamp that identifies the most recent date and time that the
     * profile was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>Returns the timestamp that identifies the most recent date and time that the
     * profile was modified.</p>
     */
    inline ProfileSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>Returns the timestamp that identifies the most recent date and time that the
     * profile was modified.</p>
     */
    inline ProfileSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}

  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;

    Logging m_logging;
    bool m_loggingHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
