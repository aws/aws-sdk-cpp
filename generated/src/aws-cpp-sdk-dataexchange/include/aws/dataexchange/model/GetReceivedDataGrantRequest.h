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
    AWS_DATAEXCHANGE_API GetReceivedDataGrantRequest();

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
    inline const Aws::String& GetDataGrantArn() const{ return m_dataGrantArn; }
    inline bool DataGrantArnHasBeenSet() const { return m_dataGrantArnHasBeenSet; }
    inline void SetDataGrantArn(const Aws::String& value) { m_dataGrantArnHasBeenSet = true; m_dataGrantArn = value; }
    inline void SetDataGrantArn(Aws::String&& value) { m_dataGrantArnHasBeenSet = true; m_dataGrantArn = std::move(value); }
    inline void SetDataGrantArn(const char* value) { m_dataGrantArnHasBeenSet = true; m_dataGrantArn.assign(value); }
    inline GetReceivedDataGrantRequest& WithDataGrantArn(const Aws::String& value) { SetDataGrantArn(value); return *this;}
    inline GetReceivedDataGrantRequest& WithDataGrantArn(Aws::String&& value) { SetDataGrantArn(std::move(value)); return *this;}
    inline GetReceivedDataGrantRequest& WithDataGrantArn(const char* value) { SetDataGrantArn(value); return *this;}
    ///@}
  private:

    Aws::String m_dataGrantArn;
    bool m_dataGrantArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
