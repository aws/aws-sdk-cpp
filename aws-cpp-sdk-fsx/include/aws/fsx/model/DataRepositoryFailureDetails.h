﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Provides detailed information about the data respository if its
   * <code>Lifecycle</code> is set to <code>MISCONFIGURED</code> or
   * <code>FAILED</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryFailureDetails">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DataRepositoryFailureDetails
  {
  public:
    DataRepositoryFailureDetails();
    DataRepositoryFailureDetails(Aws::Utils::Json::JsonView jsonValue);
    DataRepositoryFailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DataRepositoryFailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DataRepositoryFailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DataRepositoryFailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
