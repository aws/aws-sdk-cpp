/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class HttpPrefixHeadersRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "HttpPrefixHeaders"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline HttpPrefixHeadersRequest& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline HttpPrefixHeadersRequest& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline HttpPrefixHeadersRequest& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetFooMap() const{ return m_fooMap; }
    inline bool FooMapHasBeenSet() const { return m_fooMapHasBeenSet; }
    inline void SetFooMap(const Aws::Map<Aws::String, Aws::String>& value) { m_fooMapHasBeenSet = true; m_fooMap = value; }
    inline void SetFooMap(Aws::Map<Aws::String, Aws::String>&& value) { m_fooMapHasBeenSet = true; m_fooMap = std::move(value); }
    inline HttpPrefixHeadersRequest& WithFooMap(const Aws::Map<Aws::String, Aws::String>& value) { SetFooMap(value); return *this;}
    inline HttpPrefixHeadersRequest& WithFooMap(Aws::Map<Aws::String, Aws::String>&& value) { SetFooMap(std::move(value)); return *this;}
    inline HttpPrefixHeadersRequest& AddFooMap(const Aws::String& key, const Aws::String& value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(key, value); return *this; }
    inline HttpPrefixHeadersRequest& AddFooMap(Aws::String&& key, const Aws::String& value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(std::move(key), value); return *this; }
    inline HttpPrefixHeadersRequest& AddFooMap(const Aws::String& key, Aws::String&& value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(key, std::move(value)); return *this; }
    inline HttpPrefixHeadersRequest& AddFooMap(Aws::String&& key, Aws::String&& value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(std::move(key), std::move(value)); return *this; }
    inline HttpPrefixHeadersRequest& AddFooMap(const char* key, Aws::String&& value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(key, std::move(value)); return *this; }
    inline HttpPrefixHeadersRequest& AddFooMap(Aws::String&& key, const char* value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(std::move(key), value); return *this; }
    inline HttpPrefixHeadersRequest& AddFooMap(const char* key, const char* value) { m_fooMapHasBeenSet = true; m_fooMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_fooMap;
    bool m_fooMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
