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
  class ConstantAndVariableQueryStringRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API ConstantAndVariableQueryStringRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConstantAndVariableQueryString"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetBaz() const{ return m_baz; }
    inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
    inline void SetBaz(const Aws::String& value) { m_bazHasBeenSet = true; m_baz = value; }
    inline void SetBaz(Aws::String&& value) { m_bazHasBeenSet = true; m_baz = std::move(value); }
    inline void SetBaz(const char* value) { m_bazHasBeenSet = true; m_baz.assign(value); }
    inline ConstantAndVariableQueryStringRequest& WithBaz(const Aws::String& value) { SetBaz(value); return *this;}
    inline ConstantAndVariableQueryStringRequest& WithBaz(Aws::String&& value) { SetBaz(std::move(value)); return *this;}
    inline ConstantAndVariableQueryStringRequest& WithBaz(const char* value) { SetBaz(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMaybeSet() const{ return m_maybeSet; }
    inline bool MaybeSetHasBeenSet() const { return m_maybeSetHasBeenSet; }
    inline void SetMaybeSet(const Aws::String& value) { m_maybeSetHasBeenSet = true; m_maybeSet = value; }
    inline void SetMaybeSet(Aws::String&& value) { m_maybeSetHasBeenSet = true; m_maybeSet = std::move(value); }
    inline void SetMaybeSet(const char* value) { m_maybeSetHasBeenSet = true; m_maybeSet.assign(value); }
    inline ConstantAndVariableQueryStringRequest& WithMaybeSet(const Aws::String& value) { SetMaybeSet(value); return *this;}
    inline ConstantAndVariableQueryStringRequest& WithMaybeSet(Aws::String&& value) { SetMaybeSet(std::move(value)); return *this;}
    inline ConstantAndVariableQueryStringRequest& WithMaybeSet(const char* value) { SetMaybeSet(value); return *this;}
    ///@}
  private:

    Aws::String m_baz;
    bool m_bazHasBeenSet = false;

    Aws::String m_maybeSet;
    bool m_maybeSetHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
