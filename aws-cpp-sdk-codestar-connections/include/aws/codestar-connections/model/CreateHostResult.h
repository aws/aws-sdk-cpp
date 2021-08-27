/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class AWS_CODESTARCONNECTIONS_API CreateHostResult
  {
  public:
    CreateHostResult();
    CreateHostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline void SetHostArn(const Aws::String& value) { m_hostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline void SetHostArn(Aws::String&& value) { m_hostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline void SetHostArn(const char* value) { m_hostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline CreateHostResult& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline CreateHostResult& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline CreateHostResult& WithHostArn(const char* value) { SetHostArn(value); return *this;}

  private:

    Aws::String m_hostArn;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
