﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/FulfillmentActivityType.h>
#include <aws/lex-models/model/CodeHook.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p> Describes how the intent is fulfilled after the user provides all of the
   * information required for the intent. You can provide a Lambda function to
   * process the intent, or you can return the intent information to the client
   * application. We recommend that you use a Lambda function so that the relevant
   * logic lives in the Cloud and limit the client-side code primarily to
   * presentation. If you need to update the logic, you only update the Lambda
   * function; you don't need to upgrade your client application. </p> <p>Consider
   * the following examples:</p> <ul> <li> <p>In a pizza ordering application, after
   * the user provides all of the information for placing an order, you use a Lambda
   * function to place an order with a pizzeria. </p> </li> <li> <p>In a gaming
   * application, when a user says "pick up a rock," this information must go back to
   * the client application so that it can perform the operation and update the
   * graphics. In this case, you want Amazon Lex to return the intent data to the
   * client. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/FulfillmentActivity">AWS
   * API Reference</a></p>
   */
  class FulfillmentActivity
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API FulfillmentActivity() = default;
    AWS_LEXMODELBUILDINGSERVICE_API FulfillmentActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API FulfillmentActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> How the intent should be fulfilled, either by running a Lambda function or
     * by returning the slot data to the client application. </p>
     */
    inline FulfillmentActivityType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FulfillmentActivityType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FulfillmentActivity& WithType(FulfillmentActivityType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the Lambda function that is run to fulfill the intent. </p>
     */
    inline const CodeHook& GetCodeHook() const { return m_codeHook; }
    inline bool CodeHookHasBeenSet() const { return m_codeHookHasBeenSet; }
    template<typename CodeHookT = CodeHook>
    void SetCodeHook(CodeHookT&& value) { m_codeHookHasBeenSet = true; m_codeHook = std::forward<CodeHookT>(value); }
    template<typename CodeHookT = CodeHook>
    FulfillmentActivity& WithCodeHook(CodeHookT&& value) { SetCodeHook(std::forward<CodeHookT>(value)); return *this;}
    ///@}
  private:

    FulfillmentActivityType m_type{FulfillmentActivityType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CodeHook m_codeHook;
    bool m_codeHookHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
