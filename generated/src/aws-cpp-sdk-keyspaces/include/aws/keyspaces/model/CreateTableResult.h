/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{
  class CreateTableResult
  {
  public:
    AWS_KEYSPACES_API CreateTableResult();
    AWS_KEYSPACES_API CreateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API CreateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateTableResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateTableResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the table in the format of an Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateTableResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
