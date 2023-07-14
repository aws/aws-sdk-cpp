﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelHostingStatus.h>
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
  class AWS_LOOKOUTFORVISION_API StopModelResult
  {
  public:
    StopModelResult();
    StopModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the model.</p>
     */
    inline const ModelHostingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model.</p>
     */
    inline void SetStatus(const ModelHostingStatus& value) { m_status = value; }

    /**
     * <p>The status of the model.</p>
     */
    inline void SetStatus(ModelHostingStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the model.</p>
     */
    inline StopModelResult& WithStatus(const ModelHostingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model.</p>
     */
    inline StopModelResult& WithStatus(ModelHostingStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ModelHostingStatus m_status;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
