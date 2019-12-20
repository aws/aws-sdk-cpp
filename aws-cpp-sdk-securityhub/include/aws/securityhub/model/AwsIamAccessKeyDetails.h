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
#include <aws/securityhub/model/AwsIamAccessKeyStatus.h>
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


    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline void SetPrincipalType(const Aws::String& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline void SetPrincipalType(Aws::String&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline void SetPrincipalType(const char* value) { m_principalTypeHasBeenSet = true; m_principalType.assign(value); }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalType(const Aws::String& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalType(Aws::String&& value) { SetPrincipalType(std::move(value)); return *this;}

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalType(const char* value) { SetPrincipalType(value); return *this;}


    /**
     * <p>The name of the principal.</p>
     */
    inline const Aws::String& GetPrincipalName() const{ return m_principalName; }

    /**
     * <p>The name of the principal.</p>
     */
    inline bool PrincipalNameHasBeenSet() const { return m_principalNameHasBeenSet; }

    /**
     * <p>The name of the principal.</p>
     */
    inline void SetPrincipalName(const Aws::String& value) { m_principalNameHasBeenSet = true; m_principalName = value; }

    /**
     * <p>The name of the principal.</p>
     */
    inline void SetPrincipalName(Aws::String&& value) { m_principalNameHasBeenSet = true; m_principalName = std::move(value); }

    /**
     * <p>The name of the principal.</p>
     */
    inline void SetPrincipalName(const char* value) { m_principalNameHasBeenSet = true; m_principalName.assign(value); }

    /**
     * <p>The name of the principal.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalName(const Aws::String& value) { SetPrincipalName(value); return *this;}

    /**
     * <p>The name of the principal.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalName(Aws::String&& value) { SetPrincipalName(std::move(value)); return *this;}

    /**
     * <p>The name of the principal.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalName(const char* value) { SetPrincipalName(value); return *this;}

  private:

    AwsIamAccessKeyStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;

    Aws::String m_principalType;
    bool m_principalTypeHasBeenSet;

    Aws::String m_principalName;
    bool m_principalNameHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
