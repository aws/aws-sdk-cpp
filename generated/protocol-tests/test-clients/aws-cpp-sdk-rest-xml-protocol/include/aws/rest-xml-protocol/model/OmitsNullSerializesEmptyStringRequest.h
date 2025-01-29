/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class OmitsNullSerializesEmptyStringRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API OmitsNullSerializesEmptyStringRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OmitsNullSerializesEmptyString"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetNullValue() const{ return m_nullValue; }
    inline bool NullValueHasBeenSet() const { return m_nullValueHasBeenSet; }
    inline void SetNullValue(const Aws::String& value) { m_nullValueHasBeenSet = true; m_nullValue = value; }
    inline void SetNullValue(Aws::String&& value) { m_nullValueHasBeenSet = true; m_nullValue = std::move(value); }
    inline void SetNullValue(const char* value) { m_nullValueHasBeenSet = true; m_nullValue.assign(value); }
    inline OmitsNullSerializesEmptyStringRequest& WithNullValue(const Aws::String& value) { SetNullValue(value); return *this;}
    inline OmitsNullSerializesEmptyStringRequest& WithNullValue(Aws::String&& value) { SetNullValue(std::move(value)); return *this;}
    inline OmitsNullSerializesEmptyStringRequest& WithNullValue(const char* value) { SetNullValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetEmptyString() const{ return m_emptyString; }
    inline bool EmptyStringHasBeenSet() const { return m_emptyStringHasBeenSet; }
    inline void SetEmptyString(const Aws::String& value) { m_emptyStringHasBeenSet = true; m_emptyString = value; }
    inline void SetEmptyString(Aws::String&& value) { m_emptyStringHasBeenSet = true; m_emptyString = std::move(value); }
    inline void SetEmptyString(const char* value) { m_emptyStringHasBeenSet = true; m_emptyString.assign(value); }
    inline OmitsNullSerializesEmptyStringRequest& WithEmptyString(const Aws::String& value) { SetEmptyString(value); return *this;}
    inline OmitsNullSerializesEmptyStringRequest& WithEmptyString(Aws::String&& value) { SetEmptyString(std::move(value)); return *this;}
    inline OmitsNullSerializesEmptyStringRequest& WithEmptyString(const char* value) { SetEmptyString(value); return *this;}
    ///@}
  private:

    Aws::String m_nullValue;
    bool m_nullValueHasBeenSet = false;

    Aws::String m_emptyString;
    bool m_emptyStringHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
