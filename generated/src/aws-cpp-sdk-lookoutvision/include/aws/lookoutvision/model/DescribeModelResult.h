/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelDescription.h>
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
  class DescribeModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DescribeModelResult();
    AWS_LOOKOUTFORVISION_API DescribeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DescribeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the description of the model.</p>
     */
    inline const ModelDescription& GetModelDescription() const{ return m_modelDescription; }

    /**
     * <p>Contains the description of the model.</p>
     */
    inline void SetModelDescription(const ModelDescription& value) { m_modelDescription = value; }

    /**
     * <p>Contains the description of the model.</p>
     */
    inline void SetModelDescription(ModelDescription&& value) { m_modelDescription = std::move(value); }

    /**
     * <p>Contains the description of the model.</p>
     */
    inline DescribeModelResult& WithModelDescription(const ModelDescription& value) { SetModelDescription(value); return *this;}

    /**
     * <p>Contains the description of the model.</p>
     */
    inline DescribeModelResult& WithModelDescription(ModelDescription&& value) { SetModelDescription(std::move(value)); return *this;}

  private:

    ModelDescription m_modelDescription;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
