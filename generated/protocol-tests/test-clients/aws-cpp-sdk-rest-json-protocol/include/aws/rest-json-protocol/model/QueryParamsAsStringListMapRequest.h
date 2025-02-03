/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class QueryParamsAsStringListMapRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API QueryParamsAsStringListMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryParamsAsStringListMap"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetQux() const{ return m_qux; }
    inline bool QuxHasBeenSet() const { return m_quxHasBeenSet; }
    inline void SetQux(const Aws::String& value) { m_quxHasBeenSet = true; m_qux = value; }
    inline void SetQux(Aws::String&& value) { m_quxHasBeenSet = true; m_qux = std::move(value); }
    inline void SetQux(const char* value) { m_quxHasBeenSet = true; m_qux.assign(value); }
    inline QueryParamsAsStringListMapRequest& WithQux(const Aws::String& value) { SetQux(value); return *this;}
    inline QueryParamsAsStringListMapRequest& WithQux(Aws::String&& value) { SetQux(std::move(value)); return *this;}
    inline QueryParamsAsStringListMapRequest& WithQux(const char* value) { SetQux(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline QueryParamsAsStringListMapRequest& WithFoo(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFoo(value); return *this;}
    inline QueryParamsAsStringListMapRequest& WithFoo(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFoo(std::move(value)); return *this;}
    inline QueryParamsAsStringListMapRequest& AddFoo(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_fooHasBeenSet = true; m_foo.emplace(key, value); return *this; }
    inline QueryParamsAsStringListMapRequest& AddFoo(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_fooHasBeenSet = true; m_foo.emplace(std::move(key), value); return *this; }
    inline QueryParamsAsStringListMapRequest& AddFoo(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_fooHasBeenSet = true; m_foo.emplace(key, std::move(value)); return *this; }
    inline QueryParamsAsStringListMapRequest& AddFoo(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_fooHasBeenSet = true; m_foo.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryParamsAsStringListMapRequest& AddFoo(const char* key, Aws::Vector<Aws::String>&& value) { m_fooHasBeenSet = true; m_foo.emplace(key, std::move(value)); return *this; }
    inline QueryParamsAsStringListMapRequest& AddFoo(const char* key, const Aws::Vector<Aws::String>& value) { m_fooHasBeenSet = true; m_foo.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_qux;
    bool m_quxHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_foo;
    bool m_fooHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
