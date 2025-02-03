/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class QueryPrecedenceRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API QueryPrecedenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryPrecedence"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline QueryPrecedenceRequest& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline QueryPrecedenceRequest& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline QueryPrecedenceRequest& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetBaz() const{ return m_baz; }
    inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
    inline void SetBaz(const Aws::Map<Aws::String, Aws::String>& value) { m_bazHasBeenSet = true; m_baz = value; }
    inline void SetBaz(Aws::Map<Aws::String, Aws::String>&& value) { m_bazHasBeenSet = true; m_baz = std::move(value); }
    inline QueryPrecedenceRequest& WithBaz(const Aws::Map<Aws::String, Aws::String>& value) { SetBaz(value); return *this;}
    inline QueryPrecedenceRequest& WithBaz(Aws::Map<Aws::String, Aws::String>&& value) { SetBaz(std::move(value)); return *this;}
    inline QueryPrecedenceRequest& AddBaz(const Aws::String& key, const Aws::String& value) { m_bazHasBeenSet = true; m_baz.emplace(key, value); return *this; }
    inline QueryPrecedenceRequest& AddBaz(Aws::String&& key, const Aws::String& value) { m_bazHasBeenSet = true; m_baz.emplace(std::move(key), value); return *this; }
    inline QueryPrecedenceRequest& AddBaz(const Aws::String& key, Aws::String&& value) { m_bazHasBeenSet = true; m_baz.emplace(key, std::move(value)); return *this; }
    inline QueryPrecedenceRequest& AddBaz(Aws::String&& key, Aws::String&& value) { m_bazHasBeenSet = true; m_baz.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryPrecedenceRequest& AddBaz(const char* key, Aws::String&& value) { m_bazHasBeenSet = true; m_baz.emplace(key, std::move(value)); return *this; }
    inline QueryPrecedenceRequest& AddBaz(Aws::String&& key, const char* value) { m_bazHasBeenSet = true; m_baz.emplace(std::move(key), value); return *this; }
    inline QueryPrecedenceRequest& AddBaz(const char* key, const char* value) { m_bazHasBeenSet = true; m_baz.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_baz;
    bool m_bazHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
