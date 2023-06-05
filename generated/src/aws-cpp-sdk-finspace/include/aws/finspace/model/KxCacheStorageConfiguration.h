/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The configuration for read only disk cache associated with a
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxCacheStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class KxCacheStorageConfiguration
  {
  public:
    AWS_FINSPACE_API KxCacheStorageConfiguration();
    AWS_FINSPACE_API KxCacheStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxCacheStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline KxCacheStorageConfiguration& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline KxCacheStorageConfiguration& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of cache storage . The valid values are: </p> <ul> <li>
     * <p>CACHE_1000 – This type provides at least 1000 MB/s disk access throughput.
     * </p> </li> </ul>
     */
    inline KxCacheStorageConfiguration& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The size of cache in Gigabytes.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The size of cache in Gigabytes.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size of cache in Gigabytes.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size of cache in Gigabytes.</p>
     */
    inline KxCacheStorageConfiguration& WithSize(int value) { SetSize(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
