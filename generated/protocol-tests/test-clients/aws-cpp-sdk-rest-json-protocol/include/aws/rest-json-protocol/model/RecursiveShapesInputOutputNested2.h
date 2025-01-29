/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
namespace RestJsonProtocol
{
namespace Model
{
  class RecursiveShapesInputOutputNested1;

  class RecursiveShapesInputOutputNested2
  {
  public:
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested2();
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested2(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetBar() const{ return m_bar; }
    inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
    inline void SetBar(const Aws::String& value) { m_barHasBeenSet = true; m_bar = value; }
    inline void SetBar(Aws::String&& value) { m_barHasBeenSet = true; m_bar = std::move(value); }
    inline void SetBar(const char* value) { m_barHasBeenSet = true; m_bar.assign(value); }
    inline RecursiveShapesInputOutputNested2& WithBar(const Aws::String& value) { SetBar(value); return *this;}
    inline RecursiveShapesInputOutputNested2& WithBar(Aws::String&& value) { SetBar(std::move(value)); return *this;}
    inline RecursiveShapesInputOutputNested2& WithBar(const char* value) { SetBar(value); return *this;}
    ///@}

    ///@{
    
    AWS_RESTJSONPROTOCOL_API const RecursiveShapesInputOutputNested1& GetRecursiveMember() const;
    AWS_RESTJSONPROTOCOL_API bool RecursiveMemberHasBeenSet() const;
    AWS_RESTJSONPROTOCOL_API void SetRecursiveMember(const RecursiveShapesInputOutputNested1& value);
    AWS_RESTJSONPROTOCOL_API void SetRecursiveMember(RecursiveShapesInputOutputNested1&& value);
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested2& WithRecursiveMember(const RecursiveShapesInputOutputNested1& value);
    AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested2& WithRecursiveMember(RecursiveShapesInputOutputNested1&& value);
    ///@}
  private:

    Aws::String m_bar;
    bool m_barHasBeenSet = false;

    std::shared_ptr<RecursiveShapesInputOutputNested1> m_recursiveMember;
    bool m_recursiveMemberHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
