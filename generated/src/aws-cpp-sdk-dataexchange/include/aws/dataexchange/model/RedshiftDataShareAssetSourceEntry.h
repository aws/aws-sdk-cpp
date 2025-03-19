/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The source of the Amazon Redshift datashare asset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RedshiftDataShareAssetSourceEntry">AWS
   * API Reference</a></p>
   */
  class RedshiftDataShareAssetSourceEntry
  {
  public:
    AWS_DATAEXCHANGE_API RedshiftDataShareAssetSourceEntry() = default;
    AWS_DATAEXCHANGE_API RedshiftDataShareAssetSourceEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RedshiftDataShareAssetSourceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare asset.</p>
     */
    inline const Aws::String& GetDataShareArn() const { return m_dataShareArn; }
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }
    template<typename DataShareArnT = Aws::String>
    void SetDataShareArn(DataShareArnT&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::forward<DataShareArnT>(value); }
    template<typename DataShareArnT = Aws::String>
    RedshiftDataShareAssetSourceEntry& WithDataShareArn(DataShareArnT&& value) { SetDataShareArn(std::forward<DataShareArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
