/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateUseCaseResult
  {
  public:
    AWS_CONNECT_API CreateUseCaseResult();
    AWS_CONNECT_API CreateUseCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateUseCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the use case.</p>
     */
    inline const Aws::String& GetUseCaseId() const{ return m_useCaseId; }

    /**
     * <p>The identifier of the use case.</p>
     */
    inline void SetUseCaseId(const Aws::String& value) { m_useCaseId = value; }

    /**
     * <p>The identifier of the use case.</p>
     */
    inline void SetUseCaseId(Aws::String&& value) { m_useCaseId = std::move(value); }

    /**
     * <p>The identifier of the use case.</p>
     */
    inline void SetUseCaseId(const char* value) { m_useCaseId.assign(value); }

    /**
     * <p>The identifier of the use case.</p>
     */
    inline CreateUseCaseResult& WithUseCaseId(const Aws::String& value) { SetUseCaseId(value); return *this;}

    /**
     * <p>The identifier of the use case.</p>
     */
    inline CreateUseCaseResult& WithUseCaseId(Aws::String&& value) { SetUseCaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the use case.</p>
     */
    inline CreateUseCaseResult& WithUseCaseId(const char* value) { SetUseCaseId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline const Aws::String& GetUseCaseArn() const{ return m_useCaseArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline void SetUseCaseArn(const Aws::String& value) { m_useCaseArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline void SetUseCaseArn(Aws::String&& value) { m_useCaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline void SetUseCaseArn(const char* value) { m_useCaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline CreateUseCaseResult& WithUseCaseArn(const Aws::String& value) { SetUseCaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline CreateUseCaseResult& WithUseCaseArn(Aws::String&& value) { SetUseCaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the use case.</p>
     */
    inline CreateUseCaseResult& WithUseCaseArn(const char* value) { SetUseCaseArn(value); return *this;}

  private:

    Aws::String m_useCaseId;

    Aws::String m_useCaseArn;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
