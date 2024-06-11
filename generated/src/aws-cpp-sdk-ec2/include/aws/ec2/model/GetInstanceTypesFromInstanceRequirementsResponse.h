﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceTypeInfoFromInstanceRequirements.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetInstanceTypesFromInstanceRequirementsResponse
  {
  public:
    AWS_EC2_API GetInstanceTypesFromInstanceRequirementsResponse();
    AWS_EC2_API GetInstanceTypesFromInstanceRequirementsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetInstanceTypesFromInstanceRequirementsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The instance types with the specified instance attributes.</p>
     */
    inline const Aws::Vector<InstanceTypeInfoFromInstanceRequirements>& GetInstanceTypes() const{ return m_instanceTypes; }
    inline void SetInstanceTypes(const Aws::Vector<InstanceTypeInfoFromInstanceRequirements>& value) { m_instanceTypes = value; }
    inline void SetInstanceTypes(Aws::Vector<InstanceTypeInfoFromInstanceRequirements>&& value) { m_instanceTypes = std::move(value); }
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithInstanceTypes(const Aws::Vector<InstanceTypeInfoFromInstanceRequirements>& value) { SetInstanceTypes(value); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithInstanceTypes(Aws::Vector<InstanceTypeInfoFromInstanceRequirements>&& value) { SetInstanceTypes(std::move(value)); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsResponse& AddInstanceTypes(const InstanceTypeInfoFromInstanceRequirements& value) { m_instanceTypes.push_back(value); return *this; }
    inline GetInstanceTypesFromInstanceRequirementsResponse& AddInstanceTypes(InstanceTypeInfoFromInstanceRequirements&& value) { m_instanceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetInstanceTypesFromInstanceRequirementsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceTypeInfoFromInstanceRequirements> m_instanceTypes;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
