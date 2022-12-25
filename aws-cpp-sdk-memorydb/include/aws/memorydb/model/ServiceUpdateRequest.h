/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>A request to apply a service update</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ServiceUpdateRequest">AWS
   * API Reference</a></p>
   */
  class ServiceUpdateRequest
  {
  public:
    AWS_MEMORYDB_API ServiceUpdateRequest();
    AWS_MEMORYDB_API ServiceUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ServiceUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const Aws::String& GetServiceUpdateNameToApply() const{ return m_serviceUpdateNameToApply; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateNameToApplyHasBeenSet() const { return m_serviceUpdateNameToApplyHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateNameToApply(const Aws::String& value) { m_serviceUpdateNameToApplyHasBeenSet = true; m_serviceUpdateNameToApply = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateNameToApply(Aws::String&& value) { m_serviceUpdateNameToApplyHasBeenSet = true; m_serviceUpdateNameToApply = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdateNameToApply(const char* value) { m_serviceUpdateNameToApplyHasBeenSet = true; m_serviceUpdateNameToApply.assign(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdateRequest& WithServiceUpdateNameToApply(const Aws::String& value) { SetServiceUpdateNameToApply(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdateRequest& WithServiceUpdateNameToApply(Aws::String&& value) { SetServiceUpdateNameToApply(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline ServiceUpdateRequest& WithServiceUpdateNameToApply(const char* value) { SetServiceUpdateNameToApply(value); return *this;}

  private:

    Aws::String m_serviceUpdateNameToApply;
    bool m_serviceUpdateNameToApplyHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
