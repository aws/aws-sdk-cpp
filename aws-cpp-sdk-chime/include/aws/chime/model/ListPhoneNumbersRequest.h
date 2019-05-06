/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/chime/model/PhoneNumberStatus.h>
#include <aws/chime/model/PhoneNumberProductType.h>
#include <aws/chime/model/PhoneNumberAssociationName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API ListPhoneNumbersRequest : public ChimeRequest
  {
  public:
    ListPhoneNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The phone number status.</p>
     */
    inline const PhoneNumberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The phone number status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The phone number status.</p>
     */
    inline void SetStatus(const PhoneNumberStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The phone number status.</p>
     */
    inline void SetStatus(PhoneNumberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The phone number status.</p>
     */
    inline ListPhoneNumbersRequest& WithStatus(const PhoneNumberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The phone number status.</p>
     */
    inline ListPhoneNumbersRequest& WithStatus(PhoneNumberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The phone number product type.</p>
     */
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    /**
     * <p>The phone number product type.</p>
     */
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    /**
     * <p>The phone number product type.</p>
     */
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    /**
     * <p>The phone number product type.</p>
     */
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    /**
     * <p>The phone number product type.</p>
     */
    inline ListPhoneNumbersRequest& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    /**
     * <p>The phone number product type.</p>
     */
    inline ListPhoneNumbersRequest& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    /**
     * <p>The filter to use to limit the number of results.</p>
     */
    inline const PhoneNumberAssociationName& GetFilterName() const{ return m_filterName; }

    /**
     * <p>The filter to use to limit the number of results.</p>
     */
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    /**
     * <p>The filter to use to limit the number of results.</p>
     */
    inline void SetFilterName(const PhoneNumberAssociationName& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    /**
     * <p>The filter to use to limit the number of results.</p>
     */
    inline void SetFilterName(PhoneNumberAssociationName&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    /**
     * <p>The filter to use to limit the number of results.</p>
     */
    inline ListPhoneNumbersRequest& WithFilterName(const PhoneNumberAssociationName& value) { SetFilterName(value); return *this;}

    /**
     * <p>The filter to use to limit the number of results.</p>
     */
    inline ListPhoneNumbersRequest& WithFilterName(PhoneNumberAssociationName&& value) { SetFilterName(std::move(value)); return *this;}


    /**
     * <p>The value to use for the filter.</p>
     */
    inline const Aws::String& GetFilterValue() const{ return m_filterValue; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline void SetFilterValue(const Aws::String& value) { m_filterValueHasBeenSet = true; m_filterValue = value; }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline void SetFilterValue(Aws::String&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::move(value); }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline void SetFilterValue(const char* value) { m_filterValueHasBeenSet = true; m_filterValue.assign(value); }

    /**
     * <p>The value to use for the filter.</p>
     */
    inline ListPhoneNumbersRequest& WithFilterValue(const Aws::String& value) { SetFilterValue(value); return *this;}

    /**
     * <p>The value to use for the filter.</p>
     */
    inline ListPhoneNumbersRequest& WithFilterValue(Aws::String&& value) { SetFilterValue(std::move(value)); return *this;}

    /**
     * <p>The value to use for the filter.</p>
     */
    inline ListPhoneNumbersRequest& WithFilterValue(const char* value) { SetFilterValue(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline ListPhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListPhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListPhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListPhoneNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    PhoneNumberStatus m_status;
    bool m_statusHasBeenSet;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet;

    PhoneNumberAssociationName m_filterName;
    bool m_filterNameHasBeenSet;

    Aws::String m_filterValue;
    bool m_filterValueHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
