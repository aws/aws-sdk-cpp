/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/OwnerGroupProperties.h>
#include <aws/datazone/model/OwnerUserProperties.h>
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
   * <p>The properties of a domain unit's owner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OwnerProperties">AWS
   * API Reference</a></p>
   */
  class OwnerProperties
  {
  public:
    AWS_DATAZONE_API OwnerProperties() = default;
    AWS_DATAZONE_API OwnerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OwnerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies that the domain unit owner is a group.</p>
     */
    inline const OwnerGroupProperties& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = OwnerGroupProperties>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = OwnerGroupProperties>
    OwnerProperties& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the domain unit owner is a user.</p>
     */
    inline const OwnerUserProperties& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = OwnerUserProperties>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = OwnerUserProperties>
    OwnerProperties& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    OwnerGroupProperties m_group;
    bool m_groupHasBeenSet = false;

    OwnerUserProperties m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
