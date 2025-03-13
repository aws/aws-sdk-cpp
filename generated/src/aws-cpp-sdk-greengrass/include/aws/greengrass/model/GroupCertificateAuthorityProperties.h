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
    AWS_GREENGRASS_API GroupCertificateAuthorityProperties() = default;
    AWS_GREENGRASS_API GroupCertificateAuthorityProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API GroupCertificateAuthorityProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityArn() const { return m_groupCertificateAuthorityArn; }
    inline bool GroupCertificateAuthorityArnHasBeenSet() const { return m_groupCertificateAuthorityArnHasBeenSet; }
    template<typename GroupCertificateAuthorityArnT = Aws::String>
    void SetGroupCertificateAuthorityArn(GroupCertificateAuthorityArnT&& value) { m_groupCertificateAuthorityArnHasBeenSet = true; m_groupCertificateAuthorityArn = std::forward<GroupCertificateAuthorityArnT>(value); }
    template<typename GroupCertificateAuthorityArnT = Aws::String>
    GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityArn(GroupCertificateAuthorityArnT&& value) { SetGroupCertificateAuthorityArn(std::forward<GroupCertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the certificate authority for the group.
     */
    inline const Aws::String& GetGroupCertificateAuthorityId() const { return m_groupCertificateAuthorityId; }
    inline bool GroupCertificateAuthorityIdHasBeenSet() const { return m_groupCertificateAuthorityIdHasBeenSet; }
    template<typename GroupCertificateAuthorityIdT = Aws::String>
    void SetGroupCertificateAuthorityId(GroupCertificateAuthorityIdT&& value) { m_groupCertificateAuthorityIdHasBeenSet = true; m_groupCertificateAuthorityId = std::forward<GroupCertificateAuthorityIdT>(value); }
    template<typename GroupCertificateAuthorityIdT = Aws::String>
    GroupCertificateAuthorityProperties& WithGroupCertificateAuthorityId(GroupCertificateAuthorityIdT&& value) { SetGroupCertificateAuthorityId(std::forward<GroupCertificateAuthorityIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupCertificateAuthorityArn;
    bool m_groupCertificateAuthorityArnHasBeenSet = false;

    Aws::String m_groupCertificateAuthorityId;
    bool m_groupCertificateAuthorityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
