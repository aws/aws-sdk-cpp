/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainUnitGroupProperties.h>
#include <aws/datazone/model/DomainUnitUserProperties.h>
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
   * <p>The properties of the domain unit owner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DomainUnitOwnerProperties">AWS
   * API Reference</a></p>
   */
  class DomainUnitOwnerProperties
  {
  public:
    AWS_DATAZONE_API DomainUnitOwnerProperties();
    AWS_DATAZONE_API DomainUnitOwnerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainUnitOwnerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that the domain unit owner is a group.</p>
     */
    inline const DomainUnitGroupProperties& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const DomainUnitGroupProperties& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(DomainUnitGroupProperties&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline DomainUnitOwnerProperties& WithGroup(const DomainUnitGroupProperties& value) { SetGroup(value); return *this;}
    inline DomainUnitOwnerProperties& WithGroup(DomainUnitGroupProperties&& value) { SetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the domain unit owner is a user.</p>
     */
    inline const DomainUnitUserProperties& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const DomainUnitUserProperties& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(DomainUnitUserProperties&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline DomainUnitOwnerProperties& WithUser(const DomainUnitUserProperties& value) { SetUser(value); return *this;}
    inline DomainUnitOwnerProperties& WithUser(DomainUnitUserProperties&& value) { SetUser(std::move(value)); return *this;}
    ///@}
  private:

    DomainUnitGroupProperties m_group;
    bool m_groupHasBeenSet = false;

    DomainUnitUserProperties m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
