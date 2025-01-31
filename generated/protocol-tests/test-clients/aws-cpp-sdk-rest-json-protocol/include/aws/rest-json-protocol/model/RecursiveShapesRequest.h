/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested1.h>
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
  class RecursiveShapesRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API RecursiveShapesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecursiveShapes"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const RecursiveShapesInputOutputNested1& GetNested() const{ return m_nested; }
    inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
    inline void SetNested(const RecursiveShapesInputOutputNested1& value) { m_nestedHasBeenSet = true; m_nested = value; }
    inline void SetNested(RecursiveShapesInputOutputNested1&& value) { m_nestedHasBeenSet = true; m_nested = std::move(value); }
    inline RecursiveShapesRequest& WithNested(const RecursiveShapesInputOutputNested1& value) { SetNested(value); return *this;}
    inline RecursiveShapesRequest& WithNested(RecursiveShapesInputOutputNested1&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline RecursiveShapesRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RecursiveShapesRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RecursiveShapesRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RecursiveShapesInputOutputNested1 m_nested;
    bool m_nestedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
