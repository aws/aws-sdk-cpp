/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Stack.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{
  class UpdateStackResult
  {
  public:
    AWS_APPSTREAM_API UpdateStackResult();
    AWS_APPSTREAM_API UpdateStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API UpdateStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the stack.</p>
     */
    inline const Stack& GetStack() const{ return m_stack; }

    /**
     * <p>Information about the stack.</p>
     */
    inline void SetStack(const Stack& value) { m_stack = value; }

    /**
     * <p>Information about the stack.</p>
     */
    inline void SetStack(Stack&& value) { m_stack = std::move(value); }

    /**
     * <p>Information about the stack.</p>
     */
    inline UpdateStackResult& WithStack(const Stack& value) { SetStack(value); return *this;}

    /**
     * <p>Information about the stack.</p>
     */
    inline UpdateStackResult& WithStack(Stack&& value) { SetStack(std::move(value)); return *this;}

  private:

    Stack m_stack;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
