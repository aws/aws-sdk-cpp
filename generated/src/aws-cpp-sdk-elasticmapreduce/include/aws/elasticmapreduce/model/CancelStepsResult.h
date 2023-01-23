/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/CancelStepsInfo.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p> The output for the <a>CancelSteps</a> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelStepsOutput">AWS
   * API Reference</a></p>
   */
  class CancelStepsResult
  {
  public:
    AWS_EMR_API CancelStepsResult();
    AWS_EMR_API CancelStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API CancelStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline const Aws::Vector<CancelStepsInfo>& GetCancelStepsInfoList() const{ return m_cancelStepsInfoList; }

    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline void SetCancelStepsInfoList(const Aws::Vector<CancelStepsInfo>& value) { m_cancelStepsInfoList = value; }

    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline void SetCancelStepsInfoList(Aws::Vector<CancelStepsInfo>&& value) { m_cancelStepsInfoList = std::move(value); }

    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline CancelStepsResult& WithCancelStepsInfoList(const Aws::Vector<CancelStepsInfo>& value) { SetCancelStepsInfoList(value); return *this;}

    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline CancelStepsResult& WithCancelStepsInfoList(Aws::Vector<CancelStepsInfo>&& value) { SetCancelStepsInfoList(std::move(value)); return *this;}

    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline CancelStepsResult& AddCancelStepsInfoList(const CancelStepsInfo& value) { m_cancelStepsInfoList.push_back(value); return *this; }

    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline CancelStepsResult& AddCancelStepsInfoList(CancelStepsInfo&& value) { m_cancelStepsInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CancelStepsInfo> m_cancelStepsInfoList;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
