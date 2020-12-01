/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/CloudFormationHealth.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AWS_DEVOPSGURU_API DescribeResourceCollectionHealthResult
  {
  public:
    DescribeResourceCollectionHealthResult();
    DescribeResourceCollectionHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeResourceCollectionHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<CloudFormationHealth>& GetCloudFormation() const{ return m_cloudFormation; }

    
    inline void SetCloudFormation(const Aws::Vector<CloudFormationHealth>& value) { m_cloudFormation = value; }

    
    inline void SetCloudFormation(Aws::Vector<CloudFormationHealth>&& value) { m_cloudFormation = std::move(value); }

    
    inline DescribeResourceCollectionHealthResult& WithCloudFormation(const Aws::Vector<CloudFormationHealth>& value) { SetCloudFormation(value); return *this;}

    
    inline DescribeResourceCollectionHealthResult& WithCloudFormation(Aws::Vector<CloudFormationHealth>&& value) { SetCloudFormation(std::move(value)); return *this;}

    
    inline DescribeResourceCollectionHealthResult& AddCloudFormation(const CloudFormationHealth& value) { m_cloudFormation.push_back(value); return *this; }

    
    inline DescribeResourceCollectionHealthResult& AddCloudFormation(CloudFormationHealth&& value) { m_cloudFormation.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeResourceCollectionHealthResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeResourceCollectionHealthResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeResourceCollectionHealthResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CloudFormationHealth> m_cloudFormation;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
