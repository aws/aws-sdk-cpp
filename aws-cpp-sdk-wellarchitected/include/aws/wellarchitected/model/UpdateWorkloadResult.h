/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Workload.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Output of an update workload call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadOutput">AWS
   * API Reference</a></p>
   */
  class UpdateWorkloadResult
  {
  public:
    AWS_WELLARCHITECTED_API UpdateWorkloadResult();
    AWS_WELLARCHITECTED_API UpdateWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Workload& GetWorkload() const{ return m_workload; }

    
    inline void SetWorkload(const Workload& value) { m_workload = value; }

    
    inline void SetWorkload(Workload&& value) { m_workload = std::move(value); }

    
    inline UpdateWorkloadResult& WithWorkload(const Workload& value) { SetWorkload(value); return *this;}

    
    inline UpdateWorkloadResult& WithWorkload(Workload&& value) { SetWorkload(std::move(value)); return *this;}

  private:

    Workload m_workload;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
