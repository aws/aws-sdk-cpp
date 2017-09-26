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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API UpdateGroupCertificateConfigurationRequest : public GreengrassRequest
  {
  public:
    UpdateGroupCertificateConfigurationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroupCertificateConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline const Aws::String& GetCertificateExpiryInMilliseconds() const{ return m_certificateExpiryInMilliseconds; }

    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline void SetCertificateExpiryInMilliseconds(const Aws::String& value) { m_certificateExpiryInMillisecondsHasBeenSet = true; m_certificateExpiryInMilliseconds = value; }

    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline void SetCertificateExpiryInMilliseconds(Aws::String&& value) { m_certificateExpiryInMillisecondsHasBeenSet = true; m_certificateExpiryInMilliseconds = std::move(value); }

    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline void SetCertificateExpiryInMilliseconds(const char* value) { m_certificateExpiryInMillisecondsHasBeenSet = true; m_certificateExpiryInMilliseconds.assign(value); }

    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline UpdateGroupCertificateConfigurationRequest& WithCertificateExpiryInMilliseconds(const Aws::String& value) { SetCertificateExpiryInMilliseconds(value); return *this;}

    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline UpdateGroupCertificateConfigurationRequest& WithCertificateExpiryInMilliseconds(Aws::String&& value) { SetCertificateExpiryInMilliseconds(std::move(value)); return *this;}

    /**
     * Amount of time when the certificate expires in milliseconds.
     */
    inline UpdateGroupCertificateConfigurationRequest& WithCertificateExpiryInMilliseconds(const char* value) { SetCertificateExpiryInMilliseconds(value); return *this;}


    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline UpdateGroupCertificateConfigurationRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline UpdateGroupCertificateConfigurationRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline UpdateGroupCertificateConfigurationRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_certificateExpiryInMilliseconds;
    bool m_certificateExpiryInMillisecondsHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
