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
    AWS_DATAEXCHANGE_API GetDataGrantRequest();

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
    inline const Aws::String& GetDataGrantId() const{ return m_dataGrantId; }
    inline bool DataGrantIdHasBeenSet() const { return m_dataGrantIdHasBeenSet; }
    inline void SetDataGrantId(const Aws::String& value) { m_dataGrantIdHasBeenSet = true; m_dataGrantId = value; }
    inline void SetDataGrantId(Aws::String&& value) { m_dataGrantIdHasBeenSet = true; m_dataGrantId = std::move(value); }
    inline void SetDataGrantId(const char* value) { m_dataGrantIdHasBeenSet = true; m_dataGrantId.assign(value); }
    inline GetDataGrantRequest& WithDataGrantId(const Aws::String& value) { SetDataGrantId(value); return *this;}
    inline GetDataGrantRequest& WithDataGrantId(Aws::String&& value) { SetDataGrantId(std::move(value)); return *this;}
    inline GetDataGrantRequest& WithDataGrantId(const char* value) { SetDataGrantId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataGrantId;
    bool m_dataGrantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
