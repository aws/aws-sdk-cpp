/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/ReceiptFilter.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class AWS_SES_API CreateReceiptFilterRequest : public SESRequest
  {
  public:
    CreateReceiptFilterRequest();
    Aws::String SerializePayload() const override;


    
    inline const ReceiptFilter& GetFilter() const{ return m_filter; }

    
    inline void SetFilter(const ReceiptFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline void SetFilter(ReceiptFilter&& value) { m_filterHasBeenSet = true; m_filter = value; }

    
    inline CreateReceiptFilterRequest& WithFilter(const ReceiptFilter& value) { SetFilter(value); return *this;}

    
    inline CreateReceiptFilterRequest& WithFilter(ReceiptFilter&& value) { SetFilter(value); return *this;}

  private:
    ReceiptFilter m_filter;
    bool m_filterHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
