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
    AWS_FINSPACE_API KxCacheStorageConfiguration() = default;
    AWS_FINSPACE_API KxCacheStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxCacheStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of cache storage. The valid values are: </p> <ul> <li> <p>CACHE_1000
     * – This type provides at least 1000 MB/s disk access throughput. </p> </li> <li>
     * <p>CACHE_250 – This type provides at least 250 MB/s disk access throughput. </p>
     * </li> <li> <p>CACHE_12 – This type provides at least 12 MB/s disk access
     * throughput. </p> </li> </ul> <p>For cache type <code>CACHE_1000</code> and
     * <code>CACHE_250</code> you can select cache size as 1200 GB or increments of
     * 2400 GB. For cache type <code>CACHE_12</code> you can select the cache size in
     * increments of 6000 GB.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    KxCacheStorageConfiguration& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of cache in Gigabytes.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline KxCacheStorageConfiguration& WithSize(int value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
