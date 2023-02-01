/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelPackagingDescription.h>
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
  class DescribeModelPackagingJobResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobResult();
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeModelPackagingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the model packaging job. </p>
     */
    inline const ModelPackagingDescription& GetModelPackagingDescription() const{ return m_modelPackagingDescription; }

    /**
     * <p>The description of the model packaging job. </p>
     */
    inline void SetModelPackagingDescription(const ModelPackagingDescription& value) { m_modelPackagingDescription = value; }

    /**
     * <p>The description of the model packaging job. </p>
     */
    inline void SetModelPackagingDescription(ModelPackagingDescription&& value) { m_modelPackagingDescription = std::move(value); }

    /**
     * <p>The description of the model packaging job. </p>
     */
    inline DescribeModelPackagingJobResult& WithModelPackagingDescription(const ModelPackagingDescription& value) { SetModelPackagingDescription(value); return *this;}

    /**
     * <p>The description of the model packaging job. </p>
     */
    inline DescribeModelPackagingJobResult& WithModelPackagingDescription(ModelPackagingDescription&& value) { SetModelPackagingDescription(std::move(value)); return *this;}

  private:

    ModelPackagingDescription m_modelPackagingDescription;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
