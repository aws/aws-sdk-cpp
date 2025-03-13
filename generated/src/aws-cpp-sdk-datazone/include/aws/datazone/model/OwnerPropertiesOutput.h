/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/OwnerGroupPropertiesOutput.h>
#include <aws/datazone/model/OwnerUserPropertiesOutput.h>
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
   * <p>The ID of the domain unit owners group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OwnerPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class OwnerPropertiesOutput
  {
  public:
    AWS_DATAZONE_API OwnerPropertiesOutput() = default;
    AWS_DATAZONE_API OwnerPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OwnerPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies that the domain unit owner is a group.</p>
     */
    inline const OwnerGroupPropertiesOutput& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = OwnerGroupPropertiesOutput>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = OwnerGroupPropertiesOutput>
    OwnerPropertiesOutput& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the domain unit owner is a user.</p>
     */
    inline const OwnerUserPropertiesOutput& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = OwnerUserPropertiesOutput>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = OwnerUserPropertiesOutput>
    OwnerPropertiesOutput& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    OwnerGroupPropertiesOutput m_group;
    bool m_groupHasBeenSet = false;

    OwnerUserPropertiesOutput m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
