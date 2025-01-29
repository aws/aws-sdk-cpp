/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class HttpChecksumRequiredRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API HttpChecksumRequiredRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "HttpChecksumRequired"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_RESTJSONPROTOCOL_API inline bool ShouldComputeContentMd5() const override { return true; }


    ///@{
    
    inline const Aws::String& GetFoo() const{ return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    inline void SetFoo(const Aws::String& value) { m_fooHasBeenSet = true; m_foo = value; }
    inline void SetFoo(Aws::String&& value) { m_fooHasBeenSet = true; m_foo = std::move(value); }
    inline void SetFoo(const char* value) { m_fooHasBeenSet = true; m_foo.assign(value); }
    inline HttpChecksumRequiredRequest& WithFoo(const Aws::String& value) { SetFoo(value); return *this;}
    inline HttpChecksumRequiredRequest& WithFoo(Aws::String&& value) { SetFoo(std::move(value)); return *this;}
    inline HttpChecksumRequiredRequest& WithFoo(const char* value) { SetFoo(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline HttpChecksumRequiredRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline HttpChecksumRequiredRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline HttpChecksumRequiredRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
