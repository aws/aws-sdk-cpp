/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateLayoutResult
  {
  public:
    AWS_CONNECTCASES_API CreateLayoutResult();
    AWS_CONNECTCASES_API CreateLayoutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateLayoutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const{ return m_layoutArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline void SetLayoutArn(const Aws::String& value) { m_layoutArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline void SetLayoutArn(Aws::String&& value) { m_layoutArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline void SetLayoutArn(const char* value) { m_layoutArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline CreateLayoutResult& WithLayoutArn(const Aws::String& value) { SetLayoutArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline CreateLayoutResult& WithLayoutArn(Aws::String&& value) { SetLayoutArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline CreateLayoutResult& WithLayoutArn(const char* value) { SetLayoutArn(value); return *this;}


    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(const Aws::String& value) { m_layoutId = value; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(Aws::String&& value) { m_layoutId = std::move(value); }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(const char* value) { m_layoutId.assign(value); }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline CreateLayoutResult& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline CreateLayoutResult& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline CreateLayoutResult& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}

  private:

    Aws::String m_layoutArn;

    Aws::String m_layoutId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
