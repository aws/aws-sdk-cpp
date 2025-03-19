/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/PhoneNumberProductType.h>
#include <aws/chime-sdk-voice/model/PhoneNumberAssociationName.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class ListPhoneNumbersRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API ListPhoneNumbersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbers"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The status of your organization's phone numbers.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ListPhoneNumbersRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number product types.</p>
     */
    inline PhoneNumberProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(PhoneNumberProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline ListPhoneNumbersRequest& WithProductType(PhoneNumberProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter to limit the number of results.</p>
     */
    inline PhoneNumberAssociationName GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    inline void SetFilterName(PhoneNumberAssociationName value) { m_filterNameHasBeenSet = true; m_filterName = value; }
    inline ListPhoneNumbersRequest& WithFilterName(PhoneNumberAssociationName value) { SetFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter value.</p>
     */
    inline const Aws::String& GetFilterValue() const { return m_filterValue; }
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }
    template<typename FilterValueT = Aws::String>
    void SetFilterValue(FilterValueT&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::forward<FilterValueT>(value); }
    template<typename FilterValueT = Aws::String>
    ListPhoneNumbersRequest& WithFilterValue(FilterValueT&& value) { SetFilterValue(std::forward<FilterValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPhoneNumbersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    PhoneNumberProductType m_productType{PhoneNumberProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    PhoneNumberAssociationName m_filterName{PhoneNumberAssociationName::NOT_SET};
    bool m_filterNameHasBeenSet = false;

    Aws::String m_filterValue;
    bool m_filterValueHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
