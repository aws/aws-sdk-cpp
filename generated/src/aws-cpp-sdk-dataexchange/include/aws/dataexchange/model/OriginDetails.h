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
   * <p>Details about the origin of the data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/OriginDetails">AWS
   * API Reference</a></p>
   */
  class OriginDetails
  {
  public:
    AWS_DATAEXCHANGE_API OriginDetails() = default;
    AWS_DATAEXCHANGE_API OriginDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API OriginDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The product ID of the origin of the data set.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    OriginDetails& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data grant.</p>
     */
    inline const Aws::String& GetDataGrantId() const { return m_dataGrantId; }
    inline bool DataGrantIdHasBeenSet() const { return m_dataGrantIdHasBeenSet; }
    template<typename DataGrantIdT = Aws::String>
    void SetDataGrantId(DataGrantIdT&& value) { m_dataGrantIdHasBeenSet = true; m_dataGrantId = std::forward<DataGrantIdT>(value); }
    template<typename DataGrantIdT = Aws::String>
    OriginDetails& WithDataGrantId(DataGrantIdT&& value) { SetDataGrantId(std::forward<DataGrantIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_dataGrantId;
    bool m_dataGrantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
