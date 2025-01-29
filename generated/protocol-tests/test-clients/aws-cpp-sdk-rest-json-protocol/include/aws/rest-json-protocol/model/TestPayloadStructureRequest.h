/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/model/PayloadConfig.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class TestPayloadStructureRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API TestPayloadStructureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestPayloadStructure"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetTestId() const{ return m_testId; }
    inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
    inline void SetTestId(const Aws::String& value) { m_testIdHasBeenSet = true; m_testId = value; }
    inline void SetTestId(Aws::String&& value) { m_testIdHasBeenSet = true; m_testId = std::move(value); }
    inline void SetTestId(const char* value) { m_testIdHasBeenSet = true; m_testId.assign(value); }
    inline TestPayloadStructureRequest& WithTestId(const Aws::String& value) { SetTestId(value); return *this;}
    inline TestPayloadStructureRequest& WithTestId(Aws::String&& value) { SetTestId(std::move(value)); return *this;}
    inline TestPayloadStructureRequest& WithTestId(const char* value) { SetTestId(value); return *this;}
    ///@}

    ///@{
    
    inline const PayloadConfig& GetPayloadConfig() const{ return m_payloadConfig; }
    inline bool PayloadConfigHasBeenSet() const { return m_payloadConfigHasBeenSet; }
    inline void SetPayloadConfig(const PayloadConfig& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = value; }
    inline void SetPayloadConfig(PayloadConfig&& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = std::move(value); }
    inline TestPayloadStructureRequest& WithPayloadConfig(const PayloadConfig& value) { SetPayloadConfig(value); return *this;}
    inline TestPayloadStructureRequest& WithPayloadConfig(PayloadConfig&& value) { SetPayloadConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline TestPayloadStructureRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestPayloadStructureRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestPayloadStructureRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testId;
    bool m_testIdHasBeenSet = false;

    PayloadConfig m_payloadConfig;
    bool m_payloadConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
