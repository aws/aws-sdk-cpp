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
  class GetReceivedDataGrantRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API GetReceivedDataGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReceivedDataGrant"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data grant.</p>
     */
    inline const Aws::String& GetDataGrantArn() const { return m_dataGrantArn; }
    inline bool DataGrantArnHasBeenSet() const { return m_dataGrantArnHasBeenSet; }
    template<typename DataGrantArnT = Aws::String>
    void SetDataGrantArn(DataGrantArnT&& value) { m_dataGrantArnHasBeenSet = true; m_dataGrantArn = std::forward<DataGrantArnT>(value); }
    template<typename DataGrantArnT = Aws::String>
    GetReceivedDataGrantRequest& WithDataGrantArn(DataGrantArnT&& value) { SetDataGrantArn(std::forward<DataGrantArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataGrantArn;
    bool m_dataGrantArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
