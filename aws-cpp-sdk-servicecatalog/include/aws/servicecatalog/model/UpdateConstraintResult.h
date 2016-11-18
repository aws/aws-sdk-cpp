﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ConstraintDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Status.h>

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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API UpdateConstraintResult
  {
  public:
    UpdateConstraintResult();
    UpdateConstraintResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateConstraintResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The resulting detailed constraint information.</p>
     */
    inline const ConstraintDetail& GetConstraintDetail() const{ return m_constraintDetail; }

    /**
     * <p>The resulting detailed constraint information.</p>
     */
    inline void SetConstraintDetail(const ConstraintDetail& value) { m_constraintDetail = value; }

    /**
     * <p>The resulting detailed constraint information.</p>
     */
    inline void SetConstraintDetail(ConstraintDetail&& value) { m_constraintDetail = value; }

    /**
     * <p>The resulting detailed constraint information.</p>
     */
    inline UpdateConstraintResult& WithConstraintDetail(const ConstraintDetail& value) { SetConstraintDetail(value); return *this;}

    /**
     * <p>The resulting detailed constraint information.</p>
     */
    inline UpdateConstraintResult& WithConstraintDetail(ConstraintDetail&& value) { SetConstraintDetail(value); return *this;}

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline const Aws::String& GetConstraintParameters() const{ return m_constraintParameters; }

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline void SetConstraintParameters(const Aws::String& value) { m_constraintParameters = value; }

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline void SetConstraintParameters(Aws::String&& value) { m_constraintParameters = value; }

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline void SetConstraintParameters(const char* value) { m_constraintParameters.assign(value); }

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline UpdateConstraintResult& WithConstraintParameters(const Aws::String& value) { SetConstraintParameters(value); return *this;}

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline UpdateConstraintResult& WithConstraintParameters(Aws::String&& value) { SetConstraintParameters(value); return *this;}

    /**
     * <p>The resulting updated constraint parameters.</p>
     */
    inline UpdateConstraintResult& WithConstraintParameters(const char* value) { SetConstraintParameters(value); return *this;}

    /**
     * <p>The status of the current request.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the current request.</p>
     */
    inline void SetStatus(Status&& value) { m_status = value; }

    /**
     * <p>The status of the current request.</p>
     */
    inline UpdateConstraintResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the current request.</p>
     */
    inline UpdateConstraintResult& WithStatus(Status&& value) { SetStatus(value); return *this;}

  private:
    ConstraintDetail m_constraintDetail;
    Aws::String m_constraintParameters;
    Status m_status;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
