/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A set of validation rules for incoming Method requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/RequestValidator">AWS
   * API Reference</a></p>
   */
  class RequestValidator
  {
  public:
    AWS_APIGATEWAY_API RequestValidator();
    AWS_APIGATEWAY_API RequestValidator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API RequestValidator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of this RequestValidator.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RequestValidator& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RequestValidator& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RequestValidator& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this RequestValidator</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RequestValidator& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RequestValidator& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RequestValidator& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured Model schema.</p>
     */
    inline bool GetValidateRequestBody() const{ return m_validateRequestBody; }
    inline bool ValidateRequestBodyHasBeenSet() const { return m_validateRequestBodyHasBeenSet; }
    inline void SetValidateRequestBody(bool value) { m_validateRequestBodyHasBeenSet = true; m_validateRequestBody = value; }
    inline RequestValidator& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline bool GetValidateRequestParameters() const{ return m_validateRequestParameters; }
    inline bool ValidateRequestParametersHasBeenSet() const { return m_validateRequestParametersHasBeenSet; }
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParametersHasBeenSet = true; m_validateRequestParameters = value; }
    inline RequestValidator& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline RequestValidator& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RequestValidator& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RequestValidator& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_validateRequestBody;
    bool m_validateRequestBodyHasBeenSet = false;

    bool m_validateRequestParameters;
    bool m_validateRequestParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
