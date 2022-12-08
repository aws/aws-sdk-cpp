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
   * <p> Entity that comprises information abount unsupported timestamps in the
   * dataset. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/UnsupportedTimestamps">AWS
   * API Reference</a></p>
   */
  class UnsupportedTimestamps
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API UnsupportedTimestamps();
    AWS_LOOKOUTEQUIPMENT_API UnsupportedTimestamps(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API UnsupportedTimestamps& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the total number of unsupported timestamps across the ingested
     * data. </p>
     */
    inline int GetTotalNumberOfUnsupportedTimestamps() const{ return m_totalNumberOfUnsupportedTimestamps; }

    /**
     * <p> Indicates the total number of unsupported timestamps across the ingested
     * data. </p>
     */
    inline bool TotalNumberOfUnsupportedTimestampsHasBeenSet() const { return m_totalNumberOfUnsupportedTimestampsHasBeenSet; }

    /**
     * <p> Indicates the total number of unsupported timestamps across the ingested
     * data. </p>
     */
    inline void SetTotalNumberOfUnsupportedTimestamps(int value) { m_totalNumberOfUnsupportedTimestampsHasBeenSet = true; m_totalNumberOfUnsupportedTimestamps = value; }

    /**
     * <p> Indicates the total number of unsupported timestamps across the ingested
     * data. </p>
     */
    inline UnsupportedTimestamps& WithTotalNumberOfUnsupportedTimestamps(int value) { SetTotalNumberOfUnsupportedTimestamps(value); return *this;}

  private:

    int m_totalNumberOfUnsupportedTimestamps;
    bool m_totalNumberOfUnsupportedTimestampsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
