﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>

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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Contains the details of the transaction to abort.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/AbortTransactionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_QLDBSESSION_API AbortTransactionRequest
  {
  public:
    AbortTransactionRequest();
    AbortTransactionRequest(Aws::Utils::Json::JsonView jsonValue);
    AbortTransactionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
