﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/StatusType.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an AWS access key.</p> <p> This data type is used
   * as a response element in the <a>CreateAccessKey</a> and <a>ListAccessKeys</a>
   * actions. </p> <note> <p>The <code>SecretAccessKey</code> value is returned only
   * in response to <a>CreateAccessKey</a>. You can get a secret access key only when
   * you first create an access key; you cannot recover the secret access key later.
   * If you lose a secret access key, you must create a new access key.</p> </note>
   */
  class AWS_IAM_API AccessKey
  {
  public:
    AccessKey();
    AccessKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline AccessKey& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline AccessKey& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user that the access key is associated with.</p>
     */
    inline AccessKey& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The ID for this access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The ID for this access key.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The ID for this access key.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The ID for this access key.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The ID for this access key.</p>
     */
    inline AccessKey& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID for this access key.</p>
     */
    inline AccessKey& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID for this access key.</p>
     */
    inline AccessKey& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls, while <code>Inactive</code> means it is not. </p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls, while <code>Inactive</code> means it is not. </p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls, while <code>Inactive</code> means it is not. </p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls, while <code>Inactive</code> means it is not. </p>
     */
    inline AccessKey& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls, while <code>Inactive</code> means it is not. </p>
     */
    inline AccessKey& WithStatus(StatusType&& value) { SetStatus(value); return *this;}

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline AccessKey& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline AccessKey& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The secret key used to sign requests.</p>
     */
    inline AccessKey& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The date when the access key was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date when the access key was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date when the access key was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date when the access key was created.</p>
     */
    inline AccessKey& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date when the access key was created.</p>
     */
    inline AccessKey& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;
    StatusType m_status;
    bool m_statusHasBeenSet;
    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet;
    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
