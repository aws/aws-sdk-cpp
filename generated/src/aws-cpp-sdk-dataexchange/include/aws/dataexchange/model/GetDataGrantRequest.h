/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class GetDataGrantRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API GetDataGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataGrant"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the data grant.</p>
     */
    inline const Aws::String& GetDataGrantId() const { return m_dataGrantId; }
    inline bool DataGrantIdHasBeenSet() const { return m_dataGrantIdHasBeenSet; }
    template<typename DataGrantIdT = Aws::String>
    void SetDataGrantId(DataGrantIdT&& value) { m_dataGrantIdHasBeenSet = true; m_dataGrantId = std::forward<DataGrantIdT>(value); }
    template<typename DataGrantIdT = Aws::String>
    GetDataGrantRequest& WithDataGrantId(DataGrantIdT&& value) { SetDataGrantId(std::forward<DataGrantIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataGrantId;
    bool m_dataGrantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
