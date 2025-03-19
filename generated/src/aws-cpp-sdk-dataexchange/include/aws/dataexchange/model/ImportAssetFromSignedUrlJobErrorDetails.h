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
   * <p>Details about the job error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromSignedUrlJobErrorDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetFromSignedUrlJobErrorDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlJobErrorDetails() = default;
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlJobErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlJobErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about the job error.</p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
