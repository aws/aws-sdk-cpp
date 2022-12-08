/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>

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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Information on the records ingested by this request.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/RecordsIngested">AWS
   * API Reference</a></p>
   */
  class RecordsIngested
  {
  public:
    AWS_TIMESTREAMWRITE_API RecordsIngested();
    AWS_TIMESTREAMWRITE_API RecordsIngested(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API RecordsIngested& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total count of successfully ingested records.</p>
     */
    inline int GetTotal() const{ return m_total; }

    /**
     * <p>Total count of successfully ingested records.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>Total count of successfully ingested records.</p>
     */
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>Total count of successfully ingested records.</p>
     */
    inline RecordsIngested& WithTotal(int value) { SetTotal(value); return *this;}


    /**
     * <p>Count of records ingested into the memory store.</p>
     */
    inline int GetMemoryStore() const{ return m_memoryStore; }

    /**
     * <p>Count of records ingested into the memory store.</p>
     */
    inline bool MemoryStoreHasBeenSet() const { return m_memoryStoreHasBeenSet; }

    /**
     * <p>Count of records ingested into the memory store.</p>
     */
    inline void SetMemoryStore(int value) { m_memoryStoreHasBeenSet = true; m_memoryStore = value; }

    /**
     * <p>Count of records ingested into the memory store.</p>
     */
    inline RecordsIngested& WithMemoryStore(int value) { SetMemoryStore(value); return *this;}


    /**
     * <p>Count of records ingested into the magnetic store.</p>
     */
    inline int GetMagneticStore() const{ return m_magneticStore; }

    /**
     * <p>Count of records ingested into the magnetic store.</p>
     */
    inline bool MagneticStoreHasBeenSet() const { return m_magneticStoreHasBeenSet; }

    /**
     * <p>Count of records ingested into the magnetic store.</p>
     */
    inline void SetMagneticStore(int value) { m_magneticStoreHasBeenSet = true; m_magneticStore = value; }

    /**
     * <p>Count of records ingested into the magnetic store.</p>
     */
    inline RecordsIngested& WithMagneticStore(int value) { SetMagneticStore(value); return *this;}

  private:

    int m_total;
    bool m_totalHasBeenSet = false;

    int m_memoryStore;
    bool m_memoryStoreHasBeenSet = false;

    int m_magneticStore;
    bool m_magneticStoreHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
