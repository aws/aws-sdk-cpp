/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Output of a create workload call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadOutput">AWS
   * API Reference</a></p>
   */
  class CreateWorkloadResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateWorkloadResult();
    AWS_WELLARCHITECTED_API CreateWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline CreateWorkloadResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline CreateWorkloadResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline CreateWorkloadResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetWorkloadArn() const{ return m_workloadArn; }

    
    inline void SetWorkloadArn(const Aws::String& value) { m_workloadArn = value; }

    
    inline void SetWorkloadArn(Aws::String&& value) { m_workloadArn = std::move(value); }

    
    inline void SetWorkloadArn(const char* value) { m_workloadArn.assign(value); }

    
    inline CreateWorkloadResult& WithWorkloadArn(const Aws::String& value) { SetWorkloadArn(value); return *this;}

    
    inline CreateWorkloadResult& WithWorkloadArn(Aws::String&& value) { SetWorkloadArn(std::move(value)); return *this;}

    
    inline CreateWorkloadResult& WithWorkloadArn(const char* value) { SetWorkloadArn(value); return *this;}

  private:

    Aws::String m_workloadId;

    Aws::String m_workloadArn;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
