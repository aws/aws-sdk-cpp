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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{
  class CreateProfileResult
  {
  public:
    AWS_B2BI_API CreateProfileResult();
    AWS_B2BI_API CreateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API CreateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileId = value; }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileId = std::move(value); }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileId.assign(value); }

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline CreateProfileResult& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline CreateProfileResult& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline CreateProfileResult& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArn = value; }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArn = std::move(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArn.assign(value); }

    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline CreateProfileResult& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline CreateProfileResult& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline CreateProfileResult& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline CreateProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline CreateProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline CreateProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline const Aws::String& GetBusinessName() const{ return m_businessName; }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(const Aws::String& value) { m_businessName = value; }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(Aws::String&& value) { m_businessName = std::move(value); }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline void SetBusinessName(const char* value) { m_businessName.assign(value); }

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline CreateProfileResult& WithBusinessName(const Aws::String& value) { SetBusinessName(value); return *this;}

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline CreateProfileResult& WithBusinessName(Aws::String&& value) { SetBusinessName(std::move(value)); return *this;}

    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline CreateProfileResult& WithBusinessName(const char* value) { SetBusinessName(value); return *this;}


    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline const Aws::String& GetPhone() const{ return m_phone; }

    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline void SetPhone(const Aws::String& value) { m_phone = value; }

    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline void SetPhone(Aws::String&& value) { m_phone = std::move(value); }

    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline void SetPhone(const char* value) { m_phone.assign(value); }

    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline CreateProfileResult& WithPhone(const Aws::String& value) { SetPhone(value); return *this;}

    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline CreateProfileResult& WithPhone(Aws::String&& value) { SetPhone(std::move(value)); return *this;}

    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline CreateProfileResult& WithPhone(const char* value) { SetPhone(value); return *this;}


    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }

    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline void SetEmail(const char* value) { m_email.assign(value); }

    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline CreateProfileResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline CreateProfileResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline CreateProfileResult& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>Returns whether or not logging is turned on for this profile.</p>
     */
    inline const Logging& GetLogging() const{ return m_logging; }

    /**
     * <p>Returns whether or not logging is turned on for this profile.</p>
     */
    inline void SetLogging(const Logging& value) { m_logging = value; }

    /**
     * <p>Returns whether or not logging is turned on for this profile.</p>
     */
    inline void SetLogging(Logging&& value) { m_logging = std::move(value); }

    /**
     * <p>Returns whether or not logging is turned on for this profile.</p>
     */
    inline CreateProfileResult& WithLogging(const Logging& value) { SetLogging(value); return *this;}

    /**
     * <p>Returns whether or not logging is turned on for this profile.</p>
     */
    inline CreateProfileResult& WithLogging(Logging&& value) { SetLogging(std::move(value)); return *this;}


    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupName = value; }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupName = std::move(value); }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupName.assign(value); }

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline CreateProfileResult& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline CreateProfileResult& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline CreateProfileResult& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Returns a timestamp representing the time the profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Returns a timestamp representing the time the profile was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Returns a timestamp representing the time the profile was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Returns a timestamp representing the time the profile was created.</p>
     */
    inline CreateProfileResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Returns a timestamp representing the time the profile was created.</p>
     */
    inline CreateProfileResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_profileId;

    Aws::String m_profileArn;

    Aws::String m_name;

    Aws::String m_businessName;

    Aws::String m_phone;

    Aws::String m_email;

    Logging m_logging;

    Aws::String m_logGroupName;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
