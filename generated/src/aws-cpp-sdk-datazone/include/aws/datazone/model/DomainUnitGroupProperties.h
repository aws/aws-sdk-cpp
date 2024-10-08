﻿/**
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
   * <p>The properties of a domain unit group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DomainUnitGroupProperties">AWS
   * API Reference</a></p>
   */
  class DomainUnitGroupProperties
  {
  public:
    AWS_DATAZONE_API DomainUnitGroupProperties();
    AWS_DATAZONE_API DomainUnitGroupProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainUnitGroupProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the domain unit group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline DomainUnitGroupProperties& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline DomainUnitGroupProperties& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline DomainUnitGroupProperties& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
