/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/model/ComplexNestedErrorData.h>
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
namespace JsonProtocol
{
namespace Model
{

  /**
   * <p>This error is thrown when a request is invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/ComplexError">AWS
   * API Reference</a></p>
   */
  class ComplexError
  {
  public:
    AWS_JSONPROTOCOL_API ComplexError();
    AWS_JSONPROTOCOL_API ComplexError(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONPROTOCOL_API ComplexError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetTopLevel() const{ return m_topLevel; }
    inline bool TopLevelHasBeenSet() const { return m_topLevelHasBeenSet; }
    inline void SetTopLevel(const Aws::String& value) { m_topLevelHasBeenSet = true; m_topLevel = value; }
    inline void SetTopLevel(Aws::String&& value) { m_topLevelHasBeenSet = true; m_topLevel = std::move(value); }
    inline void SetTopLevel(const char* value) { m_topLevelHasBeenSet = true; m_topLevel.assign(value); }
    inline ComplexError& WithTopLevel(const Aws::String& value) { SetTopLevel(value); return *this;}
    inline ComplexError& WithTopLevel(Aws::String&& value) { SetTopLevel(std::move(value)); return *this;}
    inline ComplexError& WithTopLevel(const char* value) { SetTopLevel(value); return *this;}
    ///@}

    ///@{
    
    inline const ComplexNestedErrorData& GetNested() const{ return m_nested; }
    inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
    inline void SetNested(const ComplexNestedErrorData& value) { m_nestedHasBeenSet = true; m_nested = value; }
    inline void SetNested(ComplexNestedErrorData&& value) { m_nestedHasBeenSet = true; m_nested = std::move(value); }
    inline ComplexError& WithNested(const ComplexNestedErrorData& value) { SetNested(value); return *this;}
    inline ComplexError& WithNested(ComplexNestedErrorData&& value) { SetNested(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_topLevel;
    bool m_topLevelHasBeenSet = false;

    ComplexNestedErrorData m_nested;
    bool m_nestedHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
