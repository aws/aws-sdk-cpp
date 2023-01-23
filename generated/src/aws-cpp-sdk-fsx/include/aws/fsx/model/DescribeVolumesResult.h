/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Volume.h>
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
namespace FSx
{
namespace Model
{
  class DescribeVolumesResult
  {
  public:
    AWS_FSX_API DescribeVolumesResult();
    AWS_FSX_API DescribeVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumes = value; }

    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumes = std::move(value); }

    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline DescribeVolumesResult& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline DescribeVolumesResult& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline DescribeVolumesResult& AddVolumes(const Volume& value) { m_volumes.push_back(value); return *this; }

    /**
     * <p>Returned after a successful <code>DescribeVolumes</code> operation,
     * describing each volume.</p>
     */
    inline DescribeVolumesResult& AddVolumes(Volume&& value) { m_volumes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeVolumesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeVolumesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeVolumesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Volume> m_volumes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
