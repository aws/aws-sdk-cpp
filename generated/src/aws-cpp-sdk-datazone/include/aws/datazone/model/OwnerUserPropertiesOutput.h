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
   * <p>The properties of the owner user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OwnerUserPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class OwnerUserPropertiesOutput
  {
  public:
    AWS_DATAZONE_API OwnerUserPropertiesOutput();
    AWS_DATAZONE_API OwnerUserPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OwnerUserPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the owner user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline OwnerUserPropertiesOutput& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline OwnerUserPropertiesOutput& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline OwnerUserPropertiesOutput& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
