/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information abount duplicate timestamps in the
   * dataset. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DuplicateTimestamps">AWS
   * API Reference</a></p>
   */
  class DuplicateTimestamps
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DuplicateTimestamps();
    AWS_LOOKOUTEQUIPMENT_API DuplicateTimestamps(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DuplicateTimestamps& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the total number of duplicate timestamps. </p>
     */
    inline int GetTotalNumberOfDuplicateTimestamps() const{ return m_totalNumberOfDuplicateTimestamps; }

    /**
     * <p> Indicates the total number of duplicate timestamps. </p>
     */
    inline bool TotalNumberOfDuplicateTimestampsHasBeenSet() const { return m_totalNumberOfDuplicateTimestampsHasBeenSet; }

    /**
     * <p> Indicates the total number of duplicate timestamps. </p>
     */
    inline void SetTotalNumberOfDuplicateTimestamps(int value) { m_totalNumberOfDuplicateTimestampsHasBeenSet = true; m_totalNumberOfDuplicateTimestamps = value; }

    /**
     * <p> Indicates the total number of duplicate timestamps. </p>
     */
    inline DuplicateTimestamps& WithTotalNumberOfDuplicateTimestamps(int value) { SetTotalNumberOfDuplicateTimestamps(value); return *this;}

  private:

    int m_totalNumberOfDuplicateTimestamps;
    bool m_totalNumberOfDuplicateTimestampsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
