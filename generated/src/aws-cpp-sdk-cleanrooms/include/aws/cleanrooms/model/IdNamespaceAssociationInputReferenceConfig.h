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
   * <p>Provides the information for the ID namespace association input reference
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdNamespaceAssociationInputReferenceConfig">AWS
   * API Reference</a></p>
   */
  class IdNamespaceAssociationInputReferenceConfig
  {
  public:
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferenceConfig() = default;
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdNamespaceAssociationInputReferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Entity Resolution resource that is
     * being associated to the collaboration. Valid resource ARNs are from the ID
     * namespaces that you own.</p>
     */
    inline const Aws::String& GetInputReferenceArn() const { return m_inputReferenceArn; }
    inline bool InputReferenceArnHasBeenSet() const { return m_inputReferenceArnHasBeenSet; }
    template<typename InputReferenceArnT = Aws::String>
    void SetInputReferenceArn(InputReferenceArnT&& value) { m_inputReferenceArnHasBeenSet = true; m_inputReferenceArn = std::forward<InputReferenceArnT>(value); }
    template<typename InputReferenceArnT = Aws::String>
    IdNamespaceAssociationInputReferenceConfig& WithInputReferenceArn(InputReferenceArnT&& value) { SetInputReferenceArn(std::forward<InputReferenceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>TRUE</code>, Clean Rooms manages permissions for the ID namespace
     * association resource.</p> <p>When <code>FALSE</code>, the resource owner manages
     * permissions for the ID namespace association resource.</p>
     */
    inline bool GetManageResourcePolicies() const { return m_manageResourcePolicies; }
    inline bool ManageResourcePoliciesHasBeenSet() const { return m_manageResourcePoliciesHasBeenSet; }
    inline void SetManageResourcePolicies(bool value) { m_manageResourcePoliciesHasBeenSet = true; m_manageResourcePolicies = value; }
    inline IdNamespaceAssociationInputReferenceConfig& WithManageResourcePolicies(bool value) { SetManageResourcePolicies(value); return *this;}
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
