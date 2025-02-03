/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>
#include <aws/json-rpc-10/JSONRPC10Request.h>
#include <aws/json-rpc-10/model/MyUnion.h>
#include <utility>

namespace Aws
{
namespace JSONRPC10
{
namespace Model
{

  /**
   */
  class JsonUnionsRequest : public JSONRPC10Request
  {
  public:
    AWS_JSONRPC10_API JsonUnionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonUnions"; }

    AWS_JSONRPC10_API Aws::String SerializePayload() const override;

    AWS_JSONRPC10_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const MyUnion& GetContents() const{ return m_contents; }
    inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
    inline void SetContents(const MyUnion& value) { m_contentsHasBeenSet = true; m_contents = value; }
    inline void SetContents(MyUnion&& value) { m_contentsHasBeenSet = true; m_contents = std::move(value); }
    inline JsonUnionsRequest& WithContents(const MyUnion& value) { SetContents(value); return *this;}
    inline JsonUnionsRequest& WithContents(MyUnion&& value) { SetContents(std::move(value)); return *this;}
    ///@}
  private:

    MyUnion m_contents;
    bool m_contentsHasBeenSet = false;
  };

} // namespace Model
} // namespace JSONRPC10
} // namespace Aws
