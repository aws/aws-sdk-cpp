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
  class MediaTypeHeaderRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API MediaTypeHeaderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MediaTypeHeader"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetJson() const{ return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    inline void SetJson(const Aws::String& value) { m_jsonHasBeenSet = true; m_json = value; }
    inline void SetJson(Aws::String&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }
    inline void SetJson(const char* value) { m_jsonHasBeenSet = true; m_json.assign(value); }
    inline MediaTypeHeaderRequest& WithJson(const Aws::String& value) { SetJson(value); return *this;}
    inline MediaTypeHeaderRequest& WithJson(Aws::String&& value) { SetJson(std::move(value)); return *this;}
    inline MediaTypeHeaderRequest& WithJson(const char* value) { SetJson(value); return *this;}
    ///@}
  private:

    Aws::String m_json;
    bool m_jsonHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
