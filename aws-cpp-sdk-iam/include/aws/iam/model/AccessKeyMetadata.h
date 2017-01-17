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
   * <p>Contains information about an AWS access key, without its secret key.</p>
   * <p>This data type is used as a response element in the <a>ListAccessKeys</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AccessKeyMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API AccessKeyMetadata
  {
  public:
    AccessKeyMetadata();
    AccessKeyMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    AccessKeyMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline AccessKeyMetadata& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline AccessKeyMetadata& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user that the key is associated with.</p>
     */
    inline AccessKeyMetadata& WithUserName(const char* value) { SetUserName(value); return *this;}

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
    inline AccessKeyMetadata& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID for this access key.</p>
     */
    inline AccessKeyMetadata& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID for this access key.</p>
     */
    inline AccessKeyMetadata& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls; <code>Inactive</code> means it is not.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls; <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls; <code>Inactive</code> means it is not.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls; <code>Inactive</code> means it is not.</p>
     */
    inline AccessKeyMetadata& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the access key. <code>Active</code> means the key is valid for
     * API calls; <code>Inactive</code> means it is not.</p>
     */
    inline AccessKeyMetadata& WithStatus(StatusType&& value) { SetStatus(value); return *this;}

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
    inline AccessKeyMetadata& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date when the access key was created.</p>
     */
    inline AccessKeyMetadata& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;
    StatusType m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
