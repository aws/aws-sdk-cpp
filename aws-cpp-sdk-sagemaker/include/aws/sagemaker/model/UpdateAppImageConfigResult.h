/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class UpdateAppImageConfigResult
  {
  public:
    AWS_SAGEMAKER_API UpdateAppImageConfigResult();
    AWS_SAGEMAKER_API UpdateAppImageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateAppImageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const{ return m_appImageConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(const Aws::String& value) { m_appImageConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(Aws::String&& value) { m_appImageConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(const char* value) { m_appImageConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline UpdateAppImageConfigResult& WithAppImageConfigArn(const Aws::String& value) { SetAppImageConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline UpdateAppImageConfigResult& WithAppImageConfigArn(Aws::String&& value) { SetAppImageConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the AppImageConfig.</p>
     */
    inline UpdateAppImageConfigResult& WithAppImageConfigArn(const char* value) { SetAppImageConfigArn(value); return *this;}

  private:

    Aws::String m_appImageConfigArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
