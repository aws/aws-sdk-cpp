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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsIamAccessKeyStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>IAM access key details related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAccessKeyDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsIamAccessKeyDetails
  {
  public:
    AwsIamAccessKeyDetails();
    AwsIamAccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsIamAccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user associated with the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline void SetStatus(const AwsIamAccessKeyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline void SetStatus(AwsIamAccessKeyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithStatus(const AwsIamAccessKeyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithStatus(AwsIamAccessKeyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>The creation date/time of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    AwsIamAccessKeyStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
