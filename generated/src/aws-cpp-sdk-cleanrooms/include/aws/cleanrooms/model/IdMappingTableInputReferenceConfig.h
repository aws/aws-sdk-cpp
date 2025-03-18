/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides the input reference configuration for the ID mapping
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdMappingTableInputReferenceConfig">AWS
   * API Reference</a></p>
   */
  class IdMappingTableInputReferenceConfig
  {
  public:
    AWS_CLEANROOMS_API IdMappingTableInputReferenceConfig() = default;
    AWS_CLEANROOMS_API IdMappingTableInputReferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingTableInputReferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the referenced resource in Entity
     * Resolution. Valid values are ID mapping workflow ARNs.</p>
     */
    inline const Aws::String& GetInputReferenceArn() const { return m_inputReferenceArn; }
    inline bool InputReferenceArnHasBeenSet() const { return m_inputReferenceArnHasBeenSet; }
    template<typename InputReferenceArnT = Aws::String>
    void SetInputReferenceArn(InputReferenceArnT&& value) { m_inputReferenceArnHasBeenSet = true; m_inputReferenceArn = std::forward<InputReferenceArnT>(value); }
    template<typename InputReferenceArnT = Aws::String>
    IdMappingTableInputReferenceConfig& WithInputReferenceArn(InputReferenceArnT&& value) { SetInputReferenceArn(std::forward<InputReferenceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>TRUE</code>, Clean Rooms manages permissions for the ID mapping
     * table resource. </p> <p>When <code>FALSE</code>, the resource owner manages
     * permissions for the ID mapping table resource.</p>
     */
    inline bool GetManageResourcePolicies() const { return m_manageResourcePolicies; }
    inline bool ManageResourcePoliciesHasBeenSet() const { return m_manageResourcePoliciesHasBeenSet; }
    inline void SetManageResourcePolicies(bool value) { m_manageResourcePoliciesHasBeenSet = true; m_manageResourcePolicies = value; }
    inline IdMappingTableInputReferenceConfig& WithManageResourcePolicies(bool value) { SetManageResourcePolicies(value); return *this;}
    ///@}
  private:

    Aws::String m_inputReferenceArn;
    bool m_inputReferenceArnHasBeenSet = false;

    bool m_manageResourcePolicies{false};
    bool m_manageResourcePoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
