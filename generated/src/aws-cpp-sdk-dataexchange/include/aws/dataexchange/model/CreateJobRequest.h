/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/dataexchange/model/RequestDetails.h>
#include <aws/dataexchange/model/Type.h>
#include <utility>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The details for the CreateJob request.</p>
     */
    inline const RequestDetails& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const RequestDetails& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(RequestDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline CreateJobRequest& WithDetails(const RequestDetails& value) { SetDetails(value); return *this;}
    inline CreateJobRequest& WithDetails(RequestDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job to be created.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateJobRequest& WithType(const Type& value) { SetType(value); return *this;}
    inline CreateJobRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RequestDetails m_details;
    bool m_detailsHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
