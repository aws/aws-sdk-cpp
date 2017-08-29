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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information on group certificate authority properties<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GroupCertificateAuthorityProperties">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API GroupCertificateAuthorityProperties
  {
  public:
    GroupCertificateAuthorityProperties();
    GroupCertificateAuthorityProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    GroupCertificateAuthorityProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Arn of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const{ return m_groupCertificateAuthorityArn; }

    /**
     * Arn of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(const Aws::String& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = value; }

    /**
     * Arn of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(Aws::String&& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = std::move(value); }

    /**
     * Arn of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(const char* value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn.assign(value); }

    /**
     * Arn of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(const Aws::String& value) { SetGroupCertificateAuthorityArn(value); return *this;}

    /**
     * Arn of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(Aws::String&& value) { SetGroupCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * Arn of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(const char* value) { SetGroupCertificateAuthorityArn(value); return *this;}


    /**
     * Id of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityId() const{ return m_groupCertificateAuthorityId; }

    /**
     * Id of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(const Aws::String& value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId = value; }

    /**
     * Id of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(Aws::String&& value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId = std::move(value); }

    /**
     * Id of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(const char* value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId.assign(value); }

    /**
     * Id of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(const Aws::String& value) { SetGroupCertificateAuthorityId(value); return *this;}

    /**
     * Id of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(Aws::String&& value) { SetGroupCertificateAuthorityId(std::move(value)); return *this;}

    /**
     * Id of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(const char* value) { SetGroupCertificateAuthorityId(value); return *this;}

  private:

    Aws::String m_groupCertificateAuthorityArn;
    bool m_groupCertificateAuthorityArnHasBeenSet;

    Aws::String m_groupCertificateAuthorityId;
    bool m_groupCertificateAuthorityIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
