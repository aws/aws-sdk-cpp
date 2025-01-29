/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class EndpointWithHostLabelOperationRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API EndpointWithHostLabelOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EndpointWithHostLabelOperation"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline EndpointWithHostLabelOperationRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline EndpointWithHostLabelOperationRequest& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline EndpointWithHostLabelOperationRequest& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
