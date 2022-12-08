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
    AWS_CHIMESDKVOICE_API ListPhoneNumbersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPhoneNumbers"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    
    inline ListPhoneNumbersRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    
    inline ListPhoneNumbersRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    
    inline ListPhoneNumbersRequest& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const PhoneNumberProductType& GetProductType() const{ return m_productType; }

    
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }

    
    inline void SetProductType(const PhoneNumberProductType& value) { m_productTypeHasBeenSet = true; m_productType = value; }

    
    inline void SetProductType(PhoneNumberProductType&& value) { m_productTypeHasBeenSet = true; m_productType = std::move(value); }

    
    inline ListPhoneNumbersRequest& WithProductType(const PhoneNumberProductType& value) { SetProductType(value); return *this;}

    
    inline ListPhoneNumbersRequest& WithProductType(PhoneNumberProductType&& value) { SetProductType(std::move(value)); return *this;}


    
    inline const PhoneNumberAssociationName& GetFilterName() const{ return m_filterName; }

    
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }

    
    inline void SetFilterName(const PhoneNumberAssociationName& value) { m_filterNameHasBeenSet = true; m_filterName = value; }

    
    inline void SetFilterName(PhoneNumberAssociationName&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }

    
    inline ListPhoneNumbersRequest& WithFilterName(const PhoneNumberAssociationName& value) { SetFilterName(value); return *this;}

    
    inline ListPhoneNumbersRequest& WithFilterName(PhoneNumberAssociationName&& value) { SetFilterName(std::move(value)); return *this;}


    
    inline const Aws::String& GetFilterValue() const{ return m_filterValue; }

    
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }

    
    inline void SetFilterValue(const Aws::String& value) { m_filterValueHasBeenSet = true; m_filterValue = value; }

    
    inline void SetFilterValue(Aws::String&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::move(value); }

    
    inline void SetFilterValue(const char* value) { m_filterValueHasBeenSet = true; m_filterValue.assign(value); }

    
    inline ListPhoneNumbersRequest& WithFilterValue(const Aws::String& value) { SetFilterValue(value); return *this;}

    
    inline ListPhoneNumbersRequest& WithFilterValue(Aws::String&& value) { SetFilterValue(std::move(value)); return *this;}

    
    inline ListPhoneNumbersRequest& WithFilterValue(const char* value) { SetFilterValue(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListPhoneNumbersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListPhoneNumbersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListPhoneNumbersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListPhoneNumbersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    PhoneNumberProductType m_productType;
    bool m_productTypeHasBeenSet = false;

    PhoneNumberAssociationName m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::String m_filterValue;
    bool m_filterValueHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
