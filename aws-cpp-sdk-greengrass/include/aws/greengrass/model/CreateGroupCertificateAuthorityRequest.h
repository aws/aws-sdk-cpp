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
  class AWS_GREENGRASS_API CreateGroupCertificateAuthorityRequest : public GreengrassRequest
  {
  public:
    CreateGroupCertificateAuthorityRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroupCertificateAuthority"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateGroupCertificateAuthorityRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateGroupCertificateAuthorityRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateGroupCertificateAuthorityRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


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
    inline CreateGroupCertificateAuthorityRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateGroupCertificateAuthorityRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateGroupCertificateAuthorityRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
