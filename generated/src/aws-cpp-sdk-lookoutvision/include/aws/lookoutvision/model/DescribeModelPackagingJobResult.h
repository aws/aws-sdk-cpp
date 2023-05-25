/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelPackagingDescription.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeModelPackagingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeModelPackagingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeModelPackagingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ModelPackagingDescription m_modelPackagingDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
