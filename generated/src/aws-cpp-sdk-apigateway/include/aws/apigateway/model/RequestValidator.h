﻿/**
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
    AWS_APIGATEWAY_API RequestValidator() = default;
    AWS_APIGATEWAY_API RequestValidator(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API RequestValidator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of this RequestValidator.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RequestValidator& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this RequestValidator</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RequestValidator& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate a request body according to
     * the configured Model schema.</p>
     */
    inline bool GetValidateRequestBody() const { return m_validateRequestBody; }
    inline bool ValidateRequestBodyHasBeenSet() const { return m_validateRequestBodyHasBeenSet; }
    inline void SetValidateRequestBody(bool value) { m_validateRequestBodyHasBeenSet = true; m_validateRequestBody = value; }
    inline RequestValidator& WithValidateRequestBody(bool value) { SetValidateRequestBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether to validate request parameters
     * (<code>true</code>) or not (<code>false</code>).</p>
     */
    inline bool GetValidateRequestParameters() const { return m_validateRequestParameters; }
    inline bool ValidateRequestParametersHasBeenSet() const { return m_validateRequestParametersHasBeenSet; }
    inline void SetValidateRequestParameters(bool value) { m_validateRequestParametersHasBeenSet = true; m_validateRequestParameters = value; }
    inline RequestValidator& WithValidateRequestParameters(bool value) { SetValidateRequestParameters(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RequestValidator& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_validateRequestBody{false};
    bool m_validateRequestBodyHasBeenSet = false;

    bool m_validateRequestParameters{false};
    bool m_validateRequestParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
