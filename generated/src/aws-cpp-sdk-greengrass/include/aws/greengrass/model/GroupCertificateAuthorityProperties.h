/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a certificate authority for a group.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GroupCertificateAuthorityProperties">AWS
   * API Reference</a></p>
   */
  class GroupCertificateAuthorityProperties
  {
  public:
    AWS_GREENGRASS_API GroupCertificateAuthorityProperties();
    AWS_GREENGRASS_API GroupCertificateAuthorityProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API GroupCertificateAuthorityProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const{ return m_groupCertificateAuthorityArn; }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline bool GroupCertificateAuthorityArnHasBeenSet() const { return m_groupCertificateAuthorityArnHasBeenSet; }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(const Aws::String& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = value; }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(Aws::String&& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = std::move(value); }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityArn(const char* value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn.assign(value); }

    /**
     * The ARN of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(const Aws::String& value) { SetGroupCertificateAuthorityArn(value); return *this;}

    /**
     * The ARN of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(Aws::String&& value) { SetGroupCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * The ARN of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(const char* value) { SetGroupCertificateAuthorityArn(value); return *this;}


    /**
     * The ID of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityId() const{ return m_groupCertificateAuthorityId; }

    /**
     * The ID of the certificate authority for the group.
     */
    inline bool GroupCertificateAuthorityIdHasBeenSet() const { return m_groupCertificateAuthorityIdHasBeenSet; }

    /**
     * The ID of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(const Aws::String& value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId = value; }

    /**
     * The ID of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(Aws::String&& value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId = std::move(value); }

    /**
     * The ID of the certificate authority for the group.
     */
    inline void SetGroupCertificateAuthorityId(const char* value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId.assign(value); }

    /**
     * The ID of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(const Aws::String& value) { SetGroupCertificateAuthorityId(value); return *this;}

    /**
     * The ID of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(Aws::String&& value) { SetGroupCertificateAuthorityId(std::move(value)); return *this;}

    /**
     * The ID of the certificate authority for the group.
     */
    inline GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(const char* value) { SetGroupCertificateAuthorityId(value); return *this;}

  private:

    Aws::String m_groupCertificateAuthorityArn;
    bool m_groupCertificateAuthorityArnHasBeenSet = false;

    Aws::String m_groupCertificateAuthorityId;
    bool m_groupCertificateAuthorityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
