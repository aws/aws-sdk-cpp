/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The OAuth2Client application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OAuth2ClientApplication">AWS
   * API Reference</a></p>
   */
  class OAuth2ClientApplication
  {
  public:
    AWS_DATAZONE_API OAuth2ClientApplication();
    AWS_DATAZONE_API OAuth2ClientApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OAuth2ClientApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services managed client application reference in the
     * OAuth2Client application.</p>
     */
    inline const Aws::String& GetAWSManagedClientApplicationReference() const{ return m_aWSManagedClientApplicationReference; }
    inline bool AWSManagedClientApplicationReferenceHasBeenSet() const { return m_aWSManagedClientApplicationReferenceHasBeenSet; }
    inline void SetAWSManagedClientApplicationReference(const Aws::String& value) { m_aWSManagedClientApplicationReferenceHasBeenSet = true; m_aWSManagedClientApplicationReference = value; }
    inline void SetAWSManagedClientApplicationReference(Aws::String&& value) { m_aWSManagedClientApplicationReferenceHasBeenSet = true; m_aWSManagedClientApplicationReference = std::move(value); }
    inline void SetAWSManagedClientApplicationReference(const char* value) { m_aWSManagedClientApplicationReferenceHasBeenSet = true; m_aWSManagedClientApplicationReference.assign(value); }
    inline OAuth2ClientApplication& WithAWSManagedClientApplicationReference(const Aws::String& value) { SetAWSManagedClientApplicationReference(value); return *this;}
    inline OAuth2ClientApplication& WithAWSManagedClientApplicationReference(Aws::String&& value) { SetAWSManagedClientApplicationReference(std::move(value)); return *this;}
    inline OAuth2ClientApplication& WithAWSManagedClientApplicationReference(const char* value) { SetAWSManagedClientApplicationReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user managed client application client ID in the OAuth2Client
     * application.</p>
     */
    inline const Aws::String& GetUserManagedClientApplicationClientId() const{ return m_userManagedClientApplicationClientId; }
    inline bool UserManagedClientApplicationClientIdHasBeenSet() const { return m_userManagedClientApplicationClientIdHasBeenSet; }
    inline void SetUserManagedClientApplicationClientId(const Aws::String& value) { m_userManagedClientApplicationClientIdHasBeenSet = true; m_userManagedClientApplicationClientId = value; }
    inline void SetUserManagedClientApplicationClientId(Aws::String&& value) { m_userManagedClientApplicationClientIdHasBeenSet = true; m_userManagedClientApplicationClientId = std::move(value); }
    inline void SetUserManagedClientApplicationClientId(const char* value) { m_userManagedClientApplicationClientIdHasBeenSet = true; m_userManagedClientApplicationClientId.assign(value); }
    inline OAuth2ClientApplication& WithUserManagedClientApplicationClientId(const Aws::String& value) { SetUserManagedClientApplicationClientId(value); return *this;}
    inline OAuth2ClientApplication& WithUserManagedClientApplicationClientId(Aws::String&& value) { SetUserManagedClientApplicationClientId(std::move(value)); return *this;}
    inline OAuth2ClientApplication& WithUserManagedClientApplicationClientId(const char* value) { SetUserManagedClientApplicationClientId(value); return *this;}
    ///@}
  private:

    Aws::String m_aWSManagedClientApplicationReference;
    bool m_aWSManagedClientApplicationReferenceHasBeenSet = false;

    Aws::String m_userManagedClientApplicationClientId;
    bool m_userManagedClientApplicationClientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
