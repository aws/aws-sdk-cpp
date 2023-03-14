/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/SubnetGroup.h>
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
namespace DAX
{
namespace Model
{
  class CreateSubnetGroupResult
  {
  public:
    AWS_DAX_API CreateSubnetGroupResult();
    AWS_DAX_API CreateSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API CreateSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline const SubnetGroup& GetSubnetGroup() const{ return m_subnetGroup; }

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline void SetSubnetGroup(const SubnetGroup& value) { m_subnetGroup = value; }

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline void SetSubnetGroup(SubnetGroup&& value) { m_subnetGroup = std::move(value); }

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline CreateSubnetGroupResult& WithSubnetGroup(const SubnetGroup& value) { SetSubnetGroup(value); return *this;}

    /**
     * <p>Represents the output of a <i>CreateSubnetGroup</i> operation.</p>
     */
    inline CreateSubnetGroupResult& WithSubnetGroup(SubnetGroup&& value) { SetSubnetGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSubnetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSubnetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSubnetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SubnetGroup m_subnetGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
