/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/InstanceTypeItem.h>
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
namespace Outposts
{
namespace Model
{
  class GetOutpostInstanceTypesResult
  {
  public:
    AWS_OUTPOSTS_API GetOutpostInstanceTypesResult();
    AWS_OUTPOSTS_API GetOutpostInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetOutpostInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<InstanceTypeItem>& GetInstanceTypes() const{ return m_instanceTypes; }

    
    inline void SetInstanceTypes(const Aws::Vector<InstanceTypeItem>& value) { m_instanceTypes = value; }

    
    inline void SetInstanceTypes(Aws::Vector<InstanceTypeItem>&& value) { m_instanceTypes = std::move(value); }

    
    inline GetOutpostInstanceTypesResult& WithInstanceTypes(const Aws::Vector<InstanceTypeItem>& value) { SetInstanceTypes(value); return *this;}

    
    inline GetOutpostInstanceTypesResult& WithInstanceTypes(Aws::Vector<InstanceTypeItem>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    
    inline GetOutpostInstanceTypesResult& AddInstanceTypes(const InstanceTypeItem& value) { m_instanceTypes.push_back(value); return *this; }

    
    inline GetOutpostInstanceTypesResult& AddInstanceTypes(InstanceTypeItem&& value) { m_instanceTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetOutpostInstanceTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetOutpostInstanceTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetOutpostInstanceTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The ID of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostId = value; }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostId = std::move(value); }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline void SetOutpostId(const char* value) { m_outpostId.assign(value); }

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline GetOutpostInstanceTypesResult& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline GetOutpostInstanceTypesResult& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Outpost. </p>
     */
    inline GetOutpostInstanceTypesResult& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArn = value; }

    
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArn = std::move(value); }

    
    inline void SetOutpostArn(const char* value) { m_outpostArn.assign(value); }

    
    inline GetOutpostInstanceTypesResult& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    
    inline GetOutpostInstanceTypesResult& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    
    inline GetOutpostInstanceTypesResult& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}

  private:

    Aws::Vector<InstanceTypeItem> m_instanceTypes;

    Aws::String m_nextToken;

    Aws::String m_outpostId;

    Aws::String m_outpostArn;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
