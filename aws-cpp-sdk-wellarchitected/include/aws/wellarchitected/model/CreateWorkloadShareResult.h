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
   * <p>Input for Create Workload Share</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadShareOutput">AWS
   * API Reference</a></p>
   */
  class CreateWorkloadShareResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateWorkloadShareResult();
    AWS_WELLARCHITECTED_API CreateWorkloadShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateWorkloadShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline CreateWorkloadShareResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline CreateWorkloadShareResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline CreateWorkloadShareResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline void SetShareId(const Aws::String& value) { m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareId.assign(value); }

    
    inline CreateWorkloadShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline CreateWorkloadShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline CreateWorkloadShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}

  private:

    Aws::String m_workloadId;

    Aws::String m_shareId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
