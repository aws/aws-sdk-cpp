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
    AWS_B2BI_API CreateProfileResult() = default;
    AWS_B2BI_API CreateProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API CreateProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the unique, system-generated identifier for the profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    CreateProfileResult& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an Amazon Resource Name (ARN) for the profile.</p>
     */
    inline const Aws::String& GetProfileArn() const { return m_profileArn; }
    template<typename ProfileArnT = Aws::String>
    void SetProfileArn(ProfileArnT&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::forward<ProfileArnT>(value); }
    template<typename ProfileArnT = Aws::String>
    CreateProfileResult& WithProfileArn(ProfileArnT&& value) { SetProfileArn(std::forward<ProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the profile, used to identify it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateProfileResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name for the business associated with this profile.</p>
     */
    inline const Aws::String& GetBusinessName() const { return m_businessName; }
    template<typename BusinessNameT = Aws::String>
    void SetBusinessName(BusinessNameT&& value) { m_businessNameHasBeenSet = true; m_businessName = std::forward<BusinessNameT>(value); }
    template<typename BusinessNameT = Aws::String>
    CreateProfileResult& WithBusinessName(BusinessNameT&& value) { SetBusinessName(std::forward<BusinessNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the phone number associated with the profile.</p>
     */
    inline const Aws::String& GetPhone() const { return m_phone; }
    template<typename PhoneT = Aws::String>
    void SetPhone(PhoneT&& value) { m_phoneHasBeenSet = true; m_phone = std::forward<PhoneT>(value); }
    template<typename PhoneT = Aws::String>
    CreateProfileResult& WithPhone(PhoneT&& value) { SetPhone(std::forward<PhoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the email address associated with this customer profile.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    CreateProfileResult& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns whether or not logging is turned on for this profile.</p>
     */
    inline Logging GetLogging() const { return m_logging; }
    inline void SetLogging(Logging value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline CreateProfileResult& WithLogging(Logging value) { SetLogging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of the logging group.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CreateProfileResult& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp representing the time the profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateProfileResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_businessName;
    bool m_businessNameHasBeenSet = false;

    Aws::String m_phone;
    bool m_phoneHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Logging m_logging{Logging::NOT_SET};
    bool m_loggingHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
