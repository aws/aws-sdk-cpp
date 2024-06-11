﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class StartCalculationExecutionRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API StartCalculationExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCalculationExecution"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline StartCalculationExecutionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StartCalculationExecutionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StartCalculationExecutionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the calculation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartCalculationExecutionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartCalculationExecutionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartCalculationExecutionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains the code of the calculation. Use this parameter
     * instead of <a>CalculationConfiguration$CodeBlock</a>, which is deprecated.</p>
     */
    inline const Aws::String& GetCodeBlock() const{ return m_codeBlock; }
    inline bool CodeBlockHasBeenSet() const { return m_codeBlockHasBeenSet; }
    inline void SetCodeBlock(const Aws::String& value) { m_codeBlockHasBeenSet = true; m_codeBlock = value; }
    inline void SetCodeBlock(Aws::String&& value) { m_codeBlockHasBeenSet = true; m_codeBlock = std::move(value); }
    inline void SetCodeBlock(const char* value) { m_codeBlockHasBeenSet = true; m_codeBlock.assign(value); }
    inline StartCalculationExecutionRequest& WithCodeBlock(const Aws::String& value) { SetCodeBlock(value); return *this;}
    inline StartCalculationExecutionRequest& WithCodeBlock(Aws::String&& value) { SetCodeBlock(std::move(value)); return *this;}
    inline StartCalculationExecutionRequest& WithCodeBlock(const char* value) { SetCodeBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * calculation is idempotent (executes only once). If another
     * <code>StartCalculationExecutionRequest</code> is received, the same response is
     * returned and another calculation is not created. If a parameter has changed, an
     * error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartCalculationExecutionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartCalculationExecutionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartCalculationExecutionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_codeBlock;
    bool m_codeBlockHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
