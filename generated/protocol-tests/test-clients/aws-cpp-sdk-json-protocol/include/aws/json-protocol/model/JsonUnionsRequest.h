/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/json-protocol/model/MyUnion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace JsonProtocol
{
namespace Model
{

  /**
   * <p>A shared structure that contains a single union member.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/UnionInputOutput">AWS
   * API Reference</a></p>
   */
  class JsonUnionsRequest : public JsonProtocolRequest
  {
  public:
    AWS_JSONPROTOCOL_API JsonUnionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonUnions"; }

    AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const MyUnion& GetContents() const{ return m_contents; }
    inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
    inline void SetContents(const MyUnion& value) { m_contentsHasBeenSet = true; m_contents = value; }
    inline void SetContents(MyUnion&& value) { m_contentsHasBeenSet = true; m_contents = std::move(value); }
    inline JsonUnionsRequest& WithContents(const MyUnion& value) { SetContents(value); return *this;}
    inline JsonUnionsRequest& WithContents(MyUnion&& value) { SetContents(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline JsonUnionsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonUnionsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonUnionsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MyUnion m_contents;
    bool m_contentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
