/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Configuration for an Amazon EC2 Auto Scaling group used in a Region switch
   * plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Asg">AWS
   * API Reference</a></p>
   */
  class Asg
  {
  public:
    AWS_ARCREGIONSWITCH_API Asg() = default;
    AWS_ARCREGIONSWITCH_API Asg(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Asg& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cross account role for the configuration.</p>
     */
    inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
    inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
    template<typename CrossAccountRoleT = Aws::String>
    void SetCrossAccountRole(CrossAccountRoleT&& value) { m_crossAccountRoleHasBeenSet = true; m_crossAccountRole = std::forward<CrossAccountRoleT>(value); }
    template<typename CrossAccountRoleT = Aws::String>
    Asg& WithCrossAccountRole(CrossAccountRoleT&& value) { SetCrossAccountRole(std::forward<CrossAccountRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID (secret key) for the configuration.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    Asg& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the EC2 Auto Scaling group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Asg& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_crossAccountRole;
    bool m_crossAccountRoleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
