﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentTemplate.h>
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
namespace FIS
{
namespace Model
{
  class UpdateExperimentTemplateResult
  {
  public:
    AWS_FIS_API UpdateExperimentTemplateResult();
    AWS_FIS_API UpdateExperimentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API UpdateExperimentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the experiment template.</p>
     */
    inline const ExperimentTemplate& GetExperimentTemplate() const{ return m_experimentTemplate; }
    inline void SetExperimentTemplate(const ExperimentTemplate& value) { m_experimentTemplate = value; }
    inline void SetExperimentTemplate(ExperimentTemplate&& value) { m_experimentTemplate = std::move(value); }
    inline UpdateExperimentTemplateResult& WithExperimentTemplate(const ExperimentTemplate& value) { SetExperimentTemplate(value); return *this;}
    inline UpdateExperimentTemplateResult& WithExperimentTemplate(ExperimentTemplate&& value) { SetExperimentTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateExperimentTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateExperimentTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateExperimentTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ExperimentTemplate m_experimentTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
