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
  class UpdateHubResult
  {
  public:
    AWS_SAGEMAKER_API UpdateHubResult();
    AWS_SAGEMAKER_API UpdateHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline UpdateHubResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline UpdateHubResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated hub.</p>
     */
    inline UpdateHubResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}

  private:

    Aws::String m_hubArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
