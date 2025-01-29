/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class RecursiveShapesRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API RecursiveShapesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RecursiveShapes"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const RecursiveShapesInputOutputNested1& GetNested() const{ return m_nested; }
    inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
    inline void SetNested(const RecursiveShapesInputOutputNested1& value) { m_nestedHasBeenSet = true; m_nested = value; }
    inline void SetNested(RecursiveShapesInputOutputNested1&& value) { m_nestedHasBeenSet = true; m_nested = std::move(value); }
    inline RecursiveShapesRequest& WithNested(const RecursiveShapesInputOutputNested1& value) { SetNested(value); return *this;}
    inline RecursiveShapesRequest& WithNested(RecursiveShapesInputOutputNested1&& value) { SetNested(std::move(value)); return *this;}
    ///@}
  private:

    RecursiveShapesInputOutputNested1 m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
