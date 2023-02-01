/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
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
namespace LookoutforVision
{
namespace Model
{
  class DeleteProjectResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DeleteProjectResult();
    AWS_LOOKOUTFORVISION_API DeleteProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DeleteProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline DeleteProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline DeleteProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project that was deleted.</p>
     */
    inline DeleteProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}

  private:

    Aws::String m_projectArn;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
