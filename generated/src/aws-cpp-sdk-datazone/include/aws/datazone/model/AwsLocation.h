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
   * <p>The location of a project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AwsLocation">AWS
   * API Reference</a></p>
   */
  class AwsLocation
  {
  public:
    AWS_DATAZONE_API AwsLocation() = default;
    AWS_DATAZONE_API AwsLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AwsLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access role of a connection.</p>
     */
    inline const Aws::String& GetAccessRole() const { return m_accessRole; }
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }
    template<typename AccessRoleT = Aws::String>
    void SetAccessRole(AccessRoleT&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::forward<AccessRoleT>(value); }
    template<typename AccessRoleT = Aws::String>
    AwsLocation& WithAccessRole(AccessRoleT&& value) { SetAccessRole(std::forward<AccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of a connection.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    AwsLocation& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region of a connection.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    AwsLocation& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM connection ID of a connection.</p>
     */
    inline const Aws::String& GetIamConnectionId() const { return m_iamConnectionId; }
    inline bool IamConnectionIdHasBeenSet() const { return m_iamConnectionIdHasBeenSet; }
    template<typename IamConnectionIdT = Aws::String>
    void SetIamConnectionId(IamConnectionIdT&& value) { m_iamConnectionIdHasBeenSet = true; m_iamConnectionId = std::forward<IamConnectionIdT>(value); }
    template<typename IamConnectionIdT = Aws::String>
    AwsLocation& WithIamConnectionId(IamConnectionIdT&& value) { SetIamConnectionId(std::forward<IamConnectionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_iamConnectionId;
    bool m_iamConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
