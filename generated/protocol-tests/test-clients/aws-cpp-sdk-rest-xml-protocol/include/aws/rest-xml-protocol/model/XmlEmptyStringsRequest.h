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
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class XmlEmptyStringsRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEmptyStringsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlEmptyStrings"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetEmptyString() const{ return m_emptyString; }
    inline bool EmptyStringHasBeenSet() const { return m_emptyStringHasBeenSet; }
    inline void SetEmptyString(const Aws::String& value) { m_emptyStringHasBeenSet = true; m_emptyString = value; }
    inline void SetEmptyString(Aws::String&& value) { m_emptyStringHasBeenSet = true; m_emptyString = std::move(value); }
    inline void SetEmptyString(const char* value) { m_emptyStringHasBeenSet = true; m_emptyString.assign(value); }
    inline XmlEmptyStringsRequest& WithEmptyString(const Aws::String& value) { SetEmptyString(value); return *this;}
    inline XmlEmptyStringsRequest& WithEmptyString(Aws::String&& value) { SetEmptyString(std::move(value)); return *this;}
    inline XmlEmptyStringsRequest& WithEmptyString(const char* value) { SetEmptyString(value); return *this;}
    ///@}
  private:

    Aws::String m_emptyString;
    bool m_emptyStringHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
