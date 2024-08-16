/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/StatisticModelResult.h>
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
namespace Glue
{
namespace Model
{
  class GetDataQualityModelResultResult
  {
  public:
    AWS_GLUE_API GetDataQualityModelResultResult();
    AWS_GLUE_API GetDataQualityModelResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataQualityModelResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp when the data quality model training completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOn = std::move(value); }
    inline GetDataQualityModelResultResult& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline GetDataQualityModelResultResult& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>StatisticModelResult</code> </p>
     */
    inline const Aws::Vector<StatisticModelResult>& GetModel() const{ return m_model; }
    inline void SetModel(const Aws::Vector<StatisticModelResult>& value) { m_model = value; }
    inline void SetModel(Aws::Vector<StatisticModelResult>&& value) { m_model = std::move(value); }
    inline GetDataQualityModelResultResult& WithModel(const Aws::Vector<StatisticModelResult>& value) { SetModel(value); return *this;}
    inline GetDataQualityModelResultResult& WithModel(Aws::Vector<StatisticModelResult>&& value) { SetModel(std::move(value)); return *this;}
    inline GetDataQualityModelResultResult& AddModel(const StatisticModelResult& value) { m_model.push_back(value); return *this; }
    inline GetDataQualityModelResultResult& AddModel(StatisticModelResult&& value) { m_model.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataQualityModelResultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataQualityModelResultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataQualityModelResultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completedOn;

    Aws::Vector<StatisticModelResult> m_model;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
