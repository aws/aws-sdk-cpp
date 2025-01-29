/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/model/UnionWithJsonName.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class PostUnionWithJsonNameRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API PostUnionWithJsonNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PostUnionWithJsonName"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const UnionWithJsonName& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const UnionWithJsonName& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(UnionWithJsonName&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline PostUnionWithJsonNameRequest& WithValue(const UnionWithJsonName& value) { SetValue(value); return *this;}
    inline PostUnionWithJsonNameRequest& WithValue(UnionWithJsonName&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    UnionWithJsonName m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
