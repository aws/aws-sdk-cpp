/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The deleted unique ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/DeletedUniqueId">AWS
   * API Reference</a></p>
   */
  class DeletedUniqueId
  {
  public:
    AWS_ENTITYRESOLUTION_API DeletedUniqueId();
    AWS_ENTITYRESOLUTION_API DeletedUniqueId(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API DeletedUniqueId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline const Aws::String& GetUniqueId() const{ return m_uniqueId; }

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline void SetUniqueId(const Aws::String& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = value; }

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline void SetUniqueId(Aws::String&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::move(value); }

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline void SetUniqueId(const char* value) { m_uniqueIdHasBeenSet = true; m_uniqueId.assign(value); }

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline DeletedUniqueId& WithUniqueId(const Aws::String& value) { SetUniqueId(value); return *this;}

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline DeletedUniqueId& WithUniqueId(Aws::String&& value) { SetUniqueId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of the deleted item.</p>
     */
    inline DeletedUniqueId& WithUniqueId(const char* value) { SetUniqueId(value); return *this;}

  private:

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
